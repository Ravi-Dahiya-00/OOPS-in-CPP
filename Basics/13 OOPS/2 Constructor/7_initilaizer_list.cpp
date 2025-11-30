#include <iostream>
using namespace std;

/* ============================================================
   CASE 5 — Dynamic Memory + Initializer List
   ✔ Use initializer lists to allocate heap memory
   ============================================================*/

// ❌ WRONG — doing allocation inside constructor body (allowed but inefficient)
/*
class DynWrong {
public:
    int *p;
    DynWrong(int x) {
        p = new int(x);    // works, but not ideal
    }
};
*/

// ✔ CORRECT — allocate using initializer list
class DynCorrect {
public:
    int *p;

    DynCorrect(int x) : p(new int(x)) {
        cout << "[DynCorrect] Memory allocated with value = " << *p << endl;
    }

    ~DynCorrect() {
        cout << "[DynCorrect] Freeing memory " << *p << endl;
        delete p;
    }
};


/* ============================================================
   CASE 6 — Copy Constructor using Initializer List
   ✔ Deep copy using initializer list
   ============================================================*/

class DeepCopy {
public:
    int *ptr;

    // normal constructor
    DeepCopy(int x) : ptr(new int(x)) {
        cout << "[DeepCopy] Constructor: *ptr = " << *ptr << endl;
    }

    // ❌ WRONG — shallow copy (DANGEROUS)
/*
    DeepCopy(const DeepCopy &other) {
        ptr = other.ptr;  // ❌ copying address → double delete risk
    }
*/

    // ✔ CORRECT — DEEP COPY
    DeepCopy(const DeepCopy &other) : ptr(new int(*other.ptr)) {
        cout << "[DeepCopy] Deep Copy Constructor: copied value = " << *ptr << endl;
    }

    ~DeepCopy() {
        cout << "[DeepCopy] Destructor freeing " << *ptr << endl;
        delete ptr;
    }
};


/* ============================================================
   CASE 7 — Assignment Operator (Rule of 3)
   ✔ Use deep copy + cleanup
   ============================================================*/

class Assign {
public:
    int *ptr;

    // constructor
    Assign(int x) : ptr(new int(x)) {
        cout << "[Assign] Constructor: *ptr = " << *ptr << endl;
    }

    // copy constructor (deep copy)
    Assign(const Assign &other) : ptr(new int(*other.ptr)) {
        cout << "[Assign] Copy Constructor\n";
    }

    // ✔ assignment operator
    Assign& operator=(const Assign &other) {
        // Self assignment check
        if (this == &other) return *this;

        cout << "[Assign] Assignment operator used\n";

        delete ptr;                  // free existing memory
        ptr = new int(*other.ptr);   // deep copy

        return *this;
    }

    ~Assign() {
        cout << "[Assign] Destructor freeing " << *ptr << endl;
        delete ptr;
    }
};


/* ============================================================
   CASE 8 — Delegating Constructors
   ✔ Let one constructor call another using initializer list
   ============================================================*/

class Person {
public:
    string name;
    int age;

    // main constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "[Person] Constructor: " << name << " (" << age << ")\n";
    }

    // delegating constructor
    Person() : Person("Unknown", 0) {   // calling the other constructor
        cout << "[Person] Delegating Constructor\n";
    }
};


/* ============================================================
   MAIN — Demonstrate ALL cases live
   ============================================================*/

int main() {

    cout << "\n==================== CASE 5: Dynamic Memory ====================" << endl;
    {
        DynCorrect d(100);
    }

    cout << "\n==================== CASE 6: Copy Constructor ====================" << endl;
    {
        DeepCopy d1(10);
        DeepCopy d2 = d1;   // deep copy
    }

    cout << "\n==================== CASE 7: Assignment Operator ====================" << endl;
    {
        Assign a1(50);
        Assign a2(100);

        a2 = a1;  // assignment operator works (deep copy)
    }

    cout << "\n==================== CASE 8: Delegating Constructors ====================" << endl;
    {
        Person p1("Ravi", 19);
        Person p2;   // calls delegating constructor
    }

    cout << "\n==================== END OF PROGRAM ====================" << endl;
    return 0;
}
