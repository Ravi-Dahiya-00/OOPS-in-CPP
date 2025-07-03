#include <iostream>
using namespace std;

// Inline function
inline int square(int x)
{
    return x*x;
}
int main()
{
         //  Inline Functions in C++
                /*
                In C++, inline functions provide a way to optimize the performance of the program by reducing 
                the overhead related to a function call. When a function is specified as inline the whole code
                 of the inline function is inserted or substituted at the point of its call during the compilation
                  instead of using the normal function call mechanism.

                            inline return_type function_name(params)...
                     */

        int num=5;

        // Calling inline function
        int res=square(num);

        cout << res << endl;


            /*
            The inline keyword suggests the compiler that it should replace the functions call with the actual code
             of the function to avoid the overheads of the function call. Inlining a functions is only a request to
              the compiler, not a command. The compiler may not perform inlining in such circumstances as: 

                1. If a function contains a loop.
                2. If a function contains static variables. 
                3. If a function is recursive. 
                4. If a function return type is other than void, and the return statement doesn't exist in a function body. 
                5. If a function contains a switch or goto statement. 

                    */



            // Behaviour of Inline Functions
            
}