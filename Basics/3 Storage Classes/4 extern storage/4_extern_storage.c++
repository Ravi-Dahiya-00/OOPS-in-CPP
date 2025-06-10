#include <iostream>
using namespace std;

// register Storage Class : 
            /*
            The register storage class declares register variables using the register keyword which has the same
             functionality as that of the auto variables. The only difference is that the compiler tries to store
              these variables in the register of the microprocessor if a free register is available.
               This makes the use of register variables to be much faster than that of the variables stored in
                the memory during the runtime of the program. If a free register is not available,
                these are then stored in the RAM.




   --> An important and interesting point to be noted here is that we cannot obtain the address of a register variable using pointers.

            */

    //Properties of register Storage Class Objects
                /* 
                Scope: Local
                Default Value: Garbage Value
                Memory Location: Register in CPU or RAM
                Lifetime: Till the end of its scope
                */

int main()
{
     // Declaring a register variable
       register char b = 'G';
    
    
     
    // Printing the register variable 'b'
    cout << b;


    return 0;



    // Note: The register keyword is deprecated in C++17 onwards.



}