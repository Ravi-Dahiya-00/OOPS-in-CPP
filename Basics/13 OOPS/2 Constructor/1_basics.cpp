#include <iostream>
using namespace std;

/*
A constructor is a special member function of a class that is automatically called when an object of the class is created.
Its main job is to initialize the data members of that object.
 

✅ To automatically initialize data members when an object is created
✅ To make code cleaner and safer
✅ To avoid uninitialized or garbage values*/
class Student {
    
public:
    string name;
    int age;
    // Constructor
        // 👉 if you don’t make any constructor, C++ automatically gives you a blank default constructor.
        // 👉 But once you create your own constructor, you lose that automatic one.

    // Student (){

    // }
    // 1️⃣ Default Constructor
    // No arguments → sets default values.
    Student() {            // ← Constructor (same name as class)
        name = "Unknown";
        age = 18;
        cout << "Constructor called!" << endl;
    }


      // Parameterized Constructor       --> Takes arguments to set initial values.
    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student (string n){
        name=n;
    }


     // Copy Constructor    -->     Used to create a new object as a copy of another object.
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }


    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;   // 👈 Constructor is called automatically
    s1.display();
    Student s2;   // 👈 Constructor is called automatically
    s2.display();

    Student s3("Ravi", 19);    // Parameterized
    s3.display();


    // Student s6={"Yadav"};        // Single-parameter constructor
    // s6.age=131;                 //overwriting the data member
    // s6.display();


    Student s4 = s2;           // Copy
    s4.display();

    s4.name="Durgesh";        // deep copy --> it is not changed at base position
    s4.display();
    s2.display();


    Student s5(s3);         //copy constructor  --> deep copy
    s5.display();
   s5.name="Manish"; 
    s5.display();
    s3.display();



 



    return 0;
}

/*
| Feature               | Description                                                          |
| --------------------- | -------------------------------------------------------------------- |
| Name                  | Same as the class name                                               |
| Return type           | ❌ None (not even `void`)                                             |
| Automatically called? | ✅ Yes, when an object is created                                     |
| Purpose               | Initialize data members                                              |
| Defined in class?     | ✅ Yes                                                                |
| Can be overloaded?    | ✅ Yes (you can have multiple constructors with different parameters) |



| Case                                | What happens                                                  |
| ----------------------------------- | ------------------------------------------------------------- |
| No constructor written              | Compiler automatically provides a default (blank) constructor |
| At least one constructor written    | Compiler **does not** provide a default one                   |
| Need both default and parameterized | You must define both manually                                 |

*/
