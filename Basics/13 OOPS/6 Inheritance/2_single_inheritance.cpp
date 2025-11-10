#include <iostream>
using namespace std;

/*
Single inheritance is when one derived (child) class inherits from one base (parent) class.
It represents a one-level “is-a” relationship.

📘 Example:
        Student is a Person
        Dog is an Animal
        Car is a Vehicle

    class Base {
    // data members & member functions
    };

    class Derived : access_specifier Base {
        // extra data members & functions
    };


    Base → Parent class
    Derived → Child class
    access_specifier → usually public
    */

// Base Class
class Person {
public:
    string name;
    int age;

    void getData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class
class Student : public Person {
public:
    int rollNo;

    void setRoll(int r) {
        rollNo = r;
    }

    void show() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main(){

     Student s1;
    s1.getData("Ravi Yadav", 19);  // Function from base class
    s1.setRoll(101);               // Function from derived class

    s1.display();  // Base class function
    s1.show();     // Derived class function

}

/*📋 Key Points
    In single inheritance, only one base class and one derived class exist.
    Derived class reuses base class functionality.
    Access to base members depends on the access specifier used:
    public inheritance → public & protected members remain accessible
    protected inheritance → public becomes protected
    private inheritance → all inherited members become private
    Private members of the base class are not inherited directly.
        */