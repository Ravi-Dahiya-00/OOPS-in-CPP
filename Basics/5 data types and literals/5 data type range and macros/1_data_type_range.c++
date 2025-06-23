#include <iostream>
using namespace std;

#include <climits>         // for int, char macros
#include <cfloat>          // for float, double macros





        /*
        The <climits> header file in C++ defines macros that represent the upper and lower bounds of integer data types
         and <cfloat> defines the macros for float and double limits. These macros allow you to easily assign these 
         extreme values to variables without manually typing them out.
            */


#include <limits>


int main()
{

                // Displaying ranges with the help of macros

                cout << " Char ranges from: " << CHAR_MIN << " to " << CHAR_MAX << endl;

                cout << "\n short int ranges from: " << SHRT_MIN << " to " << SHRT_MAX << endl;

                cout << "\n int ranges from: " << INT_MIN << " to "  << INT_MAX << endl;

                cout << "\n long int ranges from: " << LONG_MIN << " to " << LONG_MAX << endl;

                cout << "\n float ranges from: " << FLT_MIN << " to " << FLT_MAX << endl;








                cout << "\n \n Data Type Limits in Modern C++ : " << endl;

                    // Data Type Limits in Modern C++
                        /*
                            The above macro approach for the upper and lower limits of the data type is the old C language
                             approach inherited by C++. But C++ also have its own method to provide programmers with the same information.
                                */

                        /*
                        C++ offers the numeric_limits<> class template as a modern alternative to these macros. This template
                         provides a more object-oriented approach for accessing data type limits. It is defined inside the 
                         <limits> header file.
                                */


                    // Displaying ranges with the help of macros

    cout << "\n Short Int ranges from: " << numeric_limits<short int>::min() << " to " << numeric_limits<short int >::max() << endl;

    cout << "\n Int ranges from: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

    cout << "\n Long Int ranges from: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;

    cout << "\n Float ranges from: "  << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;

}