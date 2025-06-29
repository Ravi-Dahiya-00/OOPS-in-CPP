#include <iostream>
using namespace std;

int main()
{
        // cout in C++
            /*
            In C++, cout is an object of the ostream class that is used to display output to the standard output device,
             usually the monitor. It is associated with the standard C output stream stdout. The insertion operator (<<) 
             is used with cout to insert data into the output stream.

                        cout << var_name;
                                <<: It is the insertion operator used to insert data into cout.
                                var_name: It represents the variable or literal whose value you want to display.
                 */


        	// Print standard output
            // on the screen
            cout << "Welcome to GFG";


                int n = 42;
                string s = "The answer is ";

                // Printing both n and s
                cout << s << n;



                    // cout Member Functions in C++

                      /*
                        Member Function	                                                        Description
                    cout.put(char)	                                                  Writes a single character to the output stream.
                    cout.write(char*, int)	                                   Writes a block of characters from the array to the output stream.
                    cout.precision(int)	                                       Sets the decimal precision for displaying floating-point numbers.
                    cout.setf(ios::fmtflags)                                    	Sets the format flags for the stream.
                    cout.width(int)                                          	Sets the minimum field width for the next output.
                    cout.fill(char)	                                             Sets the fill character for padding the field.
                                               */






}