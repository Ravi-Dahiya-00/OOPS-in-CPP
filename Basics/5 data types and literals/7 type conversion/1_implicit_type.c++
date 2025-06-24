#include <iostream>
using namespace std;


          // Type Conversion in C++
            /*
                Type conversion means converting one type of data to another compatible type such that it doesn't
                 lose its meaning. It is essential for managing different data types in C++.
                        */

int main()
{
        // Two variables of different type

        int i=10;
        char c='A';

        // printing c after manually converting it
        cout << (int)c << endl;

        // Adding i and c,
        int sum=i+c;

        // Printing sum
        cout << "Sum: " << sum << endl;


                    /*
                    The character c = ('A') is manually converted to its ASCII integer value using (int)c.
                     The addition of i = 10 and c involves automatic type conversion, where the character c is automatically 
                     converted to its ASCII value (65) before the addition.
                            */


        // In C++, there are two types of type conversion:
            // 1. Implicit Type Conversion
            // 2. Explicit Type Conversion




        // Implicit Type Conversion
                /*
                Implicit type conversion (also known as coercion) is the conversion of one type of data to another type 
                automatically by the compiler when needed. It happens automatically when:

                        1. Operations are performed on values of different data types.
                        2. If you pass an argument to a function that expects a different data type.
                        3. Assigning a value of one data type to a variable of another data type.

                    */


            int new_i=10;
            char new_c='a';

              // c implicitly converted to int. ASCII
             // value of 'a' is 97
               new_i = new_i + new_c ;




             cout << "new_i : " << new_i << endl;
             cout << "new_c : " << new_c << endl;


             float f = new_i +1.0 ;
             cout << "f : " << f << endl;    //11.0f is stored as a float  But cout only prints .0 if there's a fraction

             cout << "f with float precision: "<< fixed << f << endl;
             



             /*
             It is possible for implicit conversions to lose information, signs can be lost 
             (when signed is implicitly converted to unsigned), and overflow can occur 
             (when long long is implicitly converted to float).
                       */




                    



              // Cases of Implicit Type Conversion


                    // 1. For Numeric Type
                        /*
                        All the data types of the variables are upgraded to the data type of the variable with largest data type.
                         For numeric type,
                            bool -> char -> short int -> int ->  unsigned int -> long -> unsigned -> long long -> float -> double -> long double  
                                */


              // 2. Pointer Conversions
                    // Pointers to derived classes can be converted to pointers to base classes automatically.




              // 3. Boolean Conversion
                    /*
                    Any scalar type (integer, floating-point, pointer) is implicitly converted to bool in a context
                     that requires a Boolean value (e.g., if, while, for conditions).
                        */



}