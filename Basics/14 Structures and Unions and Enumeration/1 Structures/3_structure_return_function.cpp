#include <iostream>
#include <string>
using namespace std;

// define structure
struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;
};

// declare functions
Person get_data();
void display_data(const Person&);

int main() {

    Person p = get_data();
    display_data(p);

    return 0;
}

            /*
            Person get_data() {
                Person p;

                cout << "Enter first name: ";
                cin >> p.first_name;
                cout << "Enter last name: ";
                cin >> p.last_name;
                cout << "Enter age: ";
                cin >> p.age;
                cout << "Enter salary: ";
                cin >> p.salary;

                return p;   // directly return structure variable
            }*/

// define function to return structure variable
Person get_data() {

    Person p;
    
    string first_name;
    string last_name;
    int age;
    float salary;
    
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;
    
    /*
        Creates temporary variables (first_name, age, etc.).
        Fills them with data.
        Creates and returns a new Person object using:  
        
        */

    // return structure variable
    return Person{first_name, last_name, age, salary};
}

// define function to take
// structure variable as an argument
void display_data(const Person& p) {
    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p.first_name << endl;
    cout << "Last Name: " << p.last_name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}