#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // -----------------------------------------
    // STEP 1: Write array to binary file
    // -----------------------------------------
    int arr[5] = {10, 20, 30, 40, 50};

    ofstream fout("numbers.dat", ios::binary);
    fout.write((char*)arr, sizeof(arr));
    fout.close();

    cout << "File 'numbers.dat' created with 5 integers.\n";


    // -----------------------------------------
    // STEP 2: Access a specific record randomly
    // -----------------------------------------
    int index;
    cout << "Enter index (0 to 4) to read: ";
    cin >> index;

    if (index < 0 || index > 4) {
        cout << "Invalid index!" << endl;
        return 0;
    }

    ifstream fin("numbers.dat", ios::binary);

    // Jump directly to the index
    fin.seekg(index * sizeof(int));

    int value;
    fin.read((char*)&value, sizeof(int));

    cout << "Value at index " << index << " = " << value << endl;

    fin.close();

    return 0;
}
