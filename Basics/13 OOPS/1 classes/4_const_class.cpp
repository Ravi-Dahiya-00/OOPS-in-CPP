#include <iostream>
using namespace std;

// const with classes in C++ is one of those things that gives your code safety and professionalism.
// const = constant → means cannot be changed (read-only) after initialization.


/*
    1. const Data Members (Variables inside class)
    A const data member means its value cannot be changed once initialized.
    But since it’s const, you must initialize it in the constructor (not later).    
        */

class Rectangle {
private:
    const int sides;   // 1️⃣ const data member
    int length, width;


public:
    // Constructor → initializes const member using initializer list
    Rectangle(int l, int w) : sides(4) {
        length = l;
        width = w;
    }

    // Normal (non-const) function → can modify object
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // 2️⃣ const member function → cannot modify any class variable
    int getArea() const {
        // length++; ❌ not allowed — object data is read-only here
        return length * width;
    }

    // 4️⃣ const argument (reference that cannot be modified)
    void printAreaOf(const Rectangle &r) const {
        cout << "Area of passed rectangle: " << r.getArea() << endl;
        // r.setDimensions(2,3); ❌ not allowed because r is const
    }

    void showDetails() const {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Sides: " << sides << endl;
    }
};

int main() {
    Rectangle r1(10, 5);
    r1.showDetails();
    cout << "Area of r1: " << r1.getArea() << endl;

    // Modify dimensions (allowed since r1 is not const)
    r1.setDimensions(7, 4);
    r1.showDetails();

    // 3️⃣ const object → cannot call non-const functions
    const Rectangle r2(8, 6);
    cout << "Area of const r2: " << r2.getArea() << endl;
    // r2.setDimensions(2, 3); ❌ error — const object can't modify data

    // Passing const reference as argument
    r1.printAreaOf(r2);

    return 0;
}

/*
| Use Case              | Example                         | Meaning                              |
| --------------------- | ------------------------------- | ------------------------------------ |
| Const Argument        | `void func(const Rectangle &r)` | Function cannot modify argument      |
| Const Return          | `const int getLength()`         | Prevents assigning to returned value |
| Const Member Function | `int getLength() const`         | Function can’t modify object data    |
| Const Object          | `const Rectangle r;`            | Entire object is read-only           |
    */