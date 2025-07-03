#include <iostream>
using namespace std;



// Generic print function using void pointer
void print (void *ptr , char type){
    if (type == 'i')
        cout << "Integer " << *(int*)ptr << endl;
    else if (type == 'f')
        cout << "Float " << *(float*)ptr << endl;
    else if (type == 'c')
        cout << "Character " << *(char*)ptr << endl;
    else 
        cout << "Unknown Type" << endl;

}
int main()
{
        // Void Pointers
            /*
                A void pointer is a special type of pointer that can store the address of any data type, 
                but it cannot be directly dereferenced without explicit type casting.

                        void* ptr;
                                ptr can point to any type (int, float, char, etc.), but you must cast it before using it.

                */


        int a=10;
        float b=3.4;
        char c='D';

        void *ptr=&a;      // ptr is holding address of int
        cout << "Value of Ptr after typecasting to integer : " << *(int*)ptr << endl; 


        ptr = &b;
        cout << "Value of Ptr after typecasting to float : " << *(float*)ptr << endl; 


        ptr = &c;
        cout << "Value of Ptr after typecasting to character : " << *(char*)ptr << endl; 






        int x=10;
        float y=3.14;
        char z='A';


        print(&x , 'i');
        print(&y , 'f');
        print(&z , 'c');

        print(&z , 'q');

}