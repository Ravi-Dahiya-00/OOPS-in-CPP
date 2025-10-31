#include <iostream>
using namespace std;

/*
inline is a keyword that tells the compiler to insert the function’s code directly wherever 
it is called — instead of making a normal function call.
  
✅ This can speed up execution for very short functions, because it removes the overhead of 
calling a function (jumping to another memory address).

*/
class Rectangle {
private:
    int length, breadth;

public:
    // ✅ Inline by default (defined inside the class)
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    // ✅ Declaration (will be defined outside)
    int area();

    // ✅ Inline function defined inside
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

// ✅ Inline definition outside the class
inline int Rectangle::area() {
    return length * breadth;
}
/*
If you define a function outside the class body,
you can use the inline keyword explicitly.*/

int main() {
    Rectangle r;

    // Call inline function defined inside class
    r.setData(10, 5);
    r.display();

    // Call inline function defined outside class
    cout << "Area = " << r.area() << endl;

    return 0;
}
/*
| Case                           | Inline or Not?          | Example                        |
| ------------------------------ | ----------------------- | ------------------------------ |
| Function defined inside class  | ✅ Automatically inline  | `int area() { return l*b; }`   |
| Function defined outside class | ⚙️ Use `inline` keyword | `inline int Rectangle::area()` |
| Large / recursive function     | 🚫 Usually ignored      |                                |
    */