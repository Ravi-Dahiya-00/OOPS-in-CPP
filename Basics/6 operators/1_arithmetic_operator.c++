#include <iostream>
using namespace std;


int main()
{
         // Operators in C++
                /*
                   C++ operators are the symbols that operate on values to perform specific mathematical 
                   or logical computations on given values. They are the foundation of any programming language.
                            */




        // C++ Operator Types
            // C++ operators are classified into 6 types on the basis of type of operation they perform:
                        /*
                        1. Arithmetic Operators    -->binary operator
                        2. Relational Operators    -->binary operator
                        3. Logical Operators      -->binary operator
                        4. Bitwise Operators       -->binary operator
                        5. Assignment Operators    -->binary operator
                        6. Ternary or Conditional Operators  --> Ternary operator 
                                */




            // 1. Arithmetic Operators
                    /*
                    Arithmetic operators are used to perform arithmetic or mathematical operations on the operands.
                     For example, '+' is used for addition.


                     Name	                        Symbol	                                          Description
                    Addition	                      +	                                           Adds two operands.
                    Subtraction                       -	                                           Subtracts second operand from the first.
                    Multiplication	                  *                                            Multiplies two operands.
                    Division	                      /                                            Divides first operand by the second operand.
                    Modulo Operation                  %                                            Returns the remainder an integer division.
                    Increment                         ++                                           Increase the value of operand by 1.
                    Decrement                         --                                           Decrease the value of operand by 1.
                 
                    */


                    int a=8 , b=4;

                    // Addition
                    cout << "a + b : " << a+b << endl;

                    // Subtraction
                    cout << "a - b : " << a-b << endl;

                    // Multiplication
                    cout << "a * b : " << a*b << endl;

                    // Division
                    cout << "a / b : " << a/b << endl;

                    // Modulo
                    cout << "a % b : " << a%b << endl;

                    // Increment
                    cout << "a++ : " << a++ << endl;

                    // Decrement
                    cout << "--b : " << --b << endl;


                    /*
                    
                    1. The Modulo operator (%) operator should only be used with integers. Other operators can also be
                             used with floating point values.     
                    
                    
                    2. ++a and a++, both are increment operators, however, both are slightly different. In ++a, 
                    the value of the variable is incremented first and then it is used in the program. In a++, 
                    the value of the variable is assigned first and then it is incremented. Similarly happens 
                    for the decrement operator.


                    3. Unary: Works on single operand.
                       Binary: Works on two operands.
                       Ternary: Works on three operands.


                    */




}
