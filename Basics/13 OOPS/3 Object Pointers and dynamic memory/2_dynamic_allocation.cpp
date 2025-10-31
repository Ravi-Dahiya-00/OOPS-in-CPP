#include <iostream>
#include <string>
using namespace std;

class cricketers {
public:
    string name;
    int runs;
    float avg;

    cricketers(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};
int main(){

    // The keyword new dynamically allocates memory on the heap for a single integer.
    // new int(54321) returns the address of that integer in memory.
    int *ptr= new int(54321);
    cout << (*ptr) << endl;


    cricketers c1("virat kholi",1234,34.5);
    cricketers *c2= new cricketers("rohit sharma",1290,39.1);

    // new calls the constructor and returns the address of the newly created object.
    // c2 is a pointer that stores that address.


    cout << c1.name << " " << c1.runs << endl;
    cout << (*c2).name << " " << (*c2).runs << endl;
    cout << c2->name << " " << c2->runs << endl;     //-> is the arrow operator, a shortcut for (*pointer).member.
}