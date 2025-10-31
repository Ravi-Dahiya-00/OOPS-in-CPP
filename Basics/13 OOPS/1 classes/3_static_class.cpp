#include <iostream>
using namespace std;

/*
In C++, the keyword static can be used for data members (variables) and member functions inside a class.

It means:
    The member belongs to the class, not to any specific object.  
    So it is shared by all objects of that class.  
        */
class Rectangle {
private:
    static int count;   // static data member
    int length, width;   // instance variable  --> 👉 These are the regular data members of a class.


public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
        count++;  // increment count whenever a new object is created
    }

    void getDimensions(); // ✅ must be declared here first

    /*
    Can only access static members (not normal instance variables).
    Can be called using class name without creating an object.
        */
    static int getCount() {   // static function
        return count;
    }
};


int Rectangle::count = 0;  // must initialize static variable outside the class
/*
    ➡️ This only declares that there is one shared variable count for the entire class.
    But it does not allocate memory yet.

    Unlike normal members (which belong to an object), a static member is stored separately in memory — independent of any object.
    So, you must define and allocate it once globally (outside the class). 
    
    ✅ This creates the actual variable in memory and optionally initializes it (here, to 0).
        */


/*

        🧭 What Is :: (Scope Resolution Operator)
        The scope resolution operator :: tells the compiler which class or namespace a name belongs to.
        It’s read as — “belongs to”. 
        
        👉 means “The variable count that belongs to class Rectangle.”
        👉 means “Call the function getCount() that belongs to class Rectangle.”

    */


/*
When you define void Rectangle::getDimensions() outside the class,
the compiler expects that such a function was declared inside the class earlier.
        */
void Rectangle::getDimensions() {
    cout << length << endl;
    cout << width<<endl;
}

int main() {
    Rectangle r1(10, 20);
    Rectangle r2(5, 15);

    cout << "Total objects: " << Rectangle::getCount() << endl;  

        r1.getDimensions();

    return 0;
}


/*
| Feature           | Instance Variable               | Static Member                                                 |
| ----------------- | ------------------------------- | ------------------------------------------------------------- |
| Belongs to        | Individual Object               | Class (shared)                                                |
| Memory Allocation | Each object gets its own copy   | Only one copy for entire class                                |
| Accessed By       | Object (e.g., `r1.length`)      | Class name or object (e.g., `Rectangle::count` or `r1.count`) |
| Lifetime          | Created & destroyed with object | Exists for entire program duration                            |
| Initialization    | Inside constructor or directly  | Must be initialized outside class using `ClassName::member`   |
*/