#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // --------------------------
    // 1. Writing to a text file
    // --------------------------
    ofstream fout("sample.txt", ios::out);  // write mode (creates + overwrites)
    if (!fout) {
        cout << "Cannot open file for writing.\n";
        return 0;
    }

    fout << "Hello Ravi!" << endl;
    fout << "This is a C++ file handling test." << endl;
    fout.close();


    // -------------------------------------
    // 2. Appending more data to same file
    // -------------------------------------
    ofstream fout2("sample.txt", ios::app); // append mode
    if (!fout2) {
        cout << "Cannot open file for appending.\n";
        return 0;
    }

    fout2 << "This line is appended later." << endl;
    fout2.close();


    // -------------------------------------
    // 3. Reading from the text file
    // -------------------------------------
    ifstream fin("sample.txt", ios::in);
    if (!fin) {
        cout << "Cannot open file for reading.\n";
        return 0;
    }

    cout << "\n--- Reading sample.txt ---\n";
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();


    // -------------------------------------------------------------
    // 4. Writing a number in a binary file (temperature example)
    // -------------------------------------------------------------
    double morning = 20.5, afternoon = 30.0, evening = 25.5;
    double avg = (morning + afternoon + evening) / 3;

    fstream binWrite("temp.dat", ios::out | ios::binary);
    if (!binWrite) {
        cout << "Cannot open binary file for writing.\n";
        return 0;
    }

    binWrite.write((char*)&avg, sizeof(avg));   // write binary
    binWrite.close();


    // -------------------------------------------------------------
    // 5. Reading the binary file
    // -------------------------------------------------------------
    fstream binRead("temp.dat", ios::in | ios::binary);
    if (!binRead) {
        cout << "Cannot open binary file for reading.\n";
        return 0;
    }

    double readAvg;
    binRead.read((char*)&readAvg, sizeof(readAvg));  // read binary
    binRead.close();

    cout << "\nAverage temperature stored in binary: " << readAvg << endl;


    // -------------------------------------------------------------
    // 6. Using fstream for both read and write (append + read back)
    // -------------------------------------------------------------
    fstream file("combined.txt", ios::out | ios::in | ios::app);
    if (!file) {
        cout << "Cannot open combined.txt\n";
        return 0;
    }

    file << "Ravi was here!" << endl;
    file << "This file was opened using fstream with multiple modes." << endl;

    file.close();

    // Read back the file
    ifstream combined("combined.txt");
    cout << "\n--- Contents of combined.txt ---\n";
    while (getline(combined, line)) {
        cout << line << endl;
    }
    combined.close();

    cout << "\nAll operations completed successfully.\n";
    return 0;
}
