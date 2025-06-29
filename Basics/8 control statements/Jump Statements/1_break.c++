#include <iostream>
using namespace std;

    /*
    These statements are used in C for the unconditional flow of control throughout the functions in a program. 
    They support four types of jump statements:

                */
int main()
{
    //  A) break
       /*
       This loop control statement is used to terminate the loop. As soon as the break statement is encountered 
       from within a loop, the loop iterations stop there, and control returns from the loop immediately to the
        first statement after the loop.
                 */

        


     int arr[] = { 1, 2, 3, 4, 5, 6 };
    int key = 3;
    int size = 6;

    for (int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            cout << "element found at position " << (i+1) << endl;
            break;
        }
    }

}