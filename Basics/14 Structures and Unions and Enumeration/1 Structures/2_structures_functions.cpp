#include <iostream>
#include <string>
using namespace std;

struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;
};

// declare function with
// structure variable type as an argument
void display_data(const Person&);

int main() {
    // initialize the structure variable
    Person p {"John", "Doe", 22, 145000};

    // function call with 
    // structure variable as an argument
    display_data(p);

    return 0;
}

/*
👉 const ensures the function cannot modify p inside it.
👉 If you try to do p.age = 30; inside the function, the compiler will throw an error ❌.

✅ This is good practice when your function is only displaying or reading data, not modifying it.*/

void display_data(const Person& p) {
    cout << "First Name: " << p.first_name << endl;
    cout << "Last Name: " << p.last_name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}


/*
| Term              | Meaning                       | Effect                                             |
| ----------------- | ----------------------------- | -------------------------------------------------- |
| `Person p`        | Pass by value                 | Creates a copy of structure (slower, more memory). |
| `Person& p`       | Pass by reference             | No copy, direct access (can modify original).      |
| `const Person& p` | Pass by reference (read-only) | No copy, fast, and prevents modification. ✅       |

*/