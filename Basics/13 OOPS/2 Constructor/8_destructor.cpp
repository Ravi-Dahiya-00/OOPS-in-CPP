#include <iostream>
using namespace std;

class Demo {
public:
    int *ptr;

    // Constructor
    Demo(int x) : ptr(new int(x)) {
        cout << "Constructor: Allocated memory with value = " << *ptr << endl;
    }

    // Copy Constructor (Deep Copy)
    Demo(const Demo &other) : ptr(new int(*other.ptr)) {
        cout << "Copy Constructor: Deep copy created with value = " << *ptr << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor: Freeing memory with value = " << *ptr << endl;
        delete ptr;   // free memory
    }
};

void fun() {
    Demo d(10);  // constructor runs
}               // goes out of scope → destructor runs

int main() {

    cout << "=== Single Object ===" << endl;
    fun();   // destructor runs at end of function

    cout << "\n=== Array of Objects (Dynamic) ===" << endl;
    Demo *arr = new Demo[2]{ Demo(100), Demo(200) };
    delete[] arr;   // destructor called for both objects

    cout << "\n=== Copy Constructor Demo ===" << endl;
    Demo d1(50);
    Demo d2 = d1;  // deep copy happens

    cout << "\n=== Program End ===" << endl;
    return 0;  // destructors for d1 and d2 run
}
