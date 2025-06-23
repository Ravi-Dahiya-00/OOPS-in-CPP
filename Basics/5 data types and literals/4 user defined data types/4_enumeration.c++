#include <iostream>
using namespace std;

        // 4. Enumeration
            /*
                Enumeration (or enum) is a user-defined data type in C++ mainly used to assign names to
                integral constants, the names make a program easy to read and maintain.
                */
        
        // Declaring enum
        enum Week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };


        


int main()
{
    	// Creating enum variable
        enum Week day;

        	// Assigning value to the variable
             day = Wed;           

             cout << day << endl;  




             /*
             Enum values are stored as integers.
            You can’t directly print the name (like "Wed") — it prints the int value.
            You can use arrays or switch-case to map names to values.
                */
} 