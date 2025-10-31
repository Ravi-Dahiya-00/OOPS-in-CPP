#include <iostream>
#include <string>
using namespace std;

// Class representing a cricketer
class cricketers {
public:                     // Public members can be accessed outside the class
    string name;            // Name of the cricketer
    int runs;               // Total runs scored
    float avg;              // Batting average

    // Parameterized constructor to initialize data members
    cricketers(string name, int runs, float avg) {
        this->name = name;  // 'this' pointer refers to the current object
        this->runs = runs;  // Assigns constructor parameter to data member
        this->avg = avg;    // Assigns constructor parameter to data member
    }
};

// Function that takes a pointer to a cricketers object
// and modifies its 'avg' data member
void change(cricketers *c) {
    c->avg = 77.2;          // Accessing member using pointer (same as (*c).avg = 77.2)
}

int main() {
    // Create first object c1 with name, runs, and average
    cricketers c1("Virat Kholi", 24500, 56.3);

    // Print c1's average before changing
    cout << c1.avg << endl; // Output: 56.3

    // Pass address of c1 to 'change' function (pass by pointer)
    // This changes c1's avg inside the function
    change(&c1);

    // Print c1's average after change
    cout << c1.avg << endl; // Output: 77.2 (modified by function)

    // Create second object c2
    cricketers c2("Rohit Sharma", 15880, 63.9);

    // Create a pointer p1 that stores the address of c1
    cricketers *p1 = &c1;

    // Access 'runs' of c1 using the pointer
    cout << (*p1).runs << endl; // Output: 24500
    // (can also be written as p1->runs)

    // Print c2's average
    cout << c2.avg << endl;     // Output: 63.9

    // Change avg of c1 using pointer p1
    (*p1).avg = 45.6;           // Same as p1->avg = 45.6

    // Print c2's average again (to show c2 is unaffected)
    cout << c2.avg << endl;     // Output: 63.9 (no change, since p1 points to c1)
}



/*| Concept          | Description                  | Example                        |
| ---------------- | ---------------------------- | ------------------------------ |
| Normal object    | Stored in stack              | `Student s1;`                  |
| Object pointer   | Stores address of object     | `Student *p = &s1;`            |
| Arrow operator   | Used with pointer            | `p->show();`                   |
| Dynamic object   | Created using `new`          | `Student *p = new Student;`    |
| Array of objects | Multiple objects dynamically | `Student *p = new Student[3];` |
*/