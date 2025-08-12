#include <iostream>
using namespace std;


            
int *create(){
      int x = 10;     // Local variable
      return &x;      // ❌ Dangerous: returning address of local variable

  }

int main(){
       
        // Dangling Pointer
            /*
              A dangling pointer is a pointer that was pointing to the valid memory location earlier, 
              but that memory has been taken from the program, and it is still pointing to it. This pointer
               behaves like a wild pointer and may lead to errors.


               Dangling pointers are a pointers that points to a memory location that has been freed or deleted, 
               leading to undefined behaviour.Accessing it after deletion leads to undefined behavior and security risks.
               This often happens when freeing memory but still using the pointer. Set such pointers to NULL 
               after free() to avoid this issue.
                      */


            int* ptr = create();  // ptr is now a dangling pointer
          cout << *ptr << endl;         // ❗ Undefined behavior

          /*
                x is destroyed when create() ends.
                ptr still holds the address of that destroyed memory → called dangling.
                  */

            int* ptr = new int(10);
            delete ptr;          // Memory freed
            cout << *ptr;        // ❌ Dangling: using pointer after delete


            

}