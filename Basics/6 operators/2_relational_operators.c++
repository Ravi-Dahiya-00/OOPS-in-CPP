#include <iostream>
using namespace std;

int main()
{
        // 2. Relational Operators
            // Relational operators are used for the comparison of the values of two operands. For example, '>' check right operand is greater.


            /*
                Name	                                 Symbol	                                    Description
            Is Equal To	                                    ==	                                    Checks both operands are equal

            Greater Than	                                >	                                    Checks first operand is greater 
                                                                                                        than the second operand

            Greater Than or Equal To	                    >=	                                    Checks first operand is greater
                                                                                                         than equal to the second operand

            Less Than	                                     <	                                    Checks first operand is lesser than
                                                                                                             the second operand

            Less Than or Equal To	                        <=	                                    Checks first operand is lesser than 
                                                                                                        equal to the second operand

            Not Equal To	                                !=	                                       Checks both operands are not equal  

*/


            int a=10 , b=34;

            // Equal operator
            cout << "a == b is " << (a==b) << endl;

            // Greater than operator
            cout << "a > b is " << (a>b) << endl;

            // Greater Than or Equal To
            cout << "a >= b is " << (a>=b) << endl;

            //  Lesser than operator
            cout << "a < b is " << (a<b) << endl;

            // Lesser than Equal to operator
            cout << "a <= b is " << (a<=b) << endl;

            // Not equal to operator
            cout << "a != b is " << (a!=b) << endl;



                // Note: 0 denotes false and 1 denotes true.


        return 0;

}