#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;


    /*
| Variable | Stores          | Points to | Value |
| -------- | --------------- | --------- | ----- |
| n        | 10              | —         | 10    |
| ptr1     | address of n    | n         | &n    |
| ptr2     | address of ptr1 | ptr1      | &ptr1 |


| Expression | What it gives | Explanation                                                       |
| ---------- | ------------- | ----------------------------------------------------------------- |
| `n`        | 10            | actual value                                                      |
| `*ptr1`    | 10            | value at address stored in `ptr1`                                 |
| `**ptr2`   | 10            | value at address stored in pointer `ptr1`, which `ptr2` points to |

*/


    cout << "Value of n: " << n << endl;
    cout << "Address of n: " << &n << endl;

    cout << "ptr1 stores: " << ptr1 << endl;
    cout << "Value pointed by ptr1: " << *ptr1 << endl;

    cout << "ptr2 stores: " << ptr2 << endl;
    cout << "Value pointed by ptr2 (i.e., ptr1): " << *ptr2 << endl;
    cout << "Value pointed by *ptr2 (i.e., n): " << **ptr2 << endl;

}