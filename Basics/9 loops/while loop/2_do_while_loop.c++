#include <iostream>
using namespace std;

int main()
{
      /*
      The do-while loop is similar to a while loop, but the difference is that do-while loop tests condition after
       entering the body at the end. do-while loop is exit-controlled loop, which means that the condition is checked
        after executing the loop body. Due to this, the loop body will execute at least once irrespective of the test condition.

                do {
                        // Body of the loop
                    } while (condition);
                                                    */

              // Initialization expression
              int a = 0; 

              do {

                    // loop body
                    cout << a << endl;

                    // Update expression
                    a++;

                    // Condition to check
              } while (a <= 10);




            // Declaring loop variables
            int i=0,j;
            int c=0;


                // Outer loop starts
            do {
                  j = 0;

                  // inner loop starts
                  do {
                        cout << c++ << " ";
                        j++;
                  } while (j < 3);
                  cout << "\n";
                  i++;
            } while (i < 3);


            





}