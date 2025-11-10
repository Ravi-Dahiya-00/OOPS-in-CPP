#include <iostream>
using namespace std;

// Define a Rectangle class
class Rectangle {
private:
    int *length;   // Pointer for length (dynamic data member)
    int *breadth;  // Pointer for breadth (dynamic data member)

public:
    // ---------------------------------------------
    // Default Constructor
    // ---------------------------------------------
    // - Allocates memory for length and breadth dynamically using 'new'
    // - Takes input from the user for both values
    Rectangle() {
        // Allocate memory on the heap
        length = new int;
        breadth = new int;

        // Take input from the user
        cout << "Enter length: ";
        cin >> *length;

        cout << "Enter breadth: ";
        cin >> *breadth;
    }

    // ---------------------------------------------
    // Member Function: area()
    // ---------------------------------------------
    // - Calculates and returns the area of the rectangle
    int area() {
        return (*length) * (*breadth);  // Dereference pointers to access values
    }

    // ---------------------------------------------
    // Member Function: display()
    // ---------------------------------------------
    // - Prints length, breadth, and area
    void display() {
        cout << "Length = " << *length
             << ", Breadth = " << *breadth
             << ", Area = " << area() << endl;
    }

    // ---------------------------------------------
    // Destructor
    // ---------------------------------------------
    // - Frees dynamically allocated memory to prevent memory leaks
    ~Rectangle() {
        delete length;   // Deallocate memory of length
        delete breadth;  // Deallocate memory of breadth
        cout << "Memory released\n";   // Confirmation message
    }
};

// ---------------------------------------------
// main() Function
// ---------------------------------------------
int main() {
    // Create an array of 2 Rectangle objects
    // This means the constructor will run 2 times (once for each object)
    Rectangle rect[2];

    cout << "\n--- Rectangle Details ---\n";

    // Loop through all objects and display their details
    for (int i = 0; i < 2; i++) {
        cout << "Rectangle " << i + 1 << ": ";
        rect[i].display();
    }

    // When main() ends:
    // - Destructor will automatically run for each object (in reverse order)
    // - This ensures that dynamically allocated memory is freed
    return 0;
}
