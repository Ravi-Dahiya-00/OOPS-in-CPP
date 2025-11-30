#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    /*  Student → is the class name (the type of object we’re working with)
         & → means reference  
         “This function will return a reference to the current Student object.”   */
    Student& setName(string name) {
        this->name = name;
        return *this;   // returning current object (by reference)
    }

    Student& setAge(int age) {
        this->age = age;
        return *this;   // return same object again
    }

    Student& display() {
        cout << "Name: " << name << ", Age: " << age << endl;
        return *this;   // optional, allows more chaining
    }
};

/*
    this is a pointer to the current object (Student* this)

    *this is the actual object

    So returning *this means returning the current object

    Since the function return type is Student&, we’re returning a reference to it, not a copy.

*/

int main() {
    Student s;
    s.setName("Ravi").setAge(19).display();
}


/*
It returns the same current object
It allows chaining
It avoids unnecessary copies
It matches the pattern used in many libraries (like iostream)*/