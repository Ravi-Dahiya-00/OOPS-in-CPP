#include <iostream>
using namespace std;


int main()
{
       // 6. Ternary or Conditional Operators
            /*
             Conditional operator returns the value, based on the condition. This operator takes three operands,
              therefore it is known as a Ternary Operator.

                        Expression1 ? Expression2 : Expression3

                                If Expression1 is true, then Expression2 gets evaluated.
                                If Expression1 is false, then Expression3 gets evaluated.

                        */


            int a=3 , b=4;


            // Conditional Operator

            int result = (a<b) ? b : a;
            cout << "the greatest number is " << result << endl;
}