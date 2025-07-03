import cv2
import mediapipe as mp
import pyautogui
import subprocess
import time

# Initialize MediaPipe Hands
mp_hands = mp.solutions.hands
hands = mp_hands.Hands(max_num_hands=1, min_detection_confidence=0.7)
mp_draw = mp.solutions.drawing_utils

# Webcam
cap = cv2.VideoCapture(0)

# Finger tip landmarks (Index, Middle, Ring, Pinky)
fingertips = [8, 12, 16, 20]

# Track action cooldown
last_action_time = time.time()

def count_fingers(hand_landmarks):
    count = 0

    # Thumb (horizontal check)
    if hand_landmarks.landmark[4].x < hand_landmarks.landmark[3].x:
        count += 1

    # Other fingers (vertical check)
    for tip in fingertips:
        if hand_landmarks.landmark[tip].y < hand_landmarks.landmark[tip - 2].y:
            count += 1

    return count

def perform_action(finger_count):
    global last_action_time
    current_time = time.time()

    # Cooldown to prevent repeating actions
    if current_time - last_action_time < 1.5:
        return

    last_action_time = current_time

    if finger_count == 1:
        pyautogui.moveRel(50, 0, duration=0.2)
        print("Mouse moved right")
    
    elif finger_count == 2:
        pyautogui.click()
        print("Left Click")

    elif finger_count == 3:
        pyautogui.rightClick()
        print("Right Click")

    elif finger_count == 4:
        subprocess.Popen(["notepad.exe"])
        print("Opening Notepad")

    elif finger_count == 5:
        pyautogui.hotkey('win', 'd')  # Minimize all
        print("Minimizing all windows")

    elif finger_count == 0:
        pyautogui.hotkey('alt', 'f4')  # Close app
        print("Closing current window")

while True:
    success, img = cap.read()
    if not success:
        continue

    img_rgb = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    results = hands.process(img_rgb)

    if results.multi_hand_landmarks:
        for hand_landmarks in results.multi_hand_landmarks:
            mp_draw.draw_landmarks(img, hand_landmarks, mp_hands.HAND_CONNECTIONS)

            fingers = count_fingers(hand_landmarks)
            perform_action(fingers)
    else:
        print("No hand detected")

    cv2.imshow("Gesture-Controlled Windows Assistant", img)
    if cv2.waitKey(1) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()
