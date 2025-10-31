#include <iostream>
using namespace std;

int main()
{
        //Wild Pointer
          /*
           A wild pointer is a pointer that has not been initialized to any known or valid memory address.
            It points to a random memory location, leading to unpredictable behavior, crashes, or security vulnerabilities.

                    */
            
            int *ptr;             // ❌ Not initialized — wild pointer   ,  ❗ Undefined behavior — may crash
            cout << "Value of Wild Pointer is : " << *ptr << endl; 


            /*
               1. we can make a pointer null to avoid errors or we can give some address of any variable containing some value.
               2. we can also allocate some memory to that pointer using dynamic memory allocation.  
               3. Use smart pointers	std::unique_ptr<int> ptr = ...;



| Concept      | Meaning                                    | Example                               |
| ------------ | ------------------------------------------ | ------------------------------------- |
| Wild Pointer | Uninitialized pointer (random address)     | `int* p;`                             |
| Problem      | Undefined behavior / crash                 | `*p = 10;`                            |
| Solution     | Initialize with `nullptr` or valid address | `int* p = &x;` or `int* p = new int;` |

                                    */

}