#include <iostream>
#include <cstring>    //Common C-string Functions

using namespace std;

// A C-style string is simply a character array that ends with a null character ('\0').
int main(){

    // ✅ Method 1: Using double quotes
    char name[] = "Ravi";

    // ✅ Method 2: Using character array manually
    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // 🟠 If you forget '\0', it’s not a valid string — functions like cout, strlen(), etc. will read garbage beyond your array
    
    char inputstring[20];
    cout << "Enter string : " ;
    cin >> inputstring;

    cout << "Your entered string is : " << inputstring << endl;
    // cin stops reading when it encounters a space.


    cin.ignore();

    // ➤ To take full line (including spaces)
    char fullstring[50];
    cout << "Enter full name: ";
    cin.getline(fullstring,50);

    cout << "Your full name : " << fullstring << endl;


    char s[] = "Hello";
    cout << strlen(s) << endl;  // Output: 5



    char f_name[20];
    char l_name[20];
    cout << "Enter first name : " ;
    cin>>f_name;
    cout << "Enter last name : " ;
    cin>>l_name;

    char full_name[50];
    strcpy(full_name,f_name);
    strcat(full_name," ");
    strcat(full_name,l_name);


    cout << "Full Name after concatenation : " << full_name <<endl;


     char a[] = "apple";
    char b[] = "banana";

    int result = strcmp(a, b);

    if (result == 0)
        cout << "Equal";
    else if (result < 0)
        cout << "a < b" << endl;
    else
        cout << "a > b" << endl;


    char text[] = "I love C++ programming";

    cout << strchr(text, 'C') << endl;   // prints from 'C' → "C++ programming"
    cout << strstr(text, "C++") << endl; // prints from "C++ programming"   if this substring is found then it starts printing from here



    char text1[] = "Ravi Yadav Student";
    char *token = strtok(text1, " ");
    while (token != NULL) {
        cout << token << endl;
        token = strtok(NULL, " ");
    }

    // 🔸 C-style strings are not objects, so you can’t use:
}

/*| Function                | Description                       | Example              |
| ----------------------- | --------------------------------- | -------------------- |
| `strlen(s)`             | Returns length (excluding `'\0'`) | `strlen("Ravi") → 4` |
| `strcpy(dest, src)`     | Copies `src` to `dest`            | `strcpy(b, a)`       |
| `strncpy(dest, src, n)` | Copies first `n` chars            |                      |
| `strcat(dest, src)`     | Appends `src` to end of `dest`    | `strcat(a, b)`       |
| `strcmp(s1, s2)`        | Compares two strings              | returns `0` if equal |
| `strchr(s, ch)`         | Finds first occurrence of a char  |                      |
| `strstr(s, sub)`        | Finds substring in string         |                      |
*/




/*
| Feature                    | C-style String           | `std::string`                             |
| -------------------------- | ------------------------ | ----------------------------------------- |
| Header                     | `<cstring>`              | `<string>`                                |
| Type                       | `char[]` or `char*`      | `string` class                            |
| Null terminator            | Required (`'\0'`)        | Handled automatically                     |
| Memory                     | Manual                   | Automatic                                 |
| Operators (`+`, `=`, `==`) | Not supported            | Supported                                 |
| Functions                  | `strlen`, `strcpy`, etc. | `.length()`, `.append()`, `.find()`, etc. |
*/


/*
isalpha(ch)          	Checks if alphabet	                                isalpha('A') → true
isdigit(ch)	            Checks if digit	                                    isdigit('9') → true
isalnum(ch)         	Checks if alphanumeric                            	isalnum('A') → true
isspace(ch)          	Checks if space/tab/newline                      	isspace(' ') → true
islower(ch)          	Checks if lowercase                             	islower('a') → true
isupper(ch)         	Checks if uppercase                             	isupper('A') → true
tolower(ch)	            Converts to lowercase                            	tolower('A') → 'a'
toupper(ch)         	Converts to uppercase                              	toupper('b') → 'B'
ispunct(ch)         	Checks punctuation                              	ispunct('!') → true
iscntrl(ch)         	Checks control char                             	iscntrl('\n') → true

*/