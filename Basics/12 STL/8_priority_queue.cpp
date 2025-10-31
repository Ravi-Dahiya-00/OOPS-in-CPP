#include <iostream>
#include <queue>       // for priority_queue
#include <vector>      // for using vector as the default container
#include <functional>  // for greater<int> (min heap)

using namespace std;

int main(){
    /*
        A priority queue is a type of queue where elements are arranged based on priority.
        By default → It behaves like a Max-Heap (largest element has the highest priority).
        We can also make it a Min-Heap.

        */

        // Max-Heap (default)
        priority_queue<int> pq;

        pq.push(3);
        pq.push(10);
        pq.emplace(2);
        pq.emplace(3);
        pq.emplace(1);

        cout << pq.top() << endl;    // largest element in the queue


        // push(x) → Insert element.
        // pop() → Remove the element with highest priority.
        // top() → Access the element with highest priority.
        // size() → Returns number of elements.
        // empty() → Returns true if empty.


        pq.pop();  // removes 30
        cout << "After pop, top: " << pq.top() << endl; // 20

        cout << "Size: " << pq.size() << endl;  // 2


            if(pq.empty())
                cout << "PQ is empty\n";
            else
                cout << "PQ is not empty\n";




        // minimum heap
        priority_queue<int,vector<int>,greater<int>> pq1;
        pq.push(10);
        pq.push(5);
        pq.emplace(20);
        pq.push(1);

        cout << pq1.top() << endl;



        // Default: Max-Heap.
        // Use greater<int> to make Min-Heap.
        // Works internally using a heap data structure.
        // Only top() element can be accessed, no random access.

}