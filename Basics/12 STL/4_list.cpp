#include <iostream>
#include <list>
 
using namespace std;
 

int main(){

    /*
    std::list is a doubly linked list in C++.

        Unlike vector:

        vector stores elements contiguously (like an array).

        list stores elements separately in nodes, with each node having:

        data

        pointer to next node

        pointer to previous node

        👉 This allows fast insertion & deletion at any position, but slower random access compared to vector.


        */


        list <int> l;

        // initializer list
         list<int> l2 = {10, 20, 30, 40 , 20 ,13 , 45};


        //  1. Insertion
        l.push_back(10);     // Insert at end → [10]
        l.push_front(5);     // Insert at front → [5,10]
        l.emplace_back(20);  // Faster than push_back → [5,10,20]
        l.emplace_front(1);  // Faster than push_front → [1,5,10,20]
   


        // 2. Deletion
        l.pop_back();   // Remove last element
        l.pop_front();  // Remove first element
        l.erase(l.begin());   // Remove element at iterator
        l.clear();      // Remove all elements


        // 3. Access
            // Unlike vector, you cannot do l[2].


            list <int>::iterator it=l2.begin();
            advance(it,2);
            cout << *it << endl;

        
            cout << l2.size() << endl;   // Number of elements


            l2.sort();       // Sort the list
            l2.unique();     // Removes consecutive duplicates
            l2.reverse();    // Reverse the list


            for (int x:l2){
                cout << x << " ";
            }






            // 🔑 Difference Between vector and list
        /* 
            | Feature                      | vector 🟦               | list 🟩                       |
            | ---------------------------- | ----------------------- | ----------------------------- |
            | Memory storage               | Contiguous (like array) | Doubly Linked Nodes           |
            | Access                       | Fast (O(1) with `[]`)   | Slow (O(n), must traverse)    |
            | Insertion/Deletion at middle | Slow (O(n))             | Fast (O(1) if iterator known) |
            | Cache friendliness           | High                    | Low                           |

                */








}