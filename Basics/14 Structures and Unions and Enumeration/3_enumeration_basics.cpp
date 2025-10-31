#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// In C++, enumeration is a user-defined data type that consists of a set of named integer constants.

/*
    It helps in assigning meaningful names to integer values to improve code readability and maintainability.
    It is mainly useful when we have a small set of possible values for an item like directions, days of week, etc.


    When you create an enumerated type, only a blueprint for the variable is created.

    We can manually assign values to enum members if needed.
                enum enum_name { 
                    name1 = val1, name2 = val2, name3, ... 
                };
        */

// Defining enum
enum direction
{
    EAST,
    NORTH,
    WEST,
    SOUTH
};


// Defining enum
enum fruit
{
    APPLE,
    BANANA = 5,
    ORANGE
};


/*
An enum variable takes only one value out of many possible values. Let us look at an example.

        It's because the size of an integer is 4 bytes. This makes enum a good choice to work with flags.
        */
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

//  use enums for flags?
// Suppose you are designing a button for a Windows application. You can set flags ITALICS, BOLD and UNDERLINE to work with text.
enum designFlags {
	ITALICS = 1,
	BOLD = 2,
	UNDERLINE = 4
} button;

int main(){
    
        // Creating enum variable
         direction dir = NORTH;
         cout << dir << endl;



    // Creating enum variable
    fruit f = BANANA;
    cout << f << endl;

    // Changing the value
    f = ORANGE;
    cout << f << endl;


    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes." << endl;


    suit s = hearts;
    cout << s << endl;


    return 0;
}