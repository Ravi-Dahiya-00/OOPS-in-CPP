#include <iostream>
using namespace std;


/*
    Static data members are class members that are declared using static keywords. A static member has certain special 
    characteristics which are as follows:

    Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
    It is initialized before any object of this class is created, even before the main starts outside the class itself.
    It is visible can be controlled with the class access specifiers.
    Its lifetime is the entire program.
        */
// class definition
class A {
public:
    // static data member here
    static int x;
    A() { cout << "A's constructor called " << endl; }
};

// we cannot initialize the static data member inside the
// class due to class rules and the fact that we cannot
// assign it a value using constructor
int A::x = 2;

/*
Note: The static data members are initialized at compile time so the definition of static members 
should be present before the compilation of the program

    */
// Driver code
int main()
{
    // accessing the static data member using scope
    // resultion operator
    cout << "Accessing static data member: " << A::x
         << endl;



        /*To access the static data member of any class we have to define it first and static data members 
        are defined outside the class definition. The only exception to this are static const data members 
        of integral type which can be initialized in the class declaration.

            */
    return 0;
}