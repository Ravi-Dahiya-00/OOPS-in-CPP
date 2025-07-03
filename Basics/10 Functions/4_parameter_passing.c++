#include <iostream>
using namespace std;


// Function that takes parameters by value
void func(int val) {
    
    // Changing the value
    val = 123;
}




// Function that takes parameters by pointer
void func2(int* val2) {
    
    // Changing the value
    *val2 = 123;
}




int main()
{
         /*
         In C, passing values to a function means providing data to the function when it is called
          so that the function can use or manipulate that data. Here:

                    Formal Parameters: Variables used in parameter list in a function declaration/definition as placeholders. 
                              Also called only parameters.

                    Actual Parameters: The actual expression or values passed in during a function call. Also called arguments.
            */




        // Pass By Value
           /*
             In this method, a copy of the argument is passed to the function. The function works on this copy, 
             so any changes made to the parameter inside the function do not affect the original argument.
              It is also known as call by value.

                            */

        int x=1;


        // Passing x by value to func()
        func(x);
        cout << "value of x : " << x << endl;





        // Pass by Pointers
            /*
            This method uses a pointer as a parameter to receive the address of the data that is passed 
            to the function in the function call as argument. This allows the function to access and modify
             the content at that particular memory location, hence, modifications done in the function are 
             reflected in the original value. It is also known as call by pointers.

             */

             int a=1;

            // Passing address of a
            func2(&a);
            cout << "Value of a : " << a << endl;


            // Note: This method is sometimes called as Pass by (or Call by) Reference. But it is not to be confused with Call 
            // by Reference from other programming languages like C++.





            /*
            
            Difference                    Call-by-Value                                                         Call-by-Reference

           Definition       Passes a copy of the argument value to the function.                 Passes the address (reference) of the argument.

          Effect on              Original argument remains unchanged 
          Original Argument              after the function call.                         Original argument can be modified within the function.

        Memory Usage            Requires more memory as a copy of                         More memory-efficient as only the address is passed.
                                     the argument is created.

                
                */
}