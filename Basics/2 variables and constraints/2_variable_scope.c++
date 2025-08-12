#include <iostream>
using namespace std;


// Scope of Variables in C++ : 
        /*
        In C++, the scope of a variable is the extent in the code upto which the variable can be accessed or worked with.
         It is the region of the program where the variable is accessible using the name it was declared with.
                    */

// Declaring first variable
int a = 10;

// Global Scope :
    /*
    Global scope refers to the region outside any function or a block. The variables declared here are accessible
     throughout the entire program and are called Global Variables.
                    */
      


         // Global variable
        int global = 5;

        // Global variable accessed from within a function
void display() {
    cout << global << endl;
}






// Local Scope :
         // Local scope means variables declared inside a block {} are only accessible within that block.

void func() {
  
    // This variable is local to function func() and
  	// cannot be accessed outside this function
    int age = 18;
    cout << age;
}




int main()
{
      	// Declaring second variable
  	    int b = 9;


        // Accessing a and b variable in their scope
        cout << a << " " << b << endl;





        // Changing value of global from main function before calling display()
            global = 10;
            display();

    // a global variable and can be accessed or updated from anywhere in the program.  




    // Accessing variable from func() in main function

    // cout << "Age is: " << age;  
     
    // this above statement will give error  


    
    cout << "Age is: ";
    func();
    
    return 0;
}