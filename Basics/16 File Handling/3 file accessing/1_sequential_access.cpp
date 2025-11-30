#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // -------------------------------
    // STEP 1: TAKE INPUT FROM USER
    // -------------------------------
    cout << "Enter a sentence: ";
    string text;
    getline(cin, text);

    // -------------------------------
    // STEP 2: WRITE TO FILE (Sequential)
    // -------------------------------
    ofstream fout("data.txt");  // opens file in write mode

    if (!fout) {
        cout << "Cannot open file for writing";
        return 0;
    }

    fout << text;               // sequentially writes characters
    fout.close();               // close file

    // -------------------------------
    // STEP 3: READ FILE SEQUENTIALLY
    // -------------------------------
    ifstream fin("data.txt");   // open file in read mode

    if (!fin) {
        cout << "Cannot open file for reading";
        return 0;
    }

    cout << "\nSequential File Reading:\n";

    string line;
    
    // Reads one line at a time, from top to bottom
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();    // close file

    return 0;
}
