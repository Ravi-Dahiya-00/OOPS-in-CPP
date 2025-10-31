#include <iostream>
using namespace std;

        /*
            User defined data types are those data types that are defined by the user himself.
             In C++, these data types allow programmers to extend the basic data types provided
              and create new types that are more suited to their specific needs.
               C++ supports 5 user-defined data types:

            */

            
            // Class
            // Structure
            // Union
            // Enumeration
            // Typedef
        
class gfg {

        // Access specifier
            public:
                    // Data Member
                        string name;


                   // Member Function
                    void printname() {
                                    cout << name;
                                }


};


int main()

{
    // 1. Class
            /*
                A Class is the building block of C++'s Object-Oriented programming paradigm. It is a 
                user-defined data type, which holds its own data members and member functions, which can
                be accessed and used by creating an instance of that class. A class is like a blueprint for an object.
                    */



                    // Declare an object of class geeks
                        gfg g;


                    // Accessing data member
                        g.name = "GeeksForGeeks";

                        // Accessing member function
                        g.printname();



                        /* 
                        The above program defines a class named GfG with a name attribute and a function printname()
                         to print the name. In the main function, it creates an object named g, sets the geekname as 
                         "GeeksforGeeks", and calls the printname() function to display it.
    */






                   
            

            

        
}