#include <iostream>
using namespace std;


int main()
{
    //cin in C++
        /*
           In C++, cin is an object of istream class that is used to accept the input from the standard input stream 
           i.e. stdin which is by default associated with keyboard. The extraction operator (>>) is used along with 
           cin to extract the data from the object and insert it to the given variable.

                        cin >> var_name;
                                >>: It is the extraction operator to extract data from cin.
                                var_name: It is a variable that will store the input data provided by the user.

                 */

                
        	// Variable to store data given by cin
            int a;

            cout << "enter a number : \n";
            // Take input using cin
            cin >> a;

            cout << a << endl;
            


            /*
            Note: cin is initialized when the program starts to make sure it is ready for input operations. It is also
                  linked to cout to ensure that any buffered output is flushed before cin reads from the input stream.
                   */

                


            // Variable to store data given by cin
             string s;


             cout << "enter a string : \n";
            // Take input using cin
             cin >> s;

            // Print output
             cout << s;




            //  Taking Multiple Inputs Using the Extraction Operator(>>) with cin


            string name;
            int age;

            // Take multiple input using cin
            cin >> name >> age;


            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;







            // cin Member Functions in C++

            /*
        Member Function	                                                   Description

        cin.get()	                                   Reads a single character from the input stream, including whitespace.
        cin.getline()                            	Reads a line of text, including whitespace, and stops when it reaches a newline character.
        cin.ignore()	                           Ignores a specified number of characters or until a specified delimiter is encountered.
        cin.peek()	                                     Returns the next character from the input stream without extracting it.
        cin.putback()	                                  Puts a character back into the input stream.
        cin.eof()	                                 Returns true if the end of the input stream has been reached.
        cin.fail()	                              Returns true if an input operation has failed (e.g., when input doesn't match the expected type).
        cin.clear()	                                 Clears the error flags on the input stream, allowing further operations.
        cin.sync()	                                    Discards unread characters from the input buffer.
        cin.gcount()                                	Returns the number of characters extracted by the last unformatted input operation.
        cin.rdbuf()	                                    Gets or sets the associated stream buffer object for std::cin.
                         */








}