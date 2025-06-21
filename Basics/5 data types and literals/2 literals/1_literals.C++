#include <iostream>
using namespace std;

    // Literals in C++
        /*
            In C, Literals are the constant values that are assigned to the variables. Literals represent
             fixed values that cannot be modified. Literals contain memory but they do not have references
              as variables. Generally, both terms, constants, and literals are used interchangeably. 
              */

       //   For example, “const int = 5;“, is a constant expression and the value 5 is referred to as a constant integer literal.
       


int main()
{
      // C++ provides different types of literals based on the type of data. These are fixed constant values written directly in the code.

        // 🔹 1. Integer Literals
                /*
                Integer literals are used to represent and store the integer values only. Integer literals are expressed in two types i.e.  
                    */

            // (A) Prefixes: The Prefix of the integer literal indicates the base in which it is to be read.
                    /* 
                    0x10 = 16
                        Because 0x prefix represents a HexaDecimal base. So 10 in HexaDecimal is 16 in Decimal. Hence the value 16.

                               */



                        // There are basically represented into 4 types:

                            /*  1. Decimal-literal(base 10): A non-zero decimal digit followed by zero or more decimal
                            digits(0, 1, 2, 3, 4, 5, 6, 7, 8, 9).

                                        56, 78
                                    */
                        int decimal=25;
                        cout << decimal << endl;


                            /* 
                                2. Octal-literal(base 8): a 0 followed by zero or more octal digits(0, 1, 2, 3, 4, 5, 6, 7).
                                        045, 076, 06210

                                    */
                        int octal=031;
                        cout << octal << endl;



                        /* 
                            3. Hex-literal(base 16): 0x or 0X followed by one or more hexadecimal digits
                            (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, A, b, B, c, C, d, D, e, E, f, F).
                                        0x23A, 0Xb4C, 0xFEA
                                                */
                        int hexadecimal=0x19;
                        cout << hexadecimal << endl;


                        /* 
                            4. Binary-literal(base 2): 0b or 0B followed by one or more binary digits(0, 1).
                                    0b101, 0B111
                                */
                        
                        int binary=0b11001;
                        cout << binary << endl;
            


            

            // B) Suffixes: The Suffixes of the integer literal indicates the type in which it is to be read.
                        /* 
                        12345678901234LL 
                        indicates a long long integer value 12345678901234 because of the suffix LL



                int: No suffix is required because integer constant is by default assigned as an int data type.
                unsigned int: character u or U at the end of an integer constant.
                long int: character l or L at the end of an integer constant.
                unsigned long int: character ul or UL at the end of an integer constant.
                long long int: character ll or LL at the end of an integer constant.
                unsigned long long int: character ull or ULL at the end of an integer constant.
                              */


                      // constant integer literal
                        const int intVal = 10;
                        cout <<"Integer Literal: " << intVal << endl;
                
            





        // 2. Floating-Point Literals
                    /* 
                    These are used to represent and store real numbers. The real number has an integer part,
                     real part, fractional part, and exponential part. The floating-point literals can be stored 
                     either in decimal form or exponential form. While representing the floating-point decimals 
                     one must keep two things in mind to produce valid literal:
                            -->    In the decimal form, one must include the integer part, or fractional part, or both,
                                     otherwise, it will lead to an error.
                            -->    In the exponential form, one must include both the significand and exponent part,
                                     otherwise, it will lead to an error.
                                    
                                     
                                     Valid Floating Literals:
                                            10.125
                                            1.215e-10L
                                            10.5E-3

                                     Invalid Floating Literals:
                                            123E
                                            1250f
                                            0.e879

                    | Literal      | Meaning                     | Type           | Multiplied By      |
                    | ------------ | --------------------------- | -------------- | ----------------   |
                    | `10.125`     | Normal float value          | `float`        | —                  |
                    | `1.215e-10L` | Sci. notation + long double | `long double`  | `10⁻¹⁰`            |
                    | `10.5E-3`    | Sci. notation               | `float` (cast) | `10⁻³` = `0.001`   |
                    | `10.52123e3` | Sci. notation               | `float` (cast) | `10³` = `10521.23` |


                                    */


                        float num1=10.125;    // Valid: Decimal float
                        cout << "num1: " << num1 << endl;

                        double num2=1.215e-10L;  // Valid: Scientific notation with long double
                        cout << "num2: "  << num2 << endl;

                        float num3 = 10.5E-3;       // Valid: Scientific notation
                        cout << "num3: " << num3 << endl;

                        float num4 = 123.2328e2;
                        cout << "num4: " << num4 << endl; 


                        // float invalid1 = 123E;     // ❌ Invalid: Missing exponent value
                        // float invalid2 = 1250f;    // ❌ Invalid in standard C++ (use 1250.0f instead)
                        // float invalid3 = 0.e879;   // ❌ Invalid: no digit after decimal point






        // 3. Character Literals
              /*
                This refers to the literal that is used to store a single character within a single quote.
                 To store multiple characters, one needs to use a character array. Storing more than one 
                 character within a single quote will throw a warning and display just the last character 
                 of the literal. It gives rise to the following two representations:

                        char type: This is used to store normal character literal or narrow-character literals.
    
                        */

                            // constant char literal
                            const char charVal = 'A';
            
                

                /* 
     Escape Seq | Name / Symbol      | ASCII Value | Purpose / Use Case                                                                        |
    | ---------- | ------------------ | ----------- | ----------------------------------------------------------------------------------------- |
    | `\n`       | Newline            | 10          | Moves the cursor to the next line. <br>📌 Used for printing output in multiple lines.     |
    | `\t`       | Horizontal Tab     | 9           | Adds a tab (like 4-8 spaces). <br>📌 Used for indentation/aligned output.                 |
    | `\\`       | Backslash (`\`)    | 92          | Prints a backslash. <br>📌 Used when you need to show a file path like `C:\\Program`.     |
    | `\'`       | Single Quote (`'`) | 39          | Prints a single quote. <br>📌 Used inside single-quoted characters.                       |
    | `\"`       | Double Quote (`"`) | 34          | Prints a double quote. <br>📌 Used inside double-quoted strings.                          |
    | `\0`       | Null Character     | 0           | Indicates the end of a C-style string. <br>📌 Used in character arrays to terminate them. |
    | `\r`       | Carriage Return    | 13          | Moves cursor to beginning of the current line. <br>📌 Rarely used in modern systems.      |
    | `\b`       | Backspace          | 8           | Moves cursor one space back. <br>📌 Can erase previous characters in console output.      |
    | `\a`       | Alert/Bell         | 7           | Produces a beep sound. <br>📌 Useful in old console programs to alert the user.           |
    | `\f`       | Form Feed          | 12          | Moves cursor to the next page (not common today). <br>📌 Used in printers historically.   |
    | `\v`       | Vertical Tab       | 11          | Moves the cursor vertically. <br>📌 Rarely used.                                          |
*/



            cout << "Line 1\nLine 2" << endl;        // Prints Line 1 and Line 2 in separate lines
            cout << "Tab\tSpace" << endl;            // Adds space between Tab and Space
            cout << "Path: C:\\Users\\Ravi" << endl; // Shows correct file path
            cout << "He said: \"Hi\"" << endl;       // Prints: He said: "Hi"






            char ch1 = 'A';      // Uppercase letter
            char ch2 = '9';      // Digit as character
            char ch3 = '$';      // Special character
            char ch4 = ' ';      // Space character

            cout << ch1 << endl;
            cout << ch2 << endl;
            cout << ch3 << endl;
            cout << ch4 << endl;











            // 4. String Literals
                    /*
                    String literals are similar to that character literals, except that they can store
                     multiple characters and uses a double quote to store the same. It can also accommodate 
                     the special characters and escape sequences mentioned in the table above. We can break 
                     a long line into multiple lines using string literal and can separate them with the help 
                     of white spaces.
                                    */


            const char str[] = "Welcome\nTo\nGeeks\tFor\tGeeks";

            cout << str;

            


            
}
