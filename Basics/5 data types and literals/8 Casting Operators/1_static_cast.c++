#include <iostream>
#include <typeinfo> 
using namespace std;


int main()
{
        /*
            The casting operators is the modern C++ solution for converting one type of data safely to another type. 
            This process is called typecasting where the type of the data is changed to another type either implicitly
             (by the compiler) or explicitly (by the programmer).
                    */



            // 1. static_cast
                /*
                The static_cast operator is the most commonly used casting operator in C++. It performs compile-time 
                type conversion and is mainly used for explicit conversions that are considered safe by the compiler. 

                            static_cast <new_type> (exp);
                                            exp: Data to be converted.
                                            new_type: Desired type of expression


                   */

            char c='a';

            // Converting c from char to int
            int i = static_cast<int>(c);


            // Printing the converted value
            cout << "i : " << i << endl;


                    /*
                    Explanation: We have converted the character c it an integer corresponding to its ASCII value by using casting operator.
                        */




            // The static_cast can be used to convert between related types, such as numeric types or pointers in the same inheritance hierarchy.



            int n=10;

                // converting int to double
                double nd = static_cast<double>(n);

                // printing data type
                cout << typeid(n).name() << endl;

                // typecasting
                cout << typeid(static_cast<double>(n)).name() << endl;

                // Printing double type
                cout << typeid(nd).name() << endl;








                



}