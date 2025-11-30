#include <iostream>
using namespace std;


// Local Classes in C++
        /*
            A class declared inside a function becomes local to that function and is called Local Class in C++.

                        A local class name can only be used locally i.e., inside the function and not outside it.
                        The methods of a local class must be defined inside it only.
                        A local class can have static functions but, not static data members.
    */

void fun()
{
    class Test {       // local to fun
    public:
        // Fine as the method is defined
        // inside the local class
        void method()
        {
            cout << "Local Class method() called";
        }
    };

    Test t;
    t.method();
}



int main(){

    fun();
    
}