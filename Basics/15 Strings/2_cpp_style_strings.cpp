#include <iostream>
#include <string>
using namespace std;

/*
A C++ string is an object of the std::string class defined in the <string> header.
It automatically handles:
Memory management       Length      Concatenation       Comparison      and many other operations  

No need for null terminators ('\0') or manual copying like C-style strings.*/

int main(){
    string s1 = "Ravi";
    string s2("Yadav");
    string s3;         // empty string
    s3 = "LPU";

    string s4={"Bhavya"};
    string s5 {"Vardhan"};

    cout << s1[0] << endl;
    cout << s1.at(0) << endl;          //it has bound checking if we try to get out of index it will give error

    cout << s1 << " " << s2 << " " << s3 << " " << s4 <<" " << " " << s5 << endl;


    string name;
    cout << "Enter name: ";
    cin >> name;     // reads until space
    cout << "Hello " << name << endl;

    // 🟠 If getline() follows a cin, clear buffer:
    cin.ignore();


    // 🔸 Using getline() for full line input
    string fullname;
    cout << "Enter full name: " << endl;
    getline(cin, fullname);
    cout << "Your name: " << fullname << endl;



    string str1={"Pardeep",3};                   //take first 3 characters
    cout << str1 << endl;  

    string str2={s2,3};          //print all the characters after 3rd index 
    cout << str2 << endl;

}

/*
| Operation| Example               | Explanation                                               |
| -------------------------------- | ------------------------- | ----------------------------- |
| `+`                              | `s3 = s1 + s2;`           | Concatenates strings          |
| `.append()`                      | `s1.append(s2);`          | Adds string at end            |
| `.length()` or `.size()`         | `s1.length();`            | Returns number of characters  |
| `.empty()`                       | `s1.empty();`             | Checks if string is empty     |
| `.clear()`                       | `s1.clear();`             | Deletes all characters        |
| `.at(i)` or `[i]`                | `s1.at(0);`               | Access character at index     |
| `.front()` / `.back()`           | `s.front()`               | First or last character       |
| `.push_back(ch)` / `.pop_back()` | `s.push_back('x');`       | Add or remove last char       |
| `.substr(pos, len)`              | `s.substr(0, 4);`         | Extract substring             |
| `.find("word")`                  | `s.find("Ravi");`         | Returns position or `npos`    |
| `.replace(pos, len, "new")`      | `s.replace(0, 4, "Raj");` | Replace part of string        |
| `.insert(pos, "text")`           | `s.insert(2, "hi");`      | Insert text                   |
| `.erase(pos, len)`               | `s.erase(2, 3);`          | Delete part of string         |
| `.compare(str2)`                 | `s1.compare(s2)`          | 0 if equal, +ve/-ve otherwise |
| `.swap(s2)`                      | `s1.swap(s2);`            | Swap contents                 |

*/