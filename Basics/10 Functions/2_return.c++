#include <iostream>
using namespace std;


void print(){
    cout << "Welcome to my code\n";
}

int add(int a,int b){

    // Return the sum and terminate the function
    return a+b;
}


// non-void return type
// function to calculate sum
int SUM(int a, int b)
{
    int s1 = a + b;

    // method using the return
    // statement to return a value
    return s1;
}



int main()
{
    //return Statement in C++
        /*
            In C++, the return statement returns the flow of the execution to the function from where it is called.
             This statement does not mandatorily need any conditional statements. As soon as the statement is executed,
              the flow of the program stops immediately and returns the control from where it was called. 
              The return statement may or may not return anything for a void function, but for a non-void function,
               a return value must be returned. 
                        */


        // Call the function and store the result
        int res=add(5,7);
        cout << res;




            //  various ways to use return statements.
                
                // 1. Methods not returning a value
                        /*
                        In C++ one cannot skip the return statement when the methods are of the return type.
                         The return statement can be skipped only for void types.+

                                Not using a return statement in void return type function


                            */


                    // Calling print
                    print();




            // 2. Methods returning a value: 
                /*
                  For methods that define a return type, the return statement must be immediately followed by
                   the return value of that specified return type. 

                    
                        return-type func() {
                            return value;
                        }
                              */



                int num1 = 10;
                int num2 = 10;
                int sum_of = SUM(num1, num2);
                cout << "The sum is " << sum_of;




                return 0;

        //   Note: We can only return a single value from a function using return statement. To return multiple values, 
            // we can use pointers, structures, classes, etc
            

    
}