#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    C++11 introduced enum class, which provides better type safety. It helps in resolving name conflicts 
    by providing scope to the constant names. It also requires manual typecasting to integer values from names.
        */

    // Define the enum class
enum class Day
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main(){

    // initializing
    Day today = Day::Thursday;

    // Print the enum
    cout << static_cast<int>(today);
    
    return 0;
}