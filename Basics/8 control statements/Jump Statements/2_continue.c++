#include <iostream>
using namespace std;

int main()
{
        // B) continue
              /*
              This loop control statement is just like the break statement. The continue statement is opposite to that of the break statement,
               instead of terminating the loop, it forces to execute the next iteration of the loop. 
            As the name suggests the continue statement forces the loop to continue or execute the next iteration.
             When the continue statement is executed in the loop, the code inside the loop following the continue statement 
             will be skipped and the next iteration of the loop will begin.

    */



        for (int i=1;i<=10;i++)
        {
             // If i is equals to 6,
             // continue to next iteration
             // without printing


             if (i==6)
             {
                continue;
             }
             else
             {
                cout << i << endl;
             }
        }
}