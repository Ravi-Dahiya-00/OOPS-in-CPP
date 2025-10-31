#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

    /*
    What is a map?
        A map is an associative container that stores elements in key-value pairs.
        Each key in a map is unique (no duplicates).
        Internally, it is usually implemented as a balanced binary search tree (Red-Black Tree).
        Keys are automatically sorted in ascending order
           */


        map <int,string> m;

         // Inserting elements
        m[1] = "Ravi";
        m[3] = "Yadav";
        m[2] = "Coder";

        // Insert elements
        m.insert({4, "AI"});
        m[5] = "ML";  // Another way
        m.emplace(5,"Data Science");


        for (auto it : m){
            cout << it.first << " -> " << it.second << endl;
        }

        // accessing elements
        cout << m[1] << endl;        // Ravi
        cout << m.at(2) << endl;     // Coder



        // Size
        cout << m.size() << endl;    // 5


        // Find
        auto it = m.find(3);
        if(it != m.end()) 
        cout << it->first << " " << it->second << endl;  // 3 Yadav


        // Erase
        m.erase(2);  // removes key 2

        // Count (for checking presence)
        if(m.count(1)) cout << "Key exists";


        // Iterating in map
        for (auto it=m.begin();it!=m.end();it++)
        {
            cout << it->first << " " << it->second << endl;
        }






        // Multimap 
            // Similar to map, but allows duplicate keys.
            // Still sorted (by key).
            // No [] operator, you must use insert() to add elements.
            // Syntax:


            multimap<int, string> mm;
            mm.insert({1, "Ravi"});
            mm.insert({1, "Yadav"});  // duplicate key allowed
            mm.insert({2, "LPU"});




            // unordered_map
                // Stores key-value pairs.
                // Unique keys only (like map).
                // But NOT sorted → it uses hashing internally.
                // Much faster (average O(1) for insert, search, delete).
                        

                unordered_map<int, string> um;
                um[1] = "Ravi";
                um[2] = "Yadav";
                um[3] = "LPU";




        /*
        | Feature          | map                | multimap               | unordered\_map       |
        | ---------------- | ------------------ | ---------------------- | -------------------- |
        | Key uniqueness   | Unique only        | Duplicate allowed      | Unique only          |
        | Order            | Sorted (by key)    | Sorted (by key)        | No order (random)    |
        | Internals        | Balanced BST (RBT) | Balanced BST (RBT)     | Hash table           |
        | Insertion/Search | O(log n)           | O(log n)               | O(1) avg, O(n) worst |
        | Operator `[]`    | ✅ Yes              | ❌ No (must use insert) | ✅ Yes                |

                                        */

        /*
        Use map if you want unique keys + sorted order.
        Use multimap if you need duplicates with sorted order.
        Use unordered_map if you need fastest performance and don’t care about order.

        */





}