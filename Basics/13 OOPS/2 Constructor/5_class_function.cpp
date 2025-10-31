#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n = "Unknown", int a = 0) {
        name = n;
        age = a;
    }

    // ✅ Declare getter here
    string getName();

    // 1️⃣ Member Function (Inside Class)
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // 2️⃣ Function that takes object by VALUE
    void showByValue(Student s) {
        cout << "[Pass by Value] Name: " << s.name << ", Age: " << s.age << endl;
    }

    // 3️⃣ Function that takes object by REFERENCE
    void showByReference(Student &s) {
        s.name="Ram";
        cout << "[Pass by Reference] Name: " << s.name << ", Age: " << s.age << endl;
    }

    // 4️⃣ Function that takes object by POINTER
    void showByPointer(Student *s) {
        cout << "[Pass by Pointer] Name: " << s->name << ", Age: " << s->age << endl;
    }
};

// ✅ Define getter outside class
string Student::getName() {
    return name;
}

// 🔹 Outside Function that accepts object by VALUE
void printByValue(Student s) {
    cout << "[Outside Function - Value] Name: " << s.getName() << endl;
}

int main() {
    Student s1("Ravi", 19);
    Student s2("Yadav", 20);

    cout << "=== 1. Member Function ===" << endl;
    s1.display(); // Member function call

    cout << "\n=== 2. Pass by Value ===" << endl;
    s1.showByValue(s2); // Copy of s2 passed

    cout << "\n=== 3. Pass by Reference ===" << endl;
    s1.showByReference(s2); // Reference of s2 passed

    // s2 was passed by reference so value of s2 has been changed
    s2.display(); // Member function call

    cout << "\n=== 4. Pass by Pointer ===" << endl;
    s1.showByPointer(&s2); // Address of s2 passed

    cout << "\n=== 5. Outside Function ===" << endl;
    printByValue(s1);

    return 0;
}
