#include <iostream>
using namespace std;

int main()
{
            
            // 3. Logical Operators
                 /*
                 Logical operators are used to combine two or more conditions or constraints or to complement
                  the evaluation of the original condition in consideration. The result returns a 
                  Boolean value, i.e., true or false.




                  Name	                              Symbol	                                            Description
                Logical AND	                            &&	                              Returns true only if all the operands 
                                                                                                are true or non-zero.

                Logical OR	                            ||                          	 Returns true if either of the operands
                                                                                                 is true or non-zero.

                Logical NOT	                            !	                              Returns true if the operand is false or zero.


                                                                                             */



                int a=6 , b=4;

                // Logical AND operator
                cout << "a && b is " << (a&&b) << endl;

                // Logical OR operator
                cout << "a || b is " << (a||b) << endl;

                // Logical NOT operator
                cout << "!b is " << (!b) << endl;

}