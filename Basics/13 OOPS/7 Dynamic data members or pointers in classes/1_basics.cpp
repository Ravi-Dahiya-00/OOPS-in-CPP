#include <iostream>
using namespace std;

class Rectangle {
private:
    int *length;   
    int *breadth;  

public:

    Rectangle() {
        length = new int;
        breadth = new int;

        cout << "Enter length: ";
        cin >> *length;

        cout << "Enter breadth: ";
        cin >> *breadth;
    }

    int area() {
        return (*length) * (*breadth);
    }


    int perimeter() {
        return 2 * ((*length) + (*breadth));
    }

    
    ~Rectangle() {
        delete length;
        delete breadth;
        cout << "Memory released\n";
    }
};

int main() {
    Rectangle r1; 

    cout << "Area = " << r1.area() << endl;
    cout << "Perimeter = " << r1.perimeter() << endl;

    return 0;
}


// learn deep copy constructor and shallow copy here
