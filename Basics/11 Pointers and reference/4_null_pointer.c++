#include <iostream>
using namespace std;

int main()
{
        //NULL Pointer
            /*
            A NULL pointer is a pointer that does not point to any valid memory location but NULL. 
            It is often used to initialize a pointer when you do not want it to point to any object.

                        1. To safely declare a pointer before assigning it
                        2. To check if a pointer is valid before using it
                        3. To avoid wild pointers

        To avoid wild pointers (uninitialized pointers) and check safety before accessing memory.

            A wild pointer is dangerous because it’s random.
            A null pointer is safe because it clearly says “I point to nothing.”
                    */


        int* ptr1 = nullptr;  // Safe, modern null pointer
        int* ptr2 = NULL;     // NULL is typically defined as 0

        if (ptr2 == nullptr) {
                cout << "Pointer is NULL, not pointing to any object.\n";
            }


        cout << *ptr1;  // ❗ Runtime crash — segmentation fault


}