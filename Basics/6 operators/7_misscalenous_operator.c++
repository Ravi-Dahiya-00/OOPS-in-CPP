#include <iostream>
using namespace std;

int main()
{
     
        // 1. sizeof Operator
                /*
                sizeof operator is a unary operator used to compute the size of its operand or variable in bytes.
                 For example,
                    */

                int var_name=29;
                
                cout << sizeof (char) << endl;
                cout << sizeof (var_name) << endl;


        // 2. Comma Operator (,)
                /*
                   Comma operator is a binary operator that is used for multiple purposes.
                    It is used as a separator or used to evaluate its first operand and discards the result; 
                    it then evaluates the second operand and returns this value (and type).
                        */


                int x;
                x = (10, 20, 30);
                cout << x << endl;

                // The comma operator evaluates all expressions from left to right, but only the value of the rightmost expression is returned.


            


        // 6. Addressof Operator (&)
                /*
                    Addressof operator is used to find the memory address in which a particular
                     variable is stored. In C++, it is also used to create a reference.
                          */



                int var;

                cout << "address of : " << &var << endl;



}