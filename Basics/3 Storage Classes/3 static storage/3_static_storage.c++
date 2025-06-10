#include <iostream>
using namespace std;

    /* 
    The static storage class is used to declare static variables that have the property of preserving 
    their value even after they are out of their scope. They are initialized only once and exist until the 
    termination of the program. Thus, no new memory is allocated because they are not re-declared. 
    Global static variables can be accessed anywhere in the program but unlike extern variable, they have 
    internal linkage so they cannot be accessed outside the program.
         */

    //They are declared using static keyword.


    /* 
    Properties of static Storage Class

    Scope: Local
    Default Value: Zero
    Memory Location: RAM
    Lifetime: Till the end of the program
        */
       
        // Function containing static variables
        // memory is retained during execution
        int func() {
        
            // Static variable
            static int count = 0;     
            count++;
            return count;
        }

int main()
{
      cout << func() << "\n";

    /*if it was not an static initialization it should be again give output 0 but now it will give 1 because 
    count can only be initalized once throughout the program
        */
      cout << func();






    return 0;

}