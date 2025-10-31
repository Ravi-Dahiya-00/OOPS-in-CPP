#include <iostream>
using namespace std;

// Data types :
        /*
        Data types specify the type of data that a variable can store. Whenever a variable is defined in C++, 
        the compiler allocates some memory for that variable based on the data type with which it is declared 
        as every data type requires a different amount of memory.
            */ 
    
    // C++ supports a wide variety of data types, and the programmer can select the data type appropriate to the needs of the application.

    

    // Classification of Datatypes

    /* 

    S. No.                          Type                                  	Description	                              Data Types
    1
 
                                 Basic Data Types	                       Built-in or primitive data types 
                                                                       that are used to store simple values.
                                                                                                        	int, float, double, char, bool, void
   

    2                         Derived Data Types	                  Data types derived from basic types.
                                                                    	                                    array, pointer, reference, function
   
   
   
    3                          User Defined Data Types	            Custom data types created by the programmer
                                                                     according to their need.
                                                                                                             class, struct, union, typedef, using


                */

int main()
{
      	// Creating a variable to store integer
        int var1=10;
        
        cout << var1 << endl;




        // 1. Character Data Type (char)
                /* The character data type is used to store a single character. The keyword used to define a character 
                is char. Its size is 1 byte, and it stores characters enclosed in single quotes (' '). It can generally 
                store upto 256 characters according to their ASCII codes.
                    */
                
                    // Character variable
                    char char_var='A';
                    cout << char_var << endl;


        // 2. Integer Data Type (int)
                /* 
                Integer data type denotes that the given variable can store the integer numbers. 
                The keyword used to define integers is int. Its size is 4-bytes (for 64-bit) systems 
                and can store numbers for binary, octal, decimal and hexadecimal base
                 systems in the range from -2,147,483,648 to 2,147,483,647.
                    */
        
                int integer_var=203;

                cout << integer_var << endl;
    
    
            // Using hexadecimal base value
            integer_var=0x15;
            cout << integer_var << endl;


    

    // 3. Boolean Data Type (bool)
            /* 
                The boolean data type is used to store logical values: true(1) or false(0). 
                The keyword used to define a boolean variable is bool. Its size is 1 byte.

                    */

          	// Creating a boolean variable
            bool istrue=true;

            cout << istrue << endl;

        
    
    
    // 4. Floating Point Data Type (float)
            /* 
                Floating-point data type is used to store numbers with decimal points. The keyword used to define
                 floating-point numbers is float. Its size is 4 bytes (on 64-bit systems) and can store
                  values in the range from 1.2E-38 to 3.4e+38.

            */

            // Floating point variable with a decimal value

            float float_var=233.190;

            cout << float_var << endl;


    


    // 5. Double Data Type (double)
            /* 
                The double data type is used to store decimal numbers with higher precision. The keyword used 
                to define double-precision floating-point numbers is double. Its size is 8 bytes (on 64-bit systems) 
                and can store the values in the range from 1.7e-308 to 1.7e+308
                    */

            // double precision floating point variable
            double pi = 3.1415926535;
            
            cout << pi << endl;

        
    



    // 6. Void Data Type (void)
                /* 
                        The void data type represents the absence of value. We cannot create a variable of void type.
                         It is used for pointer and functions that do not return any value using the keyword void.
                             */





   // wchar_t — Wide Character Type 
                /*
                        It’s the most common wide character data type in C++.
                        Size is usually 2 bytes (Windows) or 4 bytes (Linux/Unix).
                        Can store characters from extended character sets like Unicode.
                        Used when char is not enough to store a character.
                                */
        wchar_t wch = L'अ';  // L before the character makes it wide
        wcout << L"Wide Character: " << wch << endl;

        /*
                Use L before the character or string to indicate a wide literal (e.g., L'X' or L"Hello").
                Use wcout instead of cout for wide characters.  
                        */

        // These are fixed-width Unicode character types:
                        // char16_t → 2 bytes (UTF-16)
                        // char32_t → 4 bytes (UTF-32)


        char16_t c16 = u'ह';  // UTF-16 character literal
        char32_t c32 = U'ह';  // UTF-32 character literal

        cout << "UTF-16 and UTF-32 characters stored successfully." << endl;


        // Type Safety in C++
                        /* 
                        C++ is a strongly typed language. It means that all variables' data type should be specified 
                        at the declaration, and it does not change throughout the program. Moreover, we can only assign
                         the values that are of the same type as that of the variable.
                               */
        
                // Example: If we try to assign floating point value to a boolean variable, it may result in data corruption, 
                        // runtime errors, or undefined behaviour.
                
                // Assigning float value to isTrue
                        bool a = 10.248f;  
                        cout << a;

                        /*  As we see, the floating-point value is not stored in the bool variable a.
                                It just stores 1. This type checking is not only done for fundamental types, but for 
                                all data types to ensure valid operations and no data corruptions.
                                           */

        
                                           



        

        
}