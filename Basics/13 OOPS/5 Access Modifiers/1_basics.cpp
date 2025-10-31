#include <iostream>
#include <string>
using namespace std;

class Student{

// 2️⃣ private
        // Members declared as private are accessible only inside the class.
        // Not accessible outside or by derived classes.
        // Used for data hiding (encapsulation).
private:
    float marks;         // ❌ Not accessible directly outside


  // 1️⃣ public
        // Members declared as public are accessible from anywhere — inside or outside the class.
        // Generally used for functions or data you want to allow external access to.
public:
    string name;
    int rno;

    Student (string n,int r,float m){
        name=n;
        rno=r;
        marks=m;
    }

    float getmarks(){              //getter for pvt 
        return marks; 
    }

    void setmarks(float m){       //setter for pvt
        marks=m;
    }
};


int main(){
  
    Student s1("Ravi Yadav",23,97.3);
    // s1("Ravi Yadav",43,87.3);              we cannot also do this calling a constructor again for the same object
    cout << s1.name << endl;
    s1.name="Harsh";      // public members can be accessed everywhere and can be changed

    // s1.marks=95.6;               pvt members can not be accessed outside the class


    cout << s1.getmarks() << endl;        //accessing pvt members through class functions
    s1.setmarks(87.9);        //accessing pvt members through class functions and changing value
  

}


// ➡️ Access Modifiers in C++ are keywords that control where (and how) members (variables and functions) of a class can be accessed.
/*
| Modifier      | Accessible Inside Class | Accessible in Derived Class | Accessible Outside Class |
| ------------- | ----------------------- | --------------------------- | ------------------------ |
| **public**    | ✅ Yes                   | ✅ Yes                       | ✅ Yes                    |
| **protected** | ✅ Yes                   | ✅ Yes                       | ❌ No                     |
| **private**   | ✅ Yes                   | ❌ No                        | ❌ No                     |
*/