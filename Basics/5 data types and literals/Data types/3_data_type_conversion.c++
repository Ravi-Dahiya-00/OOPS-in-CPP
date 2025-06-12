#include <iostream>
using namespace std;

    /*
    Type conversion refers to the process of changing one data type into another compatible one without
     losing its original meaning. It's an important concept for handling different data types in C++.
        */
int main()
{
        int n = 3;
        char  c = 'C';
        
        // Convert char data type into integer
        cout << (int)c << endl;

          cout << (char)n << endl;


        int sum = n + c;
        cout << sum;

        
        return 0;
}
