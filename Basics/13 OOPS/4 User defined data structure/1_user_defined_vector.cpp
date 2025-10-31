#include <iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int *arr;

    Vector(){
        size = 0;
        capacity=1;
        arr = new int[1];
    }

    void add(int element){
        if (size==capacity){
            capacity*=2;
            int *arr2 = new int[capacity];
            for (int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }

        arr[size++]=element;
    }

    void display(){
        for (int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    int get(int idx){
        if (size==0) {
            cout << "array is still empty" << endl;
            return -1;
        }
        if (idx>=size || idx<0){
            cout << "Invalid Index" << endl;
            return -1;
        }

        return arr[idx];
    }

    void remove(){
        if (size==0) cout << "array is empty" << endl;
        size--;
    }

};

int main(){
    Vector v;
    cout << v.size << " " << v.capacity << endl;

    v.add(12);
    v.display();
    cout << v.size << " " << v.capacity << endl;

    v.add(122);
    v.display();
    cout << v.size << " " << v.capacity << endl;

    v.add(43);
    v.display();
    cout << v.size << " " << v.capacity << endl;

    v.add(94);
    v.display();
    cout << v.size << " " << v.capacity << endl;

    
    v.add(44);
    v.display();
    cout << v.size << " " << v.capacity << endl;

    cout << v.get(4) << endl;

    cout << v.get(12) << endl;


    v.remove();
    v.display();

}