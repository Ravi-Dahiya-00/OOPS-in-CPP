#include <iostream>
using namespace std;

/*
    👉 In C++, a structure (or struct) is a user-defined data type that allows you to group different variables 
        (of possibly different data types) together under one single name.*/

// defining a structure
struct Student {
    string name;
    int roll;
    float marks;
};


/*
    Member Functions
        In C structures, functions were not allowed inside the structure but in C++, we can declare the function
         inside the structure. They are called member functions while the variables are called data members. 
         C++ structure is way more similar to C++ classes as compared to C structures.
        */
struct Point
{
    int x, y;

    // Member function
    int sum()
    {
        return x + y;
    }
};






// Define inner structure
struct inner
{
    int a, b;
};

// Define the outer structure that contains the inner structure
struct outer
{
    inner in;
    int x, y;
};


int main() {
    // creating structure variable
    Student s1;

    // assigning values
    s1.name = "Ravi";
    s1.roll = 101;
    s1.marks = 92.5;

    // printing values
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;


    // Updating members
    s1.roll=12;

    // Accessing members again
    cout << "Roll: " << s1.roll << endl;




    Point s = {0, 1};

    // Call member function using (.) operator
    cout << s.sum() << endl;
    cout << s.x << endl;






    outer obj = {{1, 2}, 10, 20};
    cout << "Inner: " << obj.in.a << " " << obj.in.b << endl;
    cout << "Outer: " << obj.x << " " << obj.y;

    return 0;
}

// learn  structure padding. for memory allocation concept

/*
Basic definition & declaration 

Creating variables

Dot operator

Initialization

Array of structures

Functions with structures




Pointer to structure

Nested structure

Typedef

Difference between struct and class

*/