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

                // myref = x;    ❌ This assigns value of b to a, not rebind reference



                int a = 100;
                int* p = &a;
                int& r = *p;

                r = 200;
                cout << a << " ";   // prints 200

                // ref is still a reference to a
                // The statement ref = b; means assign the value of b (10) to a
                r = y;       // ❌ does NOT rebind r to y
                cout << r << " ";



                // Pointers vs References

/*
| Feature                                         | Pointer                            | Reference                                                  |
| ----------------------------------------------- | ---------------------------------- | ---------------------------------------------------------- |
| Definition                                      | Stores address of another variable | Alias for another variable                                 |
| Declaration                                     | `int *p = &x;`                     | `int &ref = x;`                                            |
| Can it be NULL?                                 | ✅ Yes                              | ❌ No                                                       |
| Can it be changed to point to another variable? | ✅ Yes                              | ❌ No (once assigned)                                       |
| Must be initialized when declared?              | ❌ No                               | ✅ Yes                                                      |
| Syntax to access value                          | `*p`                               | Directly `ref`                                             |
| Memory                                          | Takes its own space                | Does not take new space (same memory as original variable) |
  




| Action                           | Pointer            | Reference         |
| -------------------------------- | ------------------ | ----------------- |
| Can point to a new variable      | ✅ Yes (`p = &b;`)  | ❌ No              |
| Can assign new value to variable | ✅ Yes (`*p = 10;`) | ✅ Yes (`r = 10;`) |
| Can be null                      | ✅ Yes              | ❌ No              |
| Must initialize when declared    | ❌ No               | ✅ Yes             |

*/

                
}