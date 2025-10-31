#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);


    // copy a vector 
    vector<int>v1(5,20);

    // this will copy the same vector as of v1
    vector <int> v2(v1);


    vector <int> v={1,2,3,4,5,6};
   

    // vector<int>::iterator is basically the iterator type for a vector of integers.
    vector<int>::iterator it=v.begin();   // it -> points to first element (1)
    it+=2;
    cout << *(it) << " ";
     
    cout << endl;



    // different methods to iterate on a vector 

    // 1
    for (vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }

    cout << endl;


    v.erase(v.begin()+1,v.begin()+3);


    // 2
    for (auto it=v.begin();it!=v.end();it++)
    {
        cout << *it << " ";
    }

    cout << endl;


     // inserting elements in vector
     v.insert(v.begin(),300);
    
     v.insert(v.begin()+3,2,100);

    // 3
    for (auto it : v)
    {
        cout << it << " ";
    }



    cout << endl;

    // inserting one vector into another vector

    vector <int> new_vec={10,20,30};

    v.insert(v.begin()+2,new_vec.begin()+1,new_vec.end()-1);


     for (auto it : v)
    {
        cout << it << " ";
    }


    vector <int> swap1={10,20};
    vector <int> swap2={100,200};

    // it will swap the elements
    swap1.swap(swap2);  


    swap1.clear();  //erase the entire vector

    cout << swap1.empty();  // check the vector is empty or not


   








}