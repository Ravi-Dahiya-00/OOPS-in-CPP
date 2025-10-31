#include <iostream>
using namespace std;

        // 3. Union
                /*
                Like structures , union is also user-defined data type used to group data of different type into 
                a single type. But in union, all members share the same memory location.
                  */

        // Declaration of union is same as the structures
        union A {
        int i;
        char c;
        };

int main()
{
           // A union variable t
                A a;

        	// Assigning value to c, i will also
        	// assigned the same

                a.c='A';

                cout << "a.i : " << a.i << endl;
                cout << "a.c : " << a.c << endl;




        return 0;


        /*
         The above program demonstrates the use of unions. Union named A with members i and c is defined
          that shares the same memory space. It is shown that when we only assign c some value,
           the i also stores the same value.
                */


        
}