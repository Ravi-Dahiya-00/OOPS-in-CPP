#include <iostream>
#include <fstream>   // Required for file handling
#include <string>
using namespace std;

int main() {

    // -----------------------------------------------
    // PART 1 : WRITING TO A FILE
    // -----------------------------------------------

    // ofstream = output file stream (used for writing)
    ofstream writeFile;

    // Opening a file named "data.txt"
    // ios::out means open file for writing
    writeFile.open("data.txt", ios::out);

    // Check if file opened successfully
    if (!writeFile) {
        cout << "Error opening file for writing!" << endl;
        return 0;
    }

    // Writing data into the file
    writeFile << "Ravi is learning File Handling." << endl;
    writeFile << "This is the first line written to the file." << endl;
    writeFile << "C++ makes file handling easy!" << endl;

    // Close the file after writing
    writeFile.close();
    cout << "Data written successfully.\n\n";



    // -----------------------------------------------
    // PART 2 : APPENDING NEW DATA TO SAME FILE
    // -----------------------------------------------

    // ios::app = append mode (adds data at the end)
    ofstream appendFile("data.txt", ios::app);
    
    if (!appendFile) {
        cout << "Error opening file for appending!" << endl;
        return 0;
    }

    appendFile << "This line is appended to the file." << endl;

    appendFile.close();
    cout << "Data appended successfully.\n\n";



    // -----------------------------------------------
    // PART 3 : READING FROM A FILE
    // -----------------------------------------------

    // ifstream = input file stream (used for reading)
    ifstream readFile("data.txt");

    if (!readFile) {
        cout << "Error opening file for reading!" << endl;
        return 0;
    }

    cout << "Reading file content:\n";

    string line;

    // getline() reads one full line at a time
    while (getline(readFile, line)) {
        cout << line << endl;   // printing each line
    }

    // Close reading file
    readFile.close();

    return 0;
}
