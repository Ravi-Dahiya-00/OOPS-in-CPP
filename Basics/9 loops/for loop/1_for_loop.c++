#include <iostream>
using namespace std;

   
int main()
{
     /*
    In C programming, there is often a need for repeating the same part of the code multiple times. 
    For example, to print a text three times, we have to use printf() three times as shown in the code:
            */
        cout << "Hello GfG\n";
        cout << "Hello GfG\n";
        cout << "Hello GfG\n";


        // Loop to print "Hello GfG" 3 times
        for (int i=0;i<3;i++)
        {
            cout << "Hello GFG\n";
        }


        /*
         Loops in C programming are used to repeat a block of code until the specified condition is met.
          It allows programmers to execute a statement or group of statements multiple times without
           writing the code again and again.

                    There are 3 looping statements in C:
                       1. for Loop
                       2. while Loop
                       3. do-while Loop

            */




        // for Loop
          /*
            for loop in C programming is a repetition control structure that allows programmers to write a loop
             that will be executed a specific number of times. It enables programmers to perform n number of
              repetitions in a single line. for loop is entry-controlled loop, which means that the condition
               is checked before the loop's body executes.

                        for (initialization; condition; updation) { 
                                // body of for loop
                            }

                                    Initialization: Initialize the variable to some initial value.

                                    Test Condition: This specifies the test condition. If the condition evaluates to true, then body of the loop
                                     is executed. If evaluated false, loop is terminated.

                                    Update Expression: After the execution loop’s body, this expression increments/decrements the loop variable
                                     by some value.

                                    Body of Loop: Statements to repeat. Generally enclosed inside {} braces.

                 */


                     // Loop to print numbers from 1 to 5

                     for (int i=1;i<=5;i++)
                     {
                        cout << i << endl;
                     }







         // Outer for loop to print a multiplication
        // table for all numbers upto 5
        for (int i = 1; i <= 5; i++) {
        
            // Inner loop to print each value in table
            for (int j = 1; j <= 5; j++) {
                cout << i*j << " ";  
            }
            cout << "\n";
      }
}