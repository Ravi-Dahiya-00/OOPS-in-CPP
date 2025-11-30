#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
    In C++, a union is a user-defined data type that can hold members of different data types.

            Unlike structures, all members of a union are stored in the same memory location.
            Since all members share the same memory, changing the value of one member overwrites the value of the others.

            The size of the union will always be equal to the size of the largest member of the union. 
            All the less-sized elements can store the data in the same space without any overflow.
          */
union A {
    int x;
    char y;
};

union B {
    int arr[10];
    char y;
};


// Define a union with different data types
union Student {
    int rollNo;
    float height;
    char firstLetter;
};  




// Define a structure containing a nested union
struct Employee
{
    char name[50];
    int id;

    // Nested union
     union Pay {
        float hourlyRate;
        float salary;
    } payment; 
};


// Anonymous Unions
/*
    Anonymous unions are those unions that are declared without any name inside a main function.
     As we do not define any union name, we can directly access the data members of the union that 
     is why their members must be declared with unique names to avoid ambiguity in the current scope.

        */

struct Worker
{
    int empId;

    // Anonymous union with new names
    union {
        float hourly_wage;
        float monthly_salary;
    };
};



int main(){
    
        // Finding size using sizeof() operator
    cout << "Sizeof A: " << sizeof(A) << endl;
    cout << "Sizeof B: " << sizeof(B) << endl;



     // Declare a union variable
    Student data;

    data.rollNo = 21;
    cout << data.rollNo << endl;

    data.height = 5.2;
    cout << data.height << endl;

    data.firstLetter = 'N';
    cout << data.firstLetter << endl;

    cout << data.rollNo << endl;





    Employee e1; 
    e1.id = 101;

    // Access nested union member using dot operator
    e1.payment.hourlyRate = 300.0;

    cout << "Employee ID: " << e1.id << "\n";
    cout << "Hourly Rate: Rs " << e1.payment.hourlyRate << endl;

    // You can also assign salary if needed
    e1.payment.salary = 50000.0;
    cout << "Salary: Rs " << e1.payment.salary << endl;


    
    cout << "Hourly Rate: Rs " << e1.payment.hourlyRate << endl;  
    // it will give salary because it overrides 






        Worker w1;
    w1.empId = 101;

    // Access anonymous union member
    w1.hourly_wage = 300;

    cout << "Worker ID: " << w1.empId << "\n";
    cout << "Hourly Wage: Rs " << w1.hourly_wage << endl;

    // Only one member is active at a time
    w1.monthly_salary = 50000;
    cout << "Monthly Salary: Rs " << w1.monthly_salary << endl;

    return 0;
}

/*
Definition & syntax

Memory sharing

Accessing members

Size calculation

Difference between union and structure

Use cases and examples

*/
