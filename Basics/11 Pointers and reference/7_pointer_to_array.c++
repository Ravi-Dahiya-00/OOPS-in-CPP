#include <iostream>
using namespace std;

int main(){
         // Pointer to an Array in C++
            /*
            Pointers in C++ are variables that store the address of another variable while arrays are the data structure
             that stores the data in contiguous memory locations. In C++, we can manipulate arrays by using pointers to them.
             These kinds of pointers that point to the arrays are called array pointers or pointers to arrays.

                */  




        /*
             An array is a collection of elements of similar data types that are stored in contiguous memory locations.
            The elements are of the same data type. The name of the array points to the memory address of its first element.

                   datatype array_name[sizeof_array];
                                                               */

        /*
        Pointers are variables that store the memory addresses of other variables or any data structures in C++.
        The syntax to declare a pointer is given below:

                data_type *pointer_name ;

                */


            /*
               Pointers to an array is the pointer that points to the array. It is the pointer to the first element
                of the pointer instead of the whole array but we can access the whole array using pointer arithmetic.


                        // for array of type: type arr_name[size];   
                        type *ptr_name = &arr_name

                        */

// Note: The array name is also a pointer to its first element so we can also declare a pointer to the array as: type *ptr_name = arr_name;






            // Program to Demonstrate That Array Name Is the Pointer to Its First Element
               int arr[5]={1,2,3,4,5};

               int *ptr=arr;
               int *ptr1 = &arr[0];

               // printing first element of an array using array name
               // and dereference operator

               cout << "*arr : " << *arr << endl;
               cout << "arr : " << arr << endl;
         
               cout << "*ptr : " << *ptr << endl;
               cout << "ptr : " << ptr << endl;

                // we can see that the pointer "ptr" and "arr" point to the same memory address and to the same element.


                

             // Program to Traverse Whole Array using Pointer

             cout << "\nProgram to Traverse Whole Array using Pointer " << endl; 

             int size=5;
             int arr2[size]={1,2,3,4,5};

                 // Pointer pointing to the entire array

            int *ptr2=arr2;

             // Loop through the array using pointer
             for (int i=0;i<size;i++)
             {
                    // Accessing elements using pointer arithmetic
                    cout << "Value at index " << i << " : " << *(ptr+i) << endl;
             }


}