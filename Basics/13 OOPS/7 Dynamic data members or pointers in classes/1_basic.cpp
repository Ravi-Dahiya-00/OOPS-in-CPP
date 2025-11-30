#include <iostream>
using namespace std;

/* ===========================================================
   PART 1: STACK vs HEAP (Memory Basics)
   ===========================================================*/
void stackExample() {
    int x = 10;  // Stored on STACK (auto memory)
    cout << "Stack variable x = " << x << endl; 
}

void heapExample() {
    int* p = new int(20); // Stored on HEAP (dynamic memory)
    cout << "Heap variable *p = " << *p << endl;

    delete p;   // MUST be deleted
    p = NULL;   // Good practice
}


/* ===========================================================
   PART 2: POINTERS
   ===========================================================*/
void pointerExample() {
    int x = 50;
    int* p = &x;

    cout << "Value of x using pointer *p = " << *p << endl;
}


/* ===========================================================
   PART 3: new and delete (Single Variable)
   ===========================================================*/
void dynamicSingleVariable() {
    int* p = new int;  // allocate heap memory
    *p = 100;

    cout << "Dynamically allocated value = " << *p << endl;

    delete p;  // free memory
    p = NULL;
}


/* ===========================================================
   PART 4: new[] and delete[] (Dynamic Array)
   ===========================================================*/
void dynamicArray() {
    int n;
    cout << "\nEnter size of array: ";
    cin >> n;

    int* arr = new int[n];  // dynamic array

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;   // free memory
    arr = NULL;
}


/* ===========================================================
   PART 5: CLASS with DYNAMIC MEMORY
   ===========================================================*/
class Box {
public:
    int* ptr;

    // Constructor: allocate memory
    Box(int value) {
        cout << "\n[Constructor] Allocating memory..." << endl;
        ptr = new int(value);
    }

    // Destructor: free memory
    ~Box() {
        cout << "[Destructor] Freeing memory for value " << *ptr << endl;
        delete ptr;
    }

    void show() {
        cout << "Box contains: " << *ptr << endl;
    }
};


/* ===========================================================
   MAIN FUNCTION
   ===========================================================*/
int main() {

    cout << "===== STACK EXAMPLE =====" << endl;
    stackExample();

    cout << "\n===== HEAP EXAMPLE =====" << endl;
    heapExample();

    cout << "\n===== POINTER EXAMPLE =====" << endl;
    pointerExample();

    cout << "\n===== DYNAMIC SINGLE VARIABLE =====" << endl;
    dynamicSingleVariable();

    cout << "\n===== DYNAMIC ARRAY =====" << endl;
    dynamicArray();

    cout << "\n===== CLASS WITH DYNAMIC MEMORY =====" << endl;
    {
        Box b1(999); 
        b1.show();
    }   // Destructor will automatically run here

    cout << "\nEnd of Program." << endl;

    return 0;
}
