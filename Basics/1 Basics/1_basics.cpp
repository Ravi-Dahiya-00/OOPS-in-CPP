// Standard IO header is iostream and uses cin and cout are used for input/output in C++.
// File extension is ".cpp" or ".c++" or ".cc" or ".cxx"



// Necessary header files for input output functions

#include <iostream>

// Preprocessor Directives:
        /*The #include is a preprocessor directive that tells the compiler to include the content of a file in the source code. 
        For example, #include<iostream> tells the compiler to include the input-output library which contains all C++'s input/output
         library functions.
           */



// Header Files : 
        /*In C++ language header file is a file that contains features like functions, data types, macros, etc that can be used by
         any other C program by including that particular header file using “#include” preprocessor. Header files generally ends with the .h
          extension although in modern C++ many header files do not have the .h extension
            */
// header file without .h extension
#include <iostream> 
// header file with .h extension
#include<string.h>



using namespace std;       // Allows using cout instead of std::cout
// A namespace groups related code to avoid name conflicts; 'std' holds C++ built-in features like cout, cin, etc.


// main() function: where the execution of C++ program begins

    /*
    The main() function is the entry point of every C++ program when the program is executed the code written in the main functions
    is executed first. The opening braces '{' indicates the beginning of the main function and the closing braces '}' indicates 
    the ending of the main function.
    */

int main()
{
    // This statement prints "Hello World"
    cout<<"Hello World\n";

    cout << "Learning C++ at GeekforGeeks" << endl;
    // cout: Stands for "character output", and is used to print output to the console. It comes from the std namespace.
    // endl: Stands for "end line", which moves the cursor to the next line, just like \n.
    // <<  : This is the insertion operator, which sends data to the output stream (in this case, to cout).




    // std: Refers to the standard namespace where built-in C++ features like cout, cin, endl are defined.
    // Prints "hello guys" using standard namespace without 'using namespace std'
    std::cout<< "hello guys";
    
    /*
    The cout is a output statement in C++ that is used to display output on the console screen. 
    Everything followed by the character << in double quotes " " is displayed on the output screen. 
    The semi-colon character at the end of the statement is used to indicate that the statement is ending there.
        */

    return 0;

    /*
        The return statement is used to return a value from a function and indicates the finishing of a function.
        Here, it is used to sent the signal of successful execution of the main function.
            */
}




// comments : 
        // Comments explain code; skipped by compiler, not part of execution.

                //  This is a single line comment

                /* This is a multi-line comment
                which can span multiple lines */











/*
Features of C++ :
    1.Simple
    2.Machine Independent
    3.Low-level Access
    4.Fast Execution Speed
    5.Object-Oriented
    6.Dynamic Memory Allocation
    7.Multi-threading
    8.Memory Management







** C++ is used in a wide range of applications from game engines and application software to operating systems and embedded systems.

** It supports both low-level and high-level features such as manual memory management and OOPs programming respectively.

** C++ is known as hybrid language because C++ supports both procedural and object-oriented programming paradigms.


✅ Procedural Programming Language:
        A procedural programming language is a type of programming language where the code is organized into procedures or functions.
           These procedures contain a sequence of instructions that the computer follows step by step.

        example: c,go,pascal,basic,FORTRAN

            ✅ Advantages:
                Simple and easy to understand.

                Good for small to medium-sized programs.

                Reusable code using functions.

            ❌ Disadvantages:
                Harder to manage in large, complex systems.

                Not good at modeling real-world entities (unlike OOP).

                Poor data security due to global variables.







✅ Object-Oriented Programming (OOP) Language :
        An Object-Oriented Programming (OOP) language is a type of programming language that organizes code using objects,
         which are instances of classes. It focuses on real-world modeling, combining data (attributes) and functions (methods) 
         that operate on that data into a single unit — the object.

         example:c++,java,python,c#,Ruby

         Think of a class as a blueprint (like a car design), and an object as the actual car built using that blueprint.





            ✅ Advantages:
                Better code organization

                Reusability through inheritance

                Data security via encapsulation

                Easier to manage large projects

            ❌ Disadvantages:
                Can be more complex to learn initially

                Overhead in performance compared to procedural in some cases


                

*/