#include <iostream>
using namespace std;

int main()
{
        // Pointers and References in C++
            /*
                In C++ pointers and references both are mechanisms used to deal with memory, memory address,
                 and data in a program. Pointers are used to store the memory address of another variable whereas 
                 references are used to create an alias for an already existing variable.
                     */


        // Pointers in C++
            /*
                Pointers in C++ are a symbolic representation of addresses. They enable programs to simulate
                 call-by-reference and create and manipulate dynamic data structures. Pointers store the address
                  of variables or a memory location. 

                            datatype *var_name; 
                                                    */

        // Assign Address
            /*
            The addressof operator (&) determines the address of any variable in C++. This address can be assigned
             to the pointer variable to initialize it.
                    */


                int x=10;     // variable declared
                int *myptr;    // pointer variable


            // storing address of x in pointer myptr
                myptr=&x;




            cout << "Value of X is : " << x << endl;


            // print the address stored in myptr pointer variable
            cout << "Address Stored in myptr is : " << myptr << endl;
                // Directly accessing the pointer will just give us the address that is stored in the pointer.



              // Dereferencing
                    /*
                        The process of accessing the value present at the memory address pointed by the pointer is called dereferencing.
                         This is done with the help of dereferencing operator as shown:
                    */

            // printing value of x using pointer myptr
            cout << "Value of using *myptr is : " << *myptr << endl;
                   // Access value using (*) operator





            // Application of Pointers in C++
                /*
                    1. To pass arguments by reference: Passing by reference serves two purposes
                    2. For accessing array elements: The Compiler internally uses pointers to access array elements.
                    3. To return multiple values: For example in returning square and the square root of numbers.
                    4. Dynamic memory allocation: We can use pointers to dynamically allocate memory. The advantage of dynamically
                             allocated memory is, that it is not deleted until we explicitly delete it.
                    5. To implement data structures.
                    6. To do system-level programming where memory addresses are useful.
                                    */



                // Features and Use of Pointers in C++
                        /*
                            The Pointers have a few important features and uses like it saves memory space, they are 
                            used to allocate memory dynamically, it is used for file handling, etc. Pointers store the 
                            address of variables or a memory location. 
                                        */






            
            // 'this' Pointer in C++
                /*
                    The 'this' pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable
                     within the body of all nonstatic functions. ‘this’ pointer is not available in static member functions as static member functions
                      can be called without any object (with class name). Even if only one member of each function exists which is used by multiple objects,
                       the compiler supplies an implicit pointer along with the names of the functions as ‘this’. 
                                                */




                





            // Modify Address
                // The pointer can be modified to point to another memory address if its is of the same type.


                int a=10;
                int b=30;

                int *ptr = &a;
                cout << "Value of Ptr is : " << *ptr << endl;


                    // Changing the address stored

                ptr = &b;

                cout << "Value of Ptr after changing the address : " << *ptr << endl;







                // Size of Pointers
                   /*
                        The size of pointer in a system is equal for every pointer no matter what type of data it is pointing to.
                         It does not depend on the type, but on operating system and CPU architecture. The size of pointers in C++ is 

                                    8 bytes for a 64-bit System
                                    4 bytes for a 32-bit System
                                                                                              */


            int *ptr1;
            char *ptr2;

            cout << "Value of integer pointer is : " << sizeof(ptr1) << endl;
            cout << "Value of Character pointer is : " << sizeof(ptr2) << endl;

                
}