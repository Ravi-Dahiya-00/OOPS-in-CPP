#include <iostream>
using namespace std;


        // Default Arguments in C++
            /*
               A default argument is a value provided for a parameter in a function declaration that is automatically 
               assigned by the compiler if no value is provided for those parameters in function call. If the value 
               is passed for it, the default value is overwritten by the passed value.


                        A default argument is defined by assigning a value to a function parameter in its declaration.
                                   return_type name (p1= v1, p2= v2, ...);

                   */



    // Function with an argument with default value
    void fun(int a=10)
    {
        cout << a << endl;
    }

    // Declaration with default argument
    void func(int x = 10);

    // Definition without default argument
    void func(int x) {
        cout << "Value: " << x << endl;
    }





    void test(int a) {
    cout << "Integer version\n";
    }

    void test(float b) {
        cout << "Float version\n";
    }




int main(){
    

    // Uses default argument
    fun();

    // Uses passed value
    fun(221);



    // Rules to Follow

        // 1. Default Values Must Be Specified in Function Declarations
                /*
                The default values for parameters must be specified in the function declaration (or prototype). 
                If a function is declared and defined separately, the default values must be in the declaration, not in definition.



        // 2. Default Arguments Cannot Be Modified
                Once default arguments are defined in the declaration, they cannot be modified in the function definition.
                 If you try to change the default value in the definition, it will result in a compilation error.

                                // Declaration
                                void f(int a = 10);

                                // This definition will throw and error
                                void f(int a = 222) {
                                    // statements
                                }




        // 3. Default Arguments Must Be Provided from Right to Left
                    In a function with multiple parameters, default values must be provided from the rightmost parameter to the left.
                     It means that if a parameter has a default argument, all parameters to its right must also have default values.



                                // Valid
                                void func(int x, int y = 20);

                                // Invalid, as `y` does not have a default value
                                void func(int x = 10, int y);








        // 4. Ambiguity in Function Overloading
                If a function containing default arguments is overloaded, then we need to make sure it is
                 not ambiguous to the compiler, otherwise it will throw an error. For example,




                        // Valid
                        void f(int a = 10, int b = 20);
                        
                        // Will throw error as the signature is same
                        void f(int a = 22, int b = 2);

                        // Will also throw error
                        void f(int a);

                        // Will also throw an error
                        void f(int a, b)


                    */


                    test(10);  // 👈 This is unambiguous — compiler will call test(int)



        /*
            Advantages
                    1. Default arguments are useful when we want to increase the capabilities of an existing function.
                    2. It helps in reducing the size of a program.
                    3. It provides a simple and effective programming approach.
                    4. Default arguments improve the consistency of a program.
                    
            Disadvantages
                    1. If the default values are not well-documented or understood,
                         it can lead to confusion about what arguments are being used.
                    2. Overloading functions with default arguments can sometimes lead to ambiguities.
                    3. It increases the execution time as the compiler needs to replace the omitted arguments
                         by their default values in the function call.
*/


}