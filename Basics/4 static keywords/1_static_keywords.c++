#include <iostream>
using namespace std;


int main()
{
    
}

/*
| Use                    | Where used          | Lifetime       | Shared by     | Access                  |
| ---------------------- | ------------------- | -------------- | ------------- | ----------------------- |
| Static local variable  | Inside a function   | Entire program | Function only | Remembers value         |
| Static data member     | Inside a class      | Entire program | All objects   | Belongs to class        |
| Static member function | Inside a class      | Entire program | All objects   | Access static only      |
| Static global variable | Outside all classes | Entire program | File only     | Hidden from other files |
*/