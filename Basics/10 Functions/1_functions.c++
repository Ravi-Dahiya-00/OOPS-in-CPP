#include <iostream>
using namespace std;


        // Functions in C++
            /*
                A function is a building block of C++ programs that contains a set of statements which are executed 
                when the functions is called. It can take some input data, performs the given task, and return some result. 
                A function can be called from anywhere in the program and any number of times increasing the modularity and reusability.
                         */



            // Function Definition
              /*
                A function definition specifies the function name, what type of value it returns and what it does. 
                In C++, a function must be defined before it its used.

                            return_type name() {
                                    // Function body
                                }


                                    return_type: Type of value the function returns.
                                    name: Name assigned to the function.
                                    Function body: Set of statements in curly brackets { } are executed when the function is called.

                                               */


// Defining function that prints hello
void printHello(){
    cout << "Hello World";
}



// Defining function that returns 10
int get_ten(){
    int res=10;
    return res;
}

int main()
{

    // Calling function fun
    printHello();

        // Return Type
            /*
            We have seen an example of function that does not return anything. But functions can return some value
             as a result of its execution. The type of this value should be defined as the return_type of the function.
                */


    // Calling function getTen()
    cout << get_ten();


    // Note: Only one value can be returned from the function, and it must be of the same type as of function's return type.





    // Forward Declaration
         /*
            In C++, a function must be defined before its call. Otherwise, compiler will throw an error.
             To resolve this, we can just declare the function before the call and definition to inform 
             the compiler about function's name and return type. This is called forward declaration 
             or just function declarations.
                        */


}