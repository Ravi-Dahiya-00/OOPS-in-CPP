#include <iostream>
using namespace std;

int main()
{
        // References in C++
            /*  
                When a variable is declared as a reference, it becomes an alternative name for an existing variable.
                 A variable can be declared as a reference by putting ‘&’ in the declaration. There are 3 ways to pass 
                 C++ arguments to a function: 

                            call-by-value
                            call-by-reference with a pointer argument
                            call-by-reference with a reference argument

                    */


                // Example of References in C++

                int y=10;

                // ref is a reference to y.
                int &myref=y;
                            // It's a reference to the existing variable y.
                            // Think of it as another name or alias for y.




                // changing value of y to 20
                y=20;

                cout << "Value of y is : " << y << endl;

                cout << "Value of myref after change in value of y is : " << myref << endl;

                // Since myref is just another name for y, myref also sees this updated value.
                // A reference must be initialized when declared.
                // After being set, it cannot be changed to refer to another variable.




                // Pointers vs References

                
}