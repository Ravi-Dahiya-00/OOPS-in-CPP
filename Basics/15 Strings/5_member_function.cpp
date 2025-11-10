#include <iostream>
#include <string>
#include <cstdio>  // for printf
using namespace std;

int main(){
    // 🟩 4️⃣ Modifiers
    /*
| Function                 | Description                  | Example                   |
| ------------------------ | ---------------------------- | ------------------------- |
| `assign(str)`            | Assign new content           | `s.assign("Hello");`      |
| `append(str)`            | Add to end                   | `s.append("World");`      |
| `push_back(ch)`          | Add one char to end          | `s.push_back('!');`       |
| `pop_back()`             | Remove last character        | `s.pop_back();`           |
| `insert(pos, str)`       | Insert string at position    | `s.insert(2, "hi");`      |
| `erase(pos, len)`        | Erase substring              | `s.erase(3, 2);`          |
| `replace(pos, len, str)` | Replace part with new string | `s.replace(0, 4, "Raj");` |
| `swap(str2)`             | Swap contents of two strings | `s1.swap(s2);`            |
    */

    // 🔹 1️⃣ assign(str) — Assign new content
    // Replaces the current content of the string with new content.
    string s;
    s.assign("Hello");
    cout << s << endl;  // Output: Hello

    s.assign(5, '*');   // fills with 5 '*'
    cout << s << endl;  // Output: *****



    // 🔹 2️⃣ append(str) — Add to the end of string
    string s1 = "Hello";
    s1.append(" World");
    cout << s1 << endl;  // Output: Hello World

    s1.append("!!", 2);  // append 2 chars
    cout << s1 << endl;  // Output: Hello World!!

    // 🧠 Use When: You want to concatenate without using + operator.



    // 🔹 3️⃣ push_back(ch) — Add one character at end
    string s2 = "Hello";
    s2.push_back('!');
    cout << s2 << endl;  // Output: Hello!

    // 🔹 4️⃣ pop_back() — Remove last character
    string s3 = "Coding!";
    s3.pop_back();
    cout << s3 << endl;  // Output: Coding

    // Using pop_back() on an empty string = undefined behavior.


    // 🔹 5️⃣ insert(pos, str) — Insert substring at position
    string s4 = "RaviYadav";
    s4.insert(4, " ");
    cout << s4 << endl;  // Output: Ravi Yadav

    s4.insert(0, "Mr. ");
    cout << s4 << endl;  // Output: Mr. Ravi Yadav


    // 🔹 6️⃣ erase(pos, len) — Erase substring
    /*
    Deletes len characters starting from index pos.
    If len is not provided, it erases till the end.*/

    string s5 = "HelloWorld";
    s5.erase(5, 4);   // erase 4 chars starting from index 5
    cout << s5 << endl;  // Output: Hello

    s5.erase();       // erase entire string
    cout << s5 << endl;  // Output: (empty)\


    // 🔹 7️⃣ replace(pos, len, str) — Replace substring
    // Replaces a portion of the string (from pos for len characters) with another string.
    string s6 = "I love C++";
    s6.replace(7, 3, "Python");
    cout << s6 << endl;  // Output: I love Python         


    // 🔹 8️⃣ swap(str2) — Swap contents of two strings
    string s11 = "Ravi";
    string s22 = "Yadav";
    cout << "Before Swap: " << s11 << " | " << s22 << endl;

    s11.swap(s22);

    cout << "After Swap: " << s11 << " | " << s22 << endl;



    // 🟩 5️⃣ String Operations
/*
| Function                     | Description                          | Example                    |
| ---------------------------- | ------------------------------------ | -------------------------- |
| `c_str()`                    | Returns C-style string (const char*) | `printf("%s", s.c_str());` |
| `data()`                     | Returns pointer to string data       | `s.data();`                |
| `substr(pos, len)`           | Returns substring                    | `s.substr(0, 4);`          |
| `copy(char* dest, len, pos)` | Copies substring to char array       | `s.copy(buf, 5, 0);`       |
| `compare(str2)`              | Compares two strings (0 if equal)    | `s.compare("Hello");`      |
*/


    /*
        Returns a C-style string (a null-terminated const char* pointer).
        Useful when you need to pass your std::string to C functions (like printf(), strcmp(), or other APIs expecting char*).
        It gives read-only access — you should not modify the data it points to.*/
    string z = "Ravi Yadav";
    printf("Using c_str(): %s\n", z.c_str()); // works with printf

    // c_str() always ensures the string is null-terminated, even if you modify it before calling.


    // 🔹 3️⃣ substr(pos, len)
    /*
    Returns a new string containing a substring of the current string.
    Starts at index pos and includes up to len characters.
    If len is omitted → takes all characters till the end.
        */

    string x = "RaviYadav";

    cout << "Original: " << x << endl;
    string first = x.substr(0, 4);  // "Ravi"
    string last = x.substr(4);      // "Yadav"


    cout << "First name: " << first << endl;
    cout << "Last name: " << last << endl;

    // substr() creates a new string — it does not modify the original.



    // 🔹 4️⃣ copy(char* dest, len, pos)
    /*
    Copies a substring from the string into a character array (char[]).
    It does not add a '\0' at the end automatically!
    You must manually add the null terminator.
       */

    string y = "RaviYadav";
    char buffer[10];

    size_t n = y.copy(buffer, 4, 0); // copy first 4 chars starting from pos 0
    buffer[n] = '\0';  // manually null-terminate

    cout << "Copied substring: " << buffer << endl;  // Output: Ravi


    // 🔹 5️⃣ compare(str2)
     string a = "apple";
    string b = "banana";

    int result = a.compare(b);

    if (result == 0)
        cout << "Strings are equal\n";
    else if (result < 0)
        cout << "a < b (apple < banana)\n";
    else
        cout << "a > b\n";


    
}