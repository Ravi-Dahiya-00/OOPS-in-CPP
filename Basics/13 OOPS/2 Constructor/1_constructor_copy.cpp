#include <iostream>
using namespace std;

/* ==============================================================
   SIMPLE CLASS — Shows
   ✔ Implicit Default Constructor
   ✔ Explicit Constructor
   ✔ Implicit Copy Constructor
   ==============================================================*/

class Simple {
public:
    int x;

    // ❌ No default constructor written
    // ➜ Compiler automatically creates an IMPICIT DEFAULT constructor

    // ✔ EXPLICIT CONSTRUCTOR (written by programmer)
    Simple(int value) {  
        x = value;
        cout << "[Simple] Explicit constructor called\n";
    }

    // ❌ We did NOT write a copy constructor here.
    // ➜ Compiler automatically provides an IMPLICIT COPY CONSTRUCTOR:
    // Simple(const Simple& obj) { x = obj.x; }

    void show() {
        cout << "Value: " << x << endl;
    }
};


/* ==============================================================
   POINTER CLASS — Shows
   ✔ Explicit Constructor
   ✔ Explicit Copy Constructor (Deep Copy)
   ✔ Destructor
   ==============================================================*/

class DeepCopy {
public:
    int *ptr;

    // ✔ EXPLICIT CONSTRUCTOR
    DeepCopy(int value) {
        ptr = new int(value);
        cout << "[DeepCopy] Explicit constructor called\n";
    }

    // ✔ EXPLICIT COPY CONSTRUCTOR (DEEP COPY)
    DeepCopy(const DeepCopy &other) {
        ptr = new int;            // allocate new memory
        *ptr = *(other.ptr);      // copy value, NOT address
        cout << "[DeepCopy] Explicit deep copy constructor called\n";
    }

    // Destructor
    ~DeepCopy() {
        cout << "[DeepCopy] Destructor called for value = " << *ptr << endl;
        delete ptr;
    }

    void show() {
        cout << "Value: " << *ptr << endl;
    }
};


/* ==============================================================
   MAIN PROGRAM — Demonstrates implicit & explicit constructors
   ==============================================================*/

int main() {

    cout << "==========================" << endl;
    cout << " IMPLICIT & EXPLICIT CONSTRUCTORS" << endl;
    cout << "==========================" << endl;

    // EXPLICIT CONSTRUCTOR CALL
    Simple s1(10);

    // IMPLICIT COPY CONSTRUCTOR CALL
    Simple s2 = s1;   // compiler-generated copy constructor

    cout << "s1: "; s1.show();
    cout << "s2: "; s2.show();



    cout << "\n==========================" << endl;
    cout << " DEEP COPY DEMONSTRATION" << endl;
    cout << "==========================" << endl;

    DeepCopy d1(50);   // explicit constructor
    DeepCopy d2 = d1;  // explicit deep copy constructor

    cout << "d1: "; d1.show();
    cout << "d2: "; d2.show();

    // Modify original
    *d1.ptr = 100;

    cout << "\nAfter modifying d1.ptr:\n";
    cout << "d1: "; d1.show();
    cout << "d2: "; d2.show();

    cout << "\n(Destructors will now run automatically)\n";

    return 0;
}
