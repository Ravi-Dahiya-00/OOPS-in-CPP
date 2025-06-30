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


     /*
        In general, the Switch case statement evaluates an expression, and depending on the value of the expression,
         it executes the statement associated with the value. Not only that, all the cases after the matching case
          after the matching case will also be executed. To prevent that, we can use the break statement
           in the switch case as shown:

            */


                char c;
    float x, y;

    while (1) {
        cout << "Enter an operator (+, -), if want to exit "
               "press x: ";
        cin >> x;
        // to exit
        if (c == 'x')
            exit(0);

       cout <<"Enter Two Values:\n " << endl;
        cin >> x >> y;

        switch (c) {
            
        // For Addition
        case '+':
            cout  << x + y << endl;
            break;
            
        // For Subtraction
        case '-':
            cout << (x - y) << endl;
            break;
        default:
            cout << "Error! please write a valid operator\n";
        }
    }
}