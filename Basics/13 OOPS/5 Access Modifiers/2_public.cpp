#include <iostream>
using namespace std;

// “The members declared under it can be accessed from anywhere — inside the class, outside the class, or even through objects.”

class students{
private:
    float marks;

public:         // public access modifier
    // public members
    string name;
    int age;

    // 4️⃣ Public Static Members
        // Can be accessed without creating an object.
    static int count;

      void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }


      void setmarks(float m){       //setter for pvt
        marks=m;
    }

    // 5️⃣ Public Friend Functions
        // Used when an external function needs access to private data.
     friend void show(students s);   // declares friendship

};

// Definition of the friend function (outside class)
void show(students s) {
    cout << "Marks = " << s.marks << endl;  // ✅ can access private member
}

int students::count = 0;

int main(){
    students s1;         // ✅ Works — constructor is public
    s1.name = "Ravi";     // ✅ Accessible (public)
    s1.age = 19;          // ✅ Accessible (public)
    s1.display();         // ✅ Accessible (public function)

    // ✅ Because all are declared public, they can be accessed freely from main() or anywhere else.


    cout << students::count << endl;  // ✅ Accessible directly using class name

    s1.setmarks(87.9);        
    show(s1);   // calling friend function


}

// ⚙️ Things Commonly Declared as public
/*
    1️⃣ Public Data Members
        Directly accessible (but not a good practice in real-world code — breaks encapsulation).
        
    2️⃣ Public Member Functions
        Used to access or modify private data safely.
   
    3️⃣ Public Constructors
        Constructors are often public so you can create objects from outside the class.

*/

/*
💬 Why use a Friend Function?

To allow external functions to access private data safely.

To provide more flexibility (e.g., when operator overloading two different classes).

Still keeps data protected — only specific functions are given access, not all.*/