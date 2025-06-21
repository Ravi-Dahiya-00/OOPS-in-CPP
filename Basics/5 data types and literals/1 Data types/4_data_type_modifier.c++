#include <iostream>
using namespace std;

    /* 
    Data type modifiers are the keywords used to change or give extra meaning to already existing data
     types. It is added to primitive data types as a prefix to modify their size or range of data they
      can store. There are 4 type modifiers in C++: short, long, signed and unsigned.

            */
int main()
{
    int var1; // 4 bytes
    long long int var2; // 8 bytes

    cout << sizeof(var1) << endl;
    cout << sizeof(var2) << endl;

}