#include <iostream>
using namespace std;


    // extern Storage Class
                /* 
                The extern storage class simply tells us that the variable is defined elsewhere and not within the
                same scope (or even source file) where it is used (i.e. external linkage). Basically, the
                 variable is created in a different scope or file and can be used in a different file as well.
                        */

           /*
           The extern storage class simply tells us that the variable is defined elsewhere and not within 
           the same scope (or even source file) where it is used (i.e. external linkage). Basically,
            the variable is created in a different scope or file and can be used in a different file as well.
                        */

            /*
            Properties of extern Storage Class Objects

            Scope: Global
            Default Value: Zero
            Memory Location: RAM
            Lifetime: Till the end of the program.
                */


    // Telling compiler that variable x is extern variable
    // and has been defined elsewhere
    extern int x;

int main()
{
    // Printing the value of x
    cout << x;

}