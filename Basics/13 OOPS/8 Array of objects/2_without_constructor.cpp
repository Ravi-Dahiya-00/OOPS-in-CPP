#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Function to take input
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Function to calculate perimeter
    int perimeter() {
        return 2 * (length + breadth);
    }

    // Function to display results
    void display() {
        cout << "Length = " << length
             << ", Breadth = " << breadth
             << ", Area = " << area()
             << ", Perimeter = " << perimeter() << endl;
    }
};

int main() {
   

    Rectangle rect[20];  // Array of objects (no constructor)

     int n;

    cout << "Enter number of rectangles: ";
    cin >> n;

    // Taking input for all objects
    for (int i = 0; i < n; i++) {
        cout << "\nRectangle " << i + 1 << ":\n";
        rect[i].input();
    }

    // Displaying all results
    cout << "\n--- Rectangle Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i + 1 << ": ";
        rect[i].display();
    }

    return 0;
}


/*
| Concept                               | Covered? | Explanation                 |
| ------------------------------------- | :------: | --------------------------- |
| Create an array of objects            |     ✅    | `Rectangle rect[n];`        |
| Use functions for input/output        |     ✅    | `input()` and `display()`   |
| Use member functions for calculations |     ✅    | `area()` and `perimeter()`  |
| Access each object in loop            |     ✅    | `rect[i].function()` syntax |
| Works for any number of objects       |     ✅    | You took `n` from the user  |
*/