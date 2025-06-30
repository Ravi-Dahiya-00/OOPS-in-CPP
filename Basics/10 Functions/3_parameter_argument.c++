#include <iostream>
using namespace std;


// Defining function that prints given number
void print_number(int n){
    cout << n << endl;
}
    
int main()
{

        // Parameters or Arguments
            /*
                A function can also take some input data to process. These values are called function arguments
                 and are supplied to the function at the function call. To receive these values, we define placeholder
                  variables called parameter inside parenthesis in function definition. They should be 
                  specified with their types and names.


                  
                  return_type name(type1 name1, type2 name2...) {
                        // Function body
                        return val;
                    }


                     -->   name1, name2 and so on are the parameter names using which they will be accessed in the function.


                                         */


        int num1 = 10;
        int num2 = 20;




            // Calling printNum and passing both
            // num1 and num2 to it one by one


            print_number(num1);
            print_number(num2);


            /*
            A function can only take as many arguments as specified in the function definition and it is compulsory
             to pass them while calling it. Also, they should be of same type as in the function definition.
                    */






        

}