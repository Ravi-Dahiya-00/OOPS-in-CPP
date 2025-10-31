#include <iostream>
using namespace std;

class Person {   // Base class
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class inheriting from Person
class Student : public Person {
public:
    int rollNo;

    void show() {
        cout << "Roll No: " << rollNo << endl;
    }
};

/*
class DerivedClass : access_specifier BaseClass {
    // additional members of derived class
};


    Student inherits all public and protected members of Person.
    It can reuse the display() function and add its own show() function.
    Student is called derived class (or child class).
    Person is called base class (or parent class).
*/
int main() {
    Student s1;
    s1.name = "Ravi";
    s1.age = 19;
    s1.rollNo = 101;

    s1.display(); // Function from base class
    s1.show();    // Function from derived class
}

/*
| Type                         | Description                                            | Example                           |
| ---------------------------- | ------------------------------------------------------ | --------------------------------- |
| **Single Inheritance**       | One derived class inherits from one base class.        | `class B : public A {}`           |
| **Multiple Inheritance**     | One derived class inherits from multiple base classes. | `class C : public A, public B {}` |
| **Multilevel Inheritance**   | A class inherits from a derived class.                 | `A -> B -> C`                     |
| **Hierarchical Inheritance** | Multiple derived classes inherit from one base class.  | `A -> B` and `A -> C`             |
| **Hybrid Inheritance**       | Combination of multiple types.                         | mix of above                      |
*/