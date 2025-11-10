#include <iostream>
#include <string>
using namespace std;

int main(){


// 🟩 1️⃣ Constructors and Assignment
// 
 /*
| Function                    | Description                          | Example                      |
| --------------------------- | ------------------------------------ | ---------------------------- |
| `string()`                  | Creates an empty string              | `string s;`                  |
| `string(const char* s)`     | Initialize from C-style string       | `string s("Ravi");`          |
| `string(size_t n, char c)`  | Create string with `n` copies of `c` | `string s(5, '*'); // *****` |
| `string(const string& str)` | Copy constructor                     | `string s2(s1);`             |
| `operator=`                 | Assign one string to another         | `s1 = "Hello";`              |

*/

    // 1️⃣ string() — Creates an empty string
    string s1;   // default constructor  -> Calls the default constructor, creates an empty string ("").
    cout << "1. Empty string (string()): \"" << s1 << "\"\n";


    // 2️⃣ string(const char* s) — Initialize from C-style string
    const char* name = "Ravi";                  // ->Calls the C-string constructor, copies characters from "Ravi" into the string.
    string s2(name);  // construct from C-string
    cout << "2. From C-style string (string(const char*)): " << s2 << endl;

    // 3️⃣ string(size_t n, char c) — Create string with n copies of c
    string s3(5, '*');  // *****                  //-> Calls the fill constructor, creates "*****".
    cout << "3. Fill constructor (string(size_t, char)): " << s3 << endl;

    // 4️⃣ string(const string& str) — Copy constructor
    string s4(s2);  // copy from s2     ->Calls the copy constructor, duplicates the content of s2 into s4.
    cout << "4. Copy constructor (string(const string&)): " << s4 << endl;


    // 5️⃣ operator= — Assign one string to another
    string s5;
    s5 = "Hello";   // assignment from C-string           Uses the assignment operator, assigning new content (from a C-string) to s5.
    cout << "5. Assignment operator (=): " << s5 << endl;

    // To show also assigning one string to another
    s1 = s2;  // s1 = "Ravi"                      -> Assigns one string object to another. Performs deep copy.
    cout << "   After assigning s2 to s1: " << s1 << endl;








// 🟩 2️⃣ Capacity Functions
/*
| Function              | Description                                 | Example                 |
| --------------------- | ------------------------------------------- | ----------------------- |
| `size()` / `length()` | Returns number of characters                | `s.length();`           |
| `max_size()`          | Returns max possible characters             | `cout << s.max_size();` |
| `resize(n)`           | Changes size to `n`                         | `s.resize(5);`          |
| `capacity()`          | Returns allocated memory size               | `cout << s.capacity();` |
| `reserve(n)`          | Pre-allocates memory for at least `n` chars | `s.reserve(100);`       |
| `clear()`             | Erases entire string                        | `s.clear();`            |
| `empty()`             | Returns `true` if string is empty           | `if(s.empty())`         |
*/



    // Create a string
    string s = "RaviYadav";

    // 1️⃣ size() / length() — Returns number of characters
    cout << "1. size() / length() :\n";
    cout << "   String: " << s << endl;
    cout << "   s.size() = " << s.size() << endl;
    cout << "   s.length() = " << s.length() << endl;


    // 2️⃣ max_size() — Maximum characters string can hold
    cout << "2. max_size() :\n";
    cout << "   s.max_size() = " << s.max_size() << endl;


    // 3️⃣ resize(n) — Changes the size of the string
    cout << "3. resize(n) :\n";
    cout << "   Before resize: " << s << " (size = " << s.size() << ")\n";  
    s.resize(4);  // Keep first 4 chars
    cout << "   After resize(4): " << s << " (size = " << s.size() << ")\n"; 


    s.resize(8, '*');  // If new size > old, fills with '*'
    cout << "   After resize(8, '*'): " << s << " (size = " << s.size() << ")\n";

    // 4️⃣ capacity() — Returns allocated memory (may be > size)
    cout << "4. capacity() :\n";
    cout << "   s.capacity() = " << s.capacity() << endl;


    // 6️⃣ clear() — Erases the entire string
    cout << "6. clear() :\n";
    s.clear();
    cout << "   After clear(), s = \"" << s << "\"\n";
    cout << "   s.size() = " << s.size() << endl;

     // 7️⃣ empty() — Checks if string is empty
    cout << "7. empty() :\n";
    if (s.empty())
        cout << "   String is empty ✅\n";
    else
        cout << "   String is not empty ❌\n";


    // 🟩 3️⃣ Element Access Functions
/*
| Function     | Description                                            | Example     |
| ------------ | ------------------------------------------------------ | ----------- |
| `operator[]` | Access character at index                              | `s[0]`      |
| `at(pos)`    | Access with bounds check (throws exception if invalid) | `s.at(1)`   |
| `front()`    | First character                                        | `s.front()` |
| `back()`     | Last character                                         | `s.back()`  |
*/

    // 🔹 1️⃣ operator[]
    string s12 = "Ravi";

    cout << "Character at index 0: " << s12[0] << endl; // 'R'
    cout << "Character at index 3: " << s12[3] << endl; // 'i'

    // You can modify characters too:
    s12[0] = 'P';
    cout << "After modification: " << s12 << endl;

    // ⚠️ No bounds check
    // cout << s12[10]; // ❌ Undefined behavior (index out of range)

    /*
    Accesses the character at the given index (0-based).
     No bounds checking — if you access an invalid index, it leads to undefined behavior (program may crash or show garbage).
        
        operator[] is faster (no extra checks), but unsafe if index may be invalid.
                */


    // 🔹 2️⃣ at(pos)
    /*
    Similar to operator[], but with bounds checking.
       If pos is invalid (≥ size of string), it throws std::out_of_range exception.    
    */

        string s22 = "Yadav";

    cout << "Character at index 1: " << s22.at(1) << endl; // 'a'

    s22.at(0) = 'R';  // Modify character safely
    cout << "After modification: " << s22 << endl;

    // Try invalid access
    try {
        cout << s22.at(10); // throws out_of_range exception
    } catch (out_of_range &e) {
        cout << "Exception caught: " << e.what() << endl;
    }


    // 🔹 3️⃣ front()
    /*
    Returns a reference to the first character of the string.
    Equivalent to s[0].
    Throws undefined behavior if string is empty.
    
    front() is a cleaner and expressive way to access or modify the first character — often used in loops or string-processing algorithms.*/

    cout << "First character: " << s12.front() << endl;

    s12.front() = 'P';  // Modify first character
    cout << "After modification: " << s12 << endl;


    // 🔹 4️⃣ back()
    /*
    Returns a reference to the last character of the string.
    Equivalent to s[s.size() - 1].
    Also allows modification.
    Throws undefined behavior if string is empty.*/

    cout << "Last character: " << s12.back() << endl;

    s12.back() = 'R';   // Modify last character
    cout << "After modification: " << s12 << endl;


}
