#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Declare friend function
    friend void showArea(Rectangle r);
};

/*
    1️⃣ Friend Function
        A non-member function that has access to private and protected data of a class.*/

// Definition of friend function
void showArea(Rectangle r) {
    // Can access private members directly
    cout << "Area = " << r.length * r.breadth << endl;
}

class Rhombus {
private:
    int length = 10, breadth = 5;

    // Declare entire class as friend
    friend class Box;
};

class Box {
public:
    void show(Rhombus r) {
        cout << "Accessing private members of Rectangle: ";
        cout << "Length = " << r.length << ", Breadth = " << r.breadth << endl;
    }
};

int main() {
    Rectangle r1(10, 5);
    showArea(r1); // Friend function can access private data

    Rhombus r;
    Box b;
    b.show(r);
    return 0;

    return 0;
}
