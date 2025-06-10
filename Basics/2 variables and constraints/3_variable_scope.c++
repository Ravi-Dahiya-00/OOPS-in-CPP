#include<iostream>
using namespace std;

// Global variable
int a = 5;

int main() {
  
    // Local variable with same name as that of global variable
    int a = 100;
  
  	// Accessing a
    cout << a << endl;
  
    /*
    1.If two variables with same name are defined in different scopes, the compiler allows it and does not show error.
    2.Whenever there is a local variable defined with same name as that of a global variable, the precedence is given 
        to the local variable. This is called variable shadowing.
            */

    


    
    // Access Global Variable in Variable Shadowing :
        /*
        The global a is still available in the main function but is shadowed by the local a as it is available everywhere. 

        C++ allows the users to access global variable with the same name as local variable using scope resolution operator.
             */

             // Accessing global a
            cout << ::a << endl;




  	return 0;
}