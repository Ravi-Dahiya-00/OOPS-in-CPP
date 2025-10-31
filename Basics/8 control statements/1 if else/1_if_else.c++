#include <iostream>
using namespace std;


        /*
        In C, programs can choose which part of the code to execute based on some condition. This ability is called 
        decision making and the statements used for it are called conditional statements. These statements evaluate 
        one or more conditions and make the decision whether to execute a block of code or not.
                       */


int main()
{
        // Number of people in the audience
        int num = 100;
        
        // Conditional code inside decision making statement
        if (num > 50) {
            cout << "Start the show\n";
        }





        // 1. if in C
            /*
            The if statement is the simplest decision-making statement. It is used to decide whether a certain statement 
            or block of statements will be executed or not i.e if a certain condition is true then a block of statements
             is executed otherwise not.


                The expression inside () parenthesis is the condition and set of statements inside {} braces is its body. 
                If the condition is true, only then the body will be executed.

                  */


            int i = 10;

            // If statement
            if (i < 18) {
                cout << "Eligible for vote\n";
            }


            // Condition to check for negative number
            int number;
            cout << "enter a number" << endl;
            cin >> number;
            if (number<0)
            {
                cout << number << " is negative number.";
            }



        

        // 2. if-else in C
            /*
              The ifstatement alone tells us that if a condition is true, it will execute a block of statements and 
              if the condition is false, it won’t. But what if we want to do something else when the condition is false?
               Here comes the  else statement. We can use the else statement with the if statement to execute a block of code
                when the condition is false. The if-else statement consists of two blocks, one for false expression and
                 one for true expression.
                            */

            int condition;
            if (condition) {
                // Code to execute if condition is true
            }
            else {
                // Code to execute if condition is false
            }


        


            int i1 = 10;

            if (i1 > 18) {
                cout << "Eligible for vote\n";
            }
            else {
                cout << "Not Eligible for vote\n";
            }








        // 3. Nested if-else in C
                /*
                   A nested if in C is an if statement that is the target of another if statement. Nested if statements mean an
                    if statement inside another if statement. Yes, C allow us to nested if statements within if statements, 
                    i.e, we can place an if statement inside another if statement.
                           */




            int a;

            cout << "enter a number : \n";
            cin >> a;

            if (a==10)
            {
                if (a<18)
                {
                    cout << "still not eligible for vote\n";
                }

                else {
                    cout << "Eligible for Vote \n";
                }
            }


            else {

                if (a==20)
                {
                    if (a<22)
                    {
                        cout << "a is smaller then 22 too\n";
                    }
                    else 
                    {
                        cout << "a is greater then 25 \n";
                    }
                }
            }







            // 4. if-else-if Ladder in C


            if (a < 10)
            {
                cout << "Not eligible too small kid\n";
            }
            else if (a == 15)
            {
                cout << "Wait for 3 years\n";
            }
            else if (a>=18)
            {
                cout << "You can vote\n";
            }
            else {
                cout << "not a valid age\n";
            }









        


}