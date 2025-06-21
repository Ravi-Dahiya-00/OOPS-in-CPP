#include <iostream>
using namespace std;


        // 
            /* 
                The data types that are derived from the primitive or built-in datatypes are referred to 
                as Derived Data Types. They are generally the data types that are created from the primitive
                 data types and provide some additional functionality.

            */

            // In C++, there are four different derived data types:
                    /* 
                        Functions
                        Arrays
                        Pointers
                        References
                            */

    
    // max here is a function which is a derived type
        int max(int x, int y) {
            if (x > y)
                return x;
            else
                return y;
        }


int main()
{
    // 1.  Functions
        /* 
            A function is a block of code or program segment that is defined to perform a specific 
            well-defined task. It is generally defined to save the user from writing the same lines
             of code again and again for the same input. All the lines of code are put together inside
              a single function and this can be called anywhere required.
                   */
            
                    
                    int a=10 , b=20 ;

                        // Calling above function to
                        // find max of 'a' and 'b'

                    int m = max(a, b);

                    cout << "m is : " << m;
                
        

            


        // 2. Arrays
                /* 
                    An array is a collection of items stored at continuous memory locations. The idea of array 
                    is to represent many variables using a single name. The below example demonstrates the use of array in C++.
                        */
        



                 // Array Derived Type
                 int arr[5] = {1,2,3,4,5};

                 arr[0]=9;
                 arr[1]=-8;
                 arr[3]=arr[0];

                 
                 for (int i=0;i<=5;i++)
                 {
                    cout << arr[i] << endl;
                 }


            

                



                //  Pointers
                        /* 
                            Pointers are symbolic representation of addresses. They can be said as the variables 
                            that can store the address of another variable as its value. The below example demonstrates
                            the use of pointer in C++.
                                */



                                int var1=20;

                                // Pointers Derived Type
                                    // declare pointer variable
                                int *ptr;


                                 // note that data type of ptr
                                // and var must be same
                                ptr = &var1;


                                // assign the address of a variable
                                    // to a pointer

                                cout << "value at ptr: " << ptr << endl;
                                cout << "value at var: " << var1 << endl;
                                cout << "value at *ptr: "  << *ptr << endl;









                // References
                    /* 
                       When a variable is declared as reference, it becomes an alternative name for an existing variable. 
                       A variable can be declared as reference by putting ‘&’ in the declaration.
                             */




                             int x=10;

                             // Reference Derived Type
                                 // ref is a reference to x.

                                 int &ref=x;


                                


                                 // Value of x is now changed to 20
                                 ref = 20;
                                 cout << "x: " << x << endl;


                                 // Value of x is now changed to 30
                                 x=30;
                                 cout << "ref: " << ref << endl;




                                


            

                 /*
                    Derived data types in C++ are functions, arrays, pointers, and references offer so many useful 
                    tools to handle data. Functions let us write the reusable code. Arrays help manage multiple items
                     and data very efficiently. Pointers allows the flexible memory use and also referencing. 
                     References provide a way to create alias and simpler ways to work with variables. Overall,
                      these derived datatypes make C++ coding more systematic and effective.
                        */



                        


}