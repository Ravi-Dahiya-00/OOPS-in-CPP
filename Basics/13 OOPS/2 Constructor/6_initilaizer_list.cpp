#include <iostream>
using namespace std;

/* ============================================================
   CASE 1 — const DATA MEMBERS  
   ✔ MUST be initialized using initializer list  
   ✔ Cannot assign inside constructor body  
   ============================================================*/

// ❌ WRONG — This will NOT compile
/*
class A1 {
public:
    const int x;  // const must be initialized immediately
    A1(int val) {  
        x = val;   // ❌ ERROR: assignment to const is not allowed
    }
};
*/

// ✔ CORRECT — using initializer list
class A1 {
public:
    const int x;

    A1(int val) : x(val) {  // correct way
        cout << "[A1] Constructor called, const x = " << x << endl;
    }
};


/* ============================================================
   CASE 2 — REFERENCE MEMBERS  
   ✔ A reference must be initialized when created  
   ✔ Cannot assign later  
   ============================================================*/

// ❌ WRONG — Will NOT compile
/*
class A2 {
public:
    int &ref;
    A2(int &r) {
        ref = r;   // ❌ ERROR: ref must be initialized at declaration
    }
};
*/

// ✔ CORRECT — using initializer list
class A2 {
public:
    int &ref;

    A2(int &r) : ref(r) {
        cout << "[A2] Constructor called, ref refers to = " << ref << endl;
    }
};


/* ============================================================
   CASE 3 — BASE CLASS WITHOUT DEFAULT CONSTRUCTOR  
   ✔ Must initialize base class using initializer list  
   ============================================================*/

class Base {
public:
    int b;
    Base(int x) : b(x) {
        cout << "[Base] Constructor called, b = " << b << endl;
    }
};

// ❌ WRONG — Derived constructor not calling Base constructor
/*
class Derived : public Base {
public:
    Derived(int x) { 
        // ❌ ERROR: Base(x) MUST be called here, otherwise compiler error
    }
};
*/

// ✔ CORRECT — using initializer list
class Derived : public Base {
public:
    Derived(int x) : Base(x) {   // correct
        cout << "[Derived] Constructor called\n";
    }
};


/* ============================================================
   CASE 4 — MEMBER OBJECT WITHOUT DEFAULT CONSTRUCTOR  
   ✔ If an object inside class has NO default constructor  
   ✔ You MUST initialize it in initializer list  
   ============================================================*/

class Member {
public:
    int m;
    Member(int x) : m(x) {
        cout << "[Member] Constructor called, m = " << m << endl;
    }
};

// ❌ WRONG — Will NOT compile
/*
class Holder {
public:
    Member obj;   // Member has no default constructor
    Holder(int x) {
        // ❌ ERROR: obj MUST be initialized in initializer list
        obj = Member(x);  // not allowed, obj is not constructed yet!
    }
};
*/

// ✔ CORRECT — using initializer list
class Holder {
public:
    Member obj;    // must call Member(x) in initializer list

    Holder(int x) : obj(x) {   // correct
        cout << "[Holder] Constructor called\n";
    }
};


/* ============================================================
   MAIN — Demonstrates all cases working live
   ============================================================*/

int main() {
    cout << "\n==================== CASE 1: const ====================" << endl;
    A1 obj1(10);

    cout << "\n==================== CASE 2: reference ====================" << endl;
    int val = 50;
    A2 obj2(val);
    cout << "Changing val to 99...\n";
    val = 99;
    cout << "ref now = " << obj2.ref << " (because ref refers to val)\n";

    cout << "\n==================== CASE 3: Base Class ====================" << endl;
    Derived d(200);

    cout << "\n==================== CASE 4: Member Object ====================" << endl;
    Holder h(300);

    cout << "\n==================== END OF PROGRAM ====================" << endl;
    return 0;
}
