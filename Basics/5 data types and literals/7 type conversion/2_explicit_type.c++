#include <iostream>
using namespace std;


int main()
{
                // Explicit Type Conversion
                   /*
                   Explicit type conversion, also called type casting is the conversion of one type of data to another 
                   type manually by a programmer. Here the user can typecast the result to make it of a particular data type.
                    In C++, it can be done by two ways:
                            1. C Style Typecasting
                            2. C++ Style Typecasting
                                    */




                // 1. C Style Typecasting
                        /*
                        This method is inherited by C++ from C. The conversion is done by explicitly defining the 
                        required type in front of the expression in parenthesis. This can be also known as forceful casting.
                                        (type) expression;     where type indicates the data type to which the final result is converted
                                */



                        double x=1.2;


                            // Explicit conversion from double to int
                        int sum = (int)x + 10;

                        cout << "Sum: " << sum << endl;

                /*
                This typecasting is considered old and unsafe because it performs no checks whatsoever to determine
                 whether the casting is valid or not.
                                */





                    



                // 2. C++ Style Typecasting
                    /*
                    C++ introduced its own typecasting method using cast operators. Cast operator is an unary operator
                     which forces one data type to be converted into another data type. 
                     
                     C++ supports four types of casting:
                            1. Static Cast: Used for standard compile time type conversions.
                            2. Dynamic Cast: Used for runtime type conversion in polymorphism and inheritance.
                            3. Const Cast: Removes or adds const or volatile qualifiers.
                            4. Reinterpret Cast: Used for low-level reinterpretation of bits (e.g., converting pointers).
                        */





                double a = 1.3;

                    // Explicit conversion from double to int

                int sum2 = static_cast<int>(x+11);

                cout << "sum2 : " << sum2 << endl;







                // Risks of Type Conversion
                    /*
                        Type conversion provides useful functionality to the language but also introduces certain risks:
                                1. Data loss that occurs when converting from a larger type to a smaller type (e.g., int to char).

                                2.Undefined behavior that happens when casting pointers between unrelated types and dereferencing them.

                                3. Violation of const correctness when removing const with const_cast and modifying the variable
                                         leads to undefined behavior.
                                         
                                4.Memory misalignment casting pointers to types with stricter alignment can cause crashes.

                            
                        
                        
                                */

}