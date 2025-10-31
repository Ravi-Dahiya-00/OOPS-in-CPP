/*
A manipulator is a special function in C++ that is used with input/output streams (like cin, cout ) to change the way data is shown or read.

We can use manipulators when we want to :

Format numbers
Set precision (decimals)
Align text
Change number base (like decimal to hexadecimal)
Control spacing
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    // Output a new line and flush the stream
    cout << "Hello" << endl;

    // Set width to 10 for the next output
    cout << setw(10) << 42 << endl;


    cout << setfill('*') << setw(10) << 42 << endl;


    // Set precision to 3 for floating-point numbers
    cout << setprecision(3) << 3.14159 << endl;

    // Use fixed-point notation
    cout << fixed << 3.14159 << endl;

    // Use scientific notation
    cout << scientific << 3.14159 << endl;

    // Show the decimal point even for whole numbers
    cout << showpoint << 42.0 << endl;



        char c1, c2;

    cout << "Enter two chars: ";
    // Input skips whitespace by default
    cin >> c1;  

    // Input the next character without skipping whitespace
    cin >> noskipws >> c2;  

    cout << "c1: " << c1 << ", c2: " << c2 << endl;

     bool value = true;

    // Display boolean as true/false
    cout << boolalpha << value << endl;

    // Display boolean as 1/0
    cout << noboolalpha << value << endl;


        int n = 42;

    // Align output to the left
    cout << left << setw(10) << n << endl;

    // Align output to the right
    cout << right << setw(10) << n << endl;

    // Show positive sign for numbers
    cout << showpos << n << endl;

    // Don't show positive sign for numbers
    cout << noshowpos << n <<endl;

     // Output in hexadecimal base
    cout << hex << n << endl;

    // Output in decimal base
    cout << dec << n << endl;

    // Output in octal base
    cout << oct << n;

    return 0;
}