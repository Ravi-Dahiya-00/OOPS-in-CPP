#include <iostream>
using namespace std;

/*
    | Procedural Programming 🧮                                    | Object-Oriented Programming 🧱                              |
    | ------------------------------------------------------------ | ----------------------------------------------------------- |
    | Program is divided into **functions** (procedures)           | Program is divided into **objects and classes**             |
    | Focus is on **how to do a task** (step-by-step instructions) | Focus is on **who is doing the task** (real-world entities) |
    | Example languages: C, Pascal                                 | Example languages: C++, Java, Python (OOP style)            |


    📝 In procedural programming, functions are the main unit.
    🧱 In OOP, objects are the main unit.
        */


        /*
            A class is a user-defined data type, which holds its own data members and member functions that can be
             accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.
                */
    
// Class definition                
class student {
public:

    // Data member
    string name;
    int rno;
    float gpa;

    // Member function
};

class car {
public : 
    string name;
    int price;
    int seat;
    string type;

};

void print(car c){
    cout << c.name << " " << c.price << " " << c.seat << " " << c.type << endl;
}
void change (car c){
    c.name="Audi A8";
}

void changebyreference(car &c){
     c.name="Audi A8";
}
int main(){

    /*
        When a class is defined, only the specification (attributes and behaviour) for the object is defined.
         No memory is allocated to the class definition. To use the data and access functions defined in the class, 
         we need to create its objects.

        Objects are the actual entities that are created as an instance of a class. There can be as many objects of a class as desired.

        className objectName;
        */
    student s1;


    /*
    Member Access : Members of the class can be accessed inside the class itself simply by using their assigned name.
    To access them outside, the (.) dot operator is used with the object of the class.
            obj.member1 // For data members
            obj.member2(..) // For functions
        */
    s1.name = "Ravi Yadav";
    s1.rno = 55;
    s1.gpa = 9.4;


    student s2;
    s2.name = "Himanshu";
    cout << "Enter roll no for student S2 : " << endl;
    cin>>s2.rno;
    s2.gpa = 9.5;



    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;



    car c1;
    c1.name="Honda City";
    c1.price=1500000;
    c1.seat=5;
    c1.type="Sedan";

        print(c1);
        change(c1);     //pass by value
        print(c1);


    car c2;
    c2.name="Maruti Swift";
    c2.price=700000;
    c2.seat=5;
    c2.type="Hatchback";

     print(c2);
     changebyreference(c2);     //pass by reference
     print(c2);

    car c3;
    c3.name="Toyota Fortuner";
    c3.price=4000000;
    c3.seat=8;
    c3.type="SUV";



   

    print(c3);


}

/*
| Feature               | Class | Struct |    Union    |        Enum       |
| --------------------- | :---: | :----: | :---------: | :---------------: |
| **static**            |   ✅   |    ✅   |      ✅      |  ✅ (inside class) |
| **const**             |   ✅   |    ✅   | ✅ (limited) | ❌ (already const) |
| **inline**            |   ✅   |    ✅   |      ✅      |         ❌         |
| **friend**            |   ✅   |    ✅   |      ✅      |         ❌         |
| **virtual**           |   ✅   |    ✅   |      ❌      |         ❌         |
| **mutable**           |   ✅   |    ✅   |      ❌      |         ❌         |
| **typedef / using**   |   ✅   |    ✅   |      ✅      |         ✅         |
| **access specifiers** |   ✅   |    ✅   |      ✅      |         ❌         |
| **enum inside type**  |   ✅   |    ✅   |      ✅      |         ❌         |
| **inheritance**       |   ✅   |    ✅   |      ❌      |         ❌         |

*/   


/*
| Feature / Keyword                    | Can be used with Class? | Explanation                                                                                 |
| ------------------------------------ | ----------------------- | ------------------------------------------------------------------------------------------- |
| **`static`**                         | ✅ Yes                   | For static data members (shared by all objects) and static member functions.                |
| **`const`**                          | ✅ Yes                   | Can make data members constant or member functions const (which cannot modify object data). |
| **`inline`**                         | ✅ Yes                   | Member functions defined inside the class are inline by default.                            |
| **`friend`**                         | ✅ Yes                   | A function or another class can be declared as a friend to access private/protected data.   |
| **`virtual`**                        | ✅ Yes                   | Used for runtime polymorphism (in inheritance).                                             |
| **`mutable`**                        | ✅ Yes                   | Makes a data member modifiable even inside a const function.                                |
| **`typedef` / `using`**              | ✅ Yes                   | Can define type aliases for readability.                                                    |
| **`enum`**                           | ✅ Yes                   | Enums can be declared inside a class.                                                       |
| **`struct` or `union` inside class** | ✅ Yes                   | Nested types allowed.                                                                       |
| **`private`, `protected`, `public`** | ✅ Yes                   | Access control specifiers.                                                                  |
| **`volatile`**                       | ✅ Yes (rare)            | Used for hardware/memory-sensitive programming.                                             |
| **`constexpr`**                      | ✅ Yes (C++11+)          | For compile-time constants or functions.                                                    |
*/