#include <iostream>
using namespace std;

int main()
{
        //Basic Input / Output in C++
            /*
              In C++, input and output are performed in the form of a sequence of bytes or more commonly known as streams.

               Input Stream: If the direction of flow of bytes is from the device (for example, Keyboard) to the main
                memory then this process is called input.

                Output Stream: If the direction of flow of bytes is opposite, i.e. from main memory to device (display screen)
                   then this process is called output.



                   All of these streams are defined inside the <iostream> header file which contains all the standard 
                   input and output tools of C++. The two instances cout and cin of iostream class are used very often for 
                   printing outputs and taking inputs respectively. These two are the most basic methods of taking input 
                   and printing output in C++.


            */




        // Standard Output Stream - cout
            /*
            The C++ cout is the instance of the ostream class used to produce output on the standard output device which 
            is usually the display screen. The data needed to be displayed on the screen is inserted in the standard output
             stream (cout) using the insertion operator(<<).

                        cout << value/variable;
            */

                  	// Printing the given text using cout
                    cout << "Ravi Yadav" << endl;

                    int a = 22;
  
                    // Printing variable 'a' using cout
                    cout << a << endl;


            


        // Standard Input Stream - cin
             /*
                The C++ cin statement is the instance of the class istream and is used to read input from the standard 
                input device which is usually a keyboard. The extraction operator (>>) is used along with the object cin
                 for extracting the data from the input stream and store it in some variable in the program.
                */


                int age;

                // Taking input from user and store
  	            // it in variable
                cin >> age;

                // Output the entered age
                cout << "entered age : " << age << endl;


    /*
     The type of input provided should be same as that of the variable being used to store it. Otherwise, it may lead 
     to undefined error or input failure.


        Also, while taking text as input using cin, we need to remember that cin stops reading input as soon as it encounters
         a whitespace (space, tab, or newline). This means it only captures the first word or 
         characters until the first whitespace.
          */

          string name;


          // Taking input from user and store
  	      // it in variable

          cin >> name;

            // Output the entered age
            cout << "Name Entered : " << name << endl;






        // Un-buffered Standard Error Stream - cerr
            /*
              The C++ cerr is the standard error stream that is used to output the errors. This is also an instance
               of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error 
               message immediately. It does not have any buffer to store the error message and display it later.
                    */


                  

                cerr << "An error occurred" << endl;




        // Buffered Standard Error Stream - clog
            /*
              This is also an instance of ostream class and used to display errors but unlike cerr the error 
              is first inserted into a buffer and is stored in the buffer until it is not fully filled. or the
               buffer is not explicitly flushed (using flush()). The error message will be displayed on the screen too.
                  */


                clog << "An error occurred";




                  
                  
                  
                  
                  

                  
                  

                  
                  

                   



}