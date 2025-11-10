#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    // Default constructor
    Rectangle() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    int area() {
        return length * breadth;
    }

    void display() {
        cout << "Length = " << length << ", Breadth = " << breadth
             << ", Area = " << area() << endl;
    }
};

int main() {
    Rectangle rect[3];   // Array of 3 Rectangle objects

    cout << "\n--- Rectangle Details ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << ": ";
        rect[i].display();
    }

    return 0;
}
