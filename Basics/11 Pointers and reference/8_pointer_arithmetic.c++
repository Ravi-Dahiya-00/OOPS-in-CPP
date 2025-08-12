#include <iostream>
using namespace std;

int main()
{
            // C++ Pointer Arithmetic
                /*
                    In C++, pointer arithmetic means performing arithmetic operations on pointers.
                     It refers to the operations that are valid to perform on pointers
                            */


        // 1. Incrementing and Decrementing Pointer in C++
            /*
                Incrementing or decrementing a pointer will make it refer to the address of the next or previous data in the memory. 
                This process differs from incrementing and decrementing numeric data. 

                When we increment or decrement a numeric data, its value is incremented or decremented by 1. 
                However, incrementing or decrementing a pointer, instead of increasing or decreasing by 1, 
                the address increases or decreases by 1 multiplied by the size of the data type it is pointing to.
                 (one of the reasons why the pointer declaration requires information about the type of data it is pointing to)

                    */



        int n=27;

        // Storing address of n in ptr
        int *ptr = &n ;

        // Print size of int
        cout << "Size of int : " << sizeof(int) << endl;

        // Print the address stored at ptr
        cout << "Before Increment : " << ptr << endl;

       // Increment pointer
       ptr++;
       cout << "After Increment : " << ptr << endl;

       // Print the address stored at ptr
       cout << "Before Decrement : " << ptr << endl;

       // Decrement pointer
       ptr--;
       cout << "After Decrement : " << ptr << endl;




        // 2. Addition of Constant to Pointers
           /*
              We can add integer values to Pointers and the pointer is adjusted based on the size of the data type
               it points to. For example, if an integer pointer ptr stores the address 1000 and we add the value 5 to the pointer,


                    ptr + 5
                    1000 + (5 * 4(size of an integer)) = 1020

                */

        int n1=20;
        int *ptr3 = &n1;

        cout << "Address stored in ptr3: " << ptr3 << endl;


        // Adding the integer value 2 to the pointer ptr

        ptr3 = ptr3 + 2;
        cout << "Adding 2 to ptr: " << ptr3 << endl;


        // 3. Subtraction of Constant from Pointers
                //   1000 - (5 * 4(size of an integer)) = 980


            
        int n2 = 100;
        int *ptr4 = &n2;

        cout << "Address stored in ptr: " << ptr4 << endl;


            // Subtracting the integer value 1 from pointer ptr
            ptr4 = ptr4 - 1;
            
            cout << "Subtract 1 from pointer : " << ptr4 << endl;




        


        // 4. Subtraction of Two Pointers of the Same Datatype
                /*
                    The Subtraction of two pointers can be done only when both pointers are of the same data type.
                     The subtraction of two pointers gives the number of elements present between the two memory addresses
                      so it is primarily valid if the two pointers belong to the same array.
                                        */




                int arr[5] = {1, 2, 3, 4, 5};

                int* ptr1 = &arr[2];
  
                // Adding 4 to ptr1 and stored in ptr2
                int* ptr2 = &arr[4];

              // Subtracting ptr2 from ptr1
                cout << "Subtraction of ptr : "<< ptr2 - ptr1 << endl;




            


        // 5. Comparison of Pointers
                /*
                    In C++, we can perform a comparison between the two pointers using the relational operators(>, <, >=, <=, ==, !=). 
                    We generally use this operation to check whether the two-pointer as pointing to the same memory location or not.
                            */


        int q=10;
        
        int *ptr_1 = &n;
        int **ptr_2 = &ptr_1;
        int *ptr_3 = *ptr_2;


            // comparing equality
        if (ptr_1 == ptr_3) {
            cout << "Both point to same memory location" << endl;
        }
        else {
            cout << "ptr1 points to: " << ptr_1 << endl;
            cout << "ptr3 points to: " << ptr_3 << endl;
        }




        // Comparison to NULL
            /*
              We can compare the pointer of a type to NULL. This operation helps us to find whether the given pointer points
               to some memory address or not. It helps us to control errors such as segmentation faults.
                    */

            int a = 10;

            // Assigning null in case we dont use pointer
            int  *new_ptr = NULL;
            new_ptr = &a;

            // Checking if the pointer is in use or not
            if (ptr == NULL){
                cout << "No Value is Pointed" << endl;
            }
            else {
                cout << *ptr << endl;
            }

}