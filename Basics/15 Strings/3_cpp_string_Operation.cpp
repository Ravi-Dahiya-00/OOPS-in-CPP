#include <iostream>
#include <string>
using namespace std;

int main(){

    // ✅ Concatenation
    string a = "Hello";
    string b = "World";
    string c = a + " " + b;
    cout << c << endl;  // Hello World


    // ✅ Append
    string s = "Good";
    s.append(" Morning");
    cout << s << endl;  // Good Morning


    // ✅ Length / Size
    string s1 = "Ravi";
    cout << s1.length() << endl;  // 4


    // ✅ Access and Modify Characters
    string s2 = "Ravi";
    s2[0] = 'P';
    cout << s2 << endl;  // Pavi


    // ✅ Substring
    string text = "HelloWorld";
    cout << text.substr(0, 5) << endl;  // Hello


    // ✅ Find and Replace
    string str = "I love C++";
    int pos = str.find("C++");
    str.replace(pos, 3, "Python");     // 3 replace first 3 c++ with python
    cout << str << endl;  // I love Python

    // ✅ Insert and Erase
    string s3 = "RaviYadav";
    s3.insert(4, " ");
    s3.erase(0, 2);
    cout << s3 << endl;  // vi Yadav


    // 🟩 5️⃣ Compare Strings
    string s11 = "apple";
    string s22 = "banana";

    if (s11 == s22)
        cout << "Equal" << endl;
    else if (s11 > s22)
        cout << "s1 is greater" << endl;
    else
        cout << "s2 is greater" << endl;

    cout << s11.compare(s22) << endl; // returns 0 if equal else -1


    // 🟩 6️⃣ Iterate Through a String
    for (int i = 0; i < s11.length(); i++)
    cout << s11[i] << " ";

    cout << endl;
    // Using Range-based Loop
    for (char ch : s11)
    cout << ch << " ";

    cout << endl;








}