#include <iostream>
using namespace std;

        // 2. Structure
                /*
                    A Structure is a user-defined data type like class. A structure creates a data type that
                     can be used to group items of possibly different types into a single type.
                    */


        // Declaring structure
        struct A {
            int i;
            char c;            
        };


int main(){
    

            // Create an instance of structure
                A a;

                
    // Initialize structure members
        a.i=65;
        a.c='A';


        cout << a.c << ": " << a.i;


    /*
        The above demonstrates program demonstrates the use of structures by defining a structure named
         A having i and c members. It then creates an instance if structure in the main function, sets
          the members' values, and prints them.

            */


}