#include <iostream>
using namespace std;

        // switch Statement in C
            /*
                The switch case statement is an alternative to the if else if ladder that can be used to execute the conditional
                 code based on the value of the variable specified in the switch statement. The switch block consists of cases
                  to be executed based on the value of the switch variable.
                        */
int main()
{
       // variable to be used in switch statement
        int var;
        cin >> var;

    
        // declaring switch cases
        switch (var)
        {
            case 1:
                cout << "You are a kid\n";
                break;
            case 2:
                cout << "Eligible for vote\n";
                break;
            case 3:
                cout << "Not a valid age\n";
                break;
            default :
                cout << "Default case is executed\n";
                break;

        }
        



        //Note: The switch expression should evaluate to either integer or character. It cannot evaluate any other data type.




        // Day number
    int day = 2;
    
  	// Switch statement to print the name of the day
  	// on the basis of day number
    switch (day) {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid Input\n";
        break;
    }
   


       // switch case without break
    switch (var) {
    case 1:
        cout << "Case 1 is executed.\n";
    case 2:
        cout << "Case 2 is executed.\n";
    case 3:
        cout << "Case 3 is executed.\n";
    case 4:
        cout << "Case 4 is executed.\n";
    }


        // Nested switch Statement
            /*
               Nesting of switch statements is allowed, which means you can have switch statements
                inside another switch. However nested switch statements should be avoided as it makes
                 the program more complex and less readable.
                */

        int outerChoice = 1;
        int innerChoice = 2;

    // Outer switch to choose the category
    switch(outerChoice) {
        case 1:
            cout << "Category 1 selected\n";

            // Inner switch to choose the option under category 1
            switch(innerChoice) {
                case 1:
                    cout << "Option 1 selected under Category 1\n";
                    break;
                case 2:
                    cout << "Option 2 selected under Category 1\n";
                    break;
                default:
                    cout << "Invalid option under Category 1\n";
            }
            break;

        case 2:
            cout << "Category 2 selected\n";

            // Inner switch to choose the option under category 2
            switch(innerChoice) {
                case 1:
                    cout << "Option 1 selected under Category 2\n";
                    break;
                case 2:
                    cout << "Option 2 selected under Category 2\n";
                    break;
                default:
                    cout << "Invalid option under Category 2\n";
            }
            break;

        default:
            cout << "Invalid category\n";
    }

}