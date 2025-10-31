#include <iostream>
#include <deque>

using namespace std;

int main(){

        /*
            Deque stands for Double Ended Queue.
            It allows insertion and deletion at both ends (front and back).
            Unlike vector, it is not stored in a contiguous block of memory (internally, it’s implemented as a set of chunks/blocks).
            It is slower than a vector for middle access but faster for insertions/removals at the beginning.

            */


            deque<int> dq;   // empty deque of integers
            deque<int> dq2 = {1, 2, 3, 4};  // initialized deque


            // Insertion
            dq.push_back(10);   // Insert at back
            dq.push_front(20);  // Insert at front
            dq.emplace_back(30); // Faster insert at back
            dq.emplace_front(40); // Faster insert at front




            // Deletion
            dq.pop_back();   // Removes from back
            dq.pop_front();  // Removes from front



            // Access Elements
            cout << dq[0] << endl;      // Access by index
            cout << dq.at(1) << endl;   // Safe access with boundary check
            cout << dq.front() << endl; // First element
            cout << dq.back() << endl;  // Last element




            for (auto it=dq.begin();it!=dq.end();it++)
            {
                cout << *it << " ";
            }

            cout << endl;



            cout << dq.size() << endl;    // number of elements
            dq.clear();   // removes all elements
            cout << dq.empty() << endl;   // checks if deque is empty
            



            deque <int> dq1={1,2,3,4};

            dq1.erase(dq1.begin(), dq1.begin()+2); // erase range

            for (auto x : dq1) cout << x << " "; // 1 2 3 4




            /*
            Use vector if most operations are random access and push_back.
            Use deque if you need push_front + push_back frequently.
            Use list if you need frequent insert/delete in the middle.
            */

            

}