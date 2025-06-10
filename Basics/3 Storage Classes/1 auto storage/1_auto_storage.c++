#include <iostream>
using namespace std;


// Storage class :
        /*
        C++ Storage Classes are used to describe the characteristics of a variable/function. It determines the lifetime, 
        visibility, default value, and storage location which helps us to trace the existence of a particular variable
        during the runtime of a program. Storage class specifiers are used to specify the storage class for a variable.
                   */
        
                //    C++ provides 6 different storage classes 

    // auto Storage Class :
            /*
            The auto storage class is the default class of all the variables declared inside a block. 
            The auto stands for automatic and all the local variables that are declared in a block automatically belong to this class.
                        */

    // Properties of auto Storage Class Objects
        /* 
        Scope: Local
        Default Value: Garbage Value
        Memory Location: RAM
        Lifetime: Till the end of its scope
*/

int main()
{
        // Declaring an auto variable
        int a=20;
        float b=3.5;
        string c="Ravi Yadav";

            // Printing the auto variables
        cout << a << endl;
        cout << b << "\n";
        cout << c << "\n";


    
 

    /*
    Note: Earlier in C++, we could use the auto keyword to declare the auto variables explicitly but after C++11,
     the meaning of auto keyword is changed, and we could no longer use it to define the auto variables.
          */


    /*
    --> Old Meaning (C-style C++) – Storage Class
            auto was used to specify automatic storage duration.
            This meant the variable is stored in stack memory and has a local scope.
            But: All local variables by default are already auto, so writing auto was redundant.

        

    --> Modern Meaning (C++11 and later) – Type Deduction
        Now, auto is used to automatically deduce the type of a variable at compile-time.

            auto x = 10;         // int
            auto y = 3.14;       // double
            auto name = "Ravi";  // const char*


    */

            auto x = 10;         // int
            auto y = 3.14;       // double
            auto name = "Ravi";  // const char*

            cout << x << endl;
            cout << y << endl;
            cout << name << endl;






    return 0;


}