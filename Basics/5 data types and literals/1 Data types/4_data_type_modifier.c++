#include <iostream>
using namespace std;


    /* 
    Data type modifiers are the keywords used to change or give extra meaning to already existing data
     types. It is added to primitive data types as a prefix to modify their size or range of data they
      can store. There are 4 type modifiers in C++: short, long, signed and unsigned.

            */

int main() {
      int var1; // 4 bytes
    long long int var2; // 8 bytes

    cout << sizeof(var1) << endl;
    cout << sizeof(var2) << endl;

    /************************************************************
     * 📘 DATA TYPE MODIFIERS IN C++
     * ----------------------------------------------------------
     * Modifiers are used with built-in data types to change:
     * 1. The size of the data type
     * 2. The range of values it can store
     *
     * Modifiers available:
     * 👉 signed
     * 👉 unsigned
     * 👉 short
     * 👉 long
     ************************************************************/

    // 🧮 1. short int
    // - Usually 2 bytes (depends on compiler)
    // - Range (signed): -32,768 to 32,767
    // - Range (unsigned): 0 to 65,535
    short int si = 32767;                 // max value for signed short
    unsigned short int usi = 65535;       // max value for unsigned short
    cout << "short int: " << si << endl;
    cout << "unsigned short int: " << usi << endl;

    // 🧮 2. int (normal integer)
    // - Usually 4 bytes
    // - signed int: -2,147,483,648 to 2,147,483,647
    // - unsigned int: 0 to 4,294,967,295
    int i = 2147483647;
    unsigned int ui = 4294967295;
    cout << "int: " << i << endl;
    cout << "unsigned int: " << ui << endl;

    // 🧮 3. long int
    // - Usually 4 or 8 bytes
    // - signed: -2,147,483,648 to 2,147,483,647 (if 4 bytes)
    // - unsigned: 0 to 4,294,967,295
    long int li = 2147483647;
    unsigned long int uli = 4294967295;
    cout << "long int: " << li << endl;
    cout << "unsigned long int: " << uli << endl;

    // 🧮 4. long long int (C++11)
    // - Usually 8 bytes
    // - signed: up to 9,223,372,036,854,775,807
    // - unsigned: up to 18,446,744,073,709,551,615
    long long int lli = 9223372036854775807;
    unsigned long long int ulli = 18446744073709551615u;
    cout << "long long int: " << lli << endl;
    cout << "unsigned long long int: " << ulli << endl;

    // 🧮 5. signed and unsigned
    // signed -> can hold positive and negative values
    // unsigned -> only positive values (doubles the positive range)
    signed int s = -100;
    unsigned int u = 100;
    cout << "signed int: " << s << endl;
    cout << "unsigned int: " << u << endl;

    /************************************************************
     * 📝 Important Notes:
     * - `short` and `long` can be used without `int` (e.g. `short x;`)
     * - `unsigned` and `signed` also work with **char types
     **********************************************************/

    // 🧠 Example with char modifiers
    signed char sc = -120;   // can store negative values
    unsigned char uc = 250;  // only positive values
    cout << "signed char: " << (int)sc << endl;
    cout << "unsigned char: " << (int)uc << endl;

    /************************************************************
     * ⚡ Sizes of each type (may vary by compiler)
     ************************************************************/
    cout << "\n📏 SIZE OF DATA TYPES 📏" << endl;
    cout << "short int: " << sizeof(short int) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long int: " << sizeof(long int) << " bytes" << endl;
    cout << "long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " bytes" << endl;

    return 0;
}
