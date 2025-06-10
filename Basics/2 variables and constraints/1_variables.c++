#include <iostream>
using namespace std;
#define PI 3.14

/* 
    #define is a preprocessor directive in C++ used to define symbolic (macro) constants.
    It tells the compiler to replace every occurrence of a name with a value before compilation starts.   
    
    
    Text replacement:	The preprocessor replaces PI with 3.14 before compilation.
    No data type:	It does not have a type (unlike const), so there's no type safety.
    Global scope:	Available throughout the file after it’s defined.
    Cannot be debugged:     Since it’s replaced before compiling, debuggers cannot track it.

	

*/


int main()
{

    
    /*
    In C++, variable is a name given to a memory location. It is the basic unit of storage in a program.
     The value stored in a variable can be accessed or changed during program execution.

     type name;
     type name1, name2, name3 ....;

            type is the type of data that a variable can store, and name is the name assigned to the variable.
    */


    int num;  //To store number without decimal point, we use integer data type.
    // int is the keyword used to tell the compiler that the variable with name num will store integer values

    // Initializing : A variable that is just defined may not contain some valid value. We have to initialize it to some valid initial value.
    num = 3;


    // Definition and initialization can also be done in a single step as shown:
    int num111 = 3;



    // Accessing and printing above variable
    cout << num << endl;


    // Note: The value we assign should be of the same type as the variable.


    // Accessing and Updating
    /*
    The main objective of a variable is to store the data so that it can be retrieved or update any time.
     Accessing can be done by simply using its assigned name and updating the value using = assignment operator.
        */



    // Update the value
    num = 7;
    
    cout << num << endl;




// Rules For Naming Variable
     // The names given to a variable are called identifiers. There are some rules for creating these identifiers (names):
          /*
        1.A name can only contain letters (A-Z or a-z), digits (0-9), and underscores (_).
        2.It should start with a letter or an underscore only.
        3.It is case sensitive.
        4.The name of the variable should not contain any whitespace and special characters (i.e. #, $, %, *, etc).
        5.We cannot used C++ keyword (e.g. float, double, class) as a variable name.
            */


        
        int num1 = 10, num2;
    
    // Assigning num1's value to num2
    num2 = num1;
    cout << num1 << " " << num2 << endl;


// Addition of two integers can be done in C++ using + operator as shown:
    cout << 10 + 20 << endl;

// We can do the above operation using the variables that store these two values.
    cout << num1 + num2 << endl;




    // Constant Variables:
        // In C++, a constant variable is one whose value cannot be changed after it is initialized. This is done using the const keyword.




    const int new_num=20;

    cout << new_num << endl;





    cout << PI << endl;



    float radius = 5;
    float area = PI * radius * radius;
    std::cout << "Area: " << area << std::endl;



    /*
    1. const is type-safe and respects scope rules.
    2. You can use const in debugging and type-checking.
    3. Prefer const in modern C++ unless you need macros for specific cases.
      */

    // Scope of Variables 
        /*
        Scope of variable is the region inside the program where the variable can be referred to by using its name. 
        Basically, it is the part of the program where the variable exists. Proper understanding of this concept 
        requires the understanding of other concepts such as functions, blocks, etc.
             */



    // Memory Management of Variables
    /*
    When we create or declare a variable, a fixed-size memory block is assigned to the variable, 
    and its initial value is a garbage value. Initialization assigns a meaningful value using the assignment operator. 
    Variables essentially manipulate specific memory locations, and their stored data is accessed via their names.
        */




    return 0;



    // learn Const Qualifier in C++ after a small time and add notes here
    

}