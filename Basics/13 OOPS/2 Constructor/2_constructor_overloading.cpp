#include <iostream>
using namespace std;

/*
    Constructor overloading means having multiple constructors in the same class, but with different parameters (number or type).
        Each constructor runs depending on how you create the object.
        
        Constructors must have the same name as the class.
        They don’t have a return type (not even void).
        Overloading works just like function overloading — compiler chooses based on parameters.*/
class Person {
public:
    int age;
    string name;

    // 1️⃣ Default Constructor (no arguments)
    Person() {
        // age = 0;
        name = "Unknown";
        cout << "Default constructor called\n";
    }

    // 2️⃣ Parameterized Constructor (1 argument)
    Person(int a) {
        age = a;
        name = "Unknown";
        cout << "Single-parameter constructor called\n";
    }

    // 3️⃣ Parameterized Constructor (2 arguments)
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Two-parameter constructor called\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main() {
    Person p1;                // Calls Default constructor
    Person p2(20);            // Calls Constructor with 1 parameter
    Person p3("Ravi", 18);    // Calls Constructor with 2 parameters

    

    p1.display();
    p2.display();
    p3.display();

    p3.age=100;      //overriding the age
    p3.display();
}
