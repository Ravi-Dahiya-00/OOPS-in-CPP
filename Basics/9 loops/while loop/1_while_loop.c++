#include <iostream>
using namespace std;

int main()
{
        /*
        A while loop is a block of code to perform repeated task till given condition is true.
         When condition become false it terminates. while loop is also an entry-controlled loop in which the condition
        is checked before entering the body.

                            while (condition) {
                                  // Body
                                  updation
                                     }
        */

          // Initialization expression
        int i=0;


          // Test expression
        while (i <=5 )
        {
            cout << i << endl;

             // update expression
             i++;
        }



        int sum=0,a=1;

        while (a<=10)
        {
          sum+=a;
          a++;
        }

        cout << sum << endl;


         /*
           It is an entry-controlled loop.

           It runs the block of statements till the condition is satisfied, once the condition is not satisfied it will terminate.

           Its workflow is firstly it checks the condition and then executes the body. Hence, a type of pre-tested loop.

           This loop is generally preferred over for loop when the number of iterations is unknown.
                     */
      }