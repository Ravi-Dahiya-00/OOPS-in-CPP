#include <iostream>
using namespace std;


int main()
{
            // 5. Assignment Operators
                    /*
                    Assignment operators are used to assign value to a variable. We assign the value of right operand 
                    into left operand according to which assignment operator we use.
                    
                    

            Name                          Symbol                                                            Description

          Assignment	                    =                                       Assigns the value on the right to the variable 
                                                                                              on the left.

           Add and Assignment	            +=                                      First add right operand value into left operand 
                                                                                            then assign that value into left operand.

            Subtract and Assignment	         -=                                      First subtract right operand value into left operand
                                                                                             then assign that value into left operand.

            Multiply and Assignment	         *=                                      First multiply right operand value into left operand 
                                                                                                then assign that value into left operand.

            Divide and Assignment	          /=                                     First divide right operand value into left operand 
                                                                                            then assign that value into left operand.        
                   
                   
                   
                   
                                                                                            */


                int a=8 , b= 7;



                // Assignment Operator.
                cout << "a = " << a << endl;

                //  Add and Assignment Operator.
                cout << "a += b : " << (a+=b) << endl;

                // Subtract and Assignment Operator.
                cout << "a -= b : " << (a-=b) << endl;

                //  Multiply and Assignment Operator.
                cout << "a *= b : " << (a*=b) << endl;

                //  Divide and Assignment Operator.
                cout << "a /= b : " << (a/=b) << endl;


    
    return 0;
}