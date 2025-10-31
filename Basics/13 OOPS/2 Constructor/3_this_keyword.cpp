#include <iostream>
using namespace std;

// this is a special pointer that exists inside every non-static member function of a class.
// 👉 It points to the object that called that function.
// this helps the function know which object it is currently working with.

class cricketers{
public:
    string name;
    int runs;

    cricketers(string name,int runs){
        this->name=name;
        this->runs=runs;

        /*
        Left side (this->name) → refers to the data member of the current object (like s1.name or s2.name).
        Right side (name) → refers to the function parameter (the local variable passed into the function).

        this → points to s1
        this->name → means s1.name
        this->age → means s1.age
        The parameters are name = "Ravi", age = 19
              */

            // name = name;    ❌ Both refer to the parameter → data members remain unchanged
                            // Here, the compiler gives priority to the local parameter, not the class variable.
                            // → The compiler would assign the parameter to itself, doing nothing.
                            // → The data member remains unchanged (garbage value).

    }
};
int main(){
    cricketers c1("Ravi",25000);
    cricketers c2("virat",23000);

    cout << c1.name << " " << c1.runs << endl;
    cout << c2.name << " " << c2.runs;

}

/*
| Property                | Description                                              |
| ----------------------- | -------------------------------------------------------- |
| Type                    | Pointer to the current object (`ClassName*`)             |
| Used inside             | Non-static member functions only                         |
| Access syntax           | `this->member`                                           |
| Automatically available | Yes, no need to declare                                  |
| Cannot be used in       | Static functions (since they don’t belong to any object) |
*/