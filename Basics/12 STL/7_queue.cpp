#include <iostream>
#include <queue>

using namespace std;

int main(){

    /*
     A queue is a container adapter that provides FIFO (First In First Out) functionality.
    Think of it like people standing in a line — the first person to enter is the first one to leave.
        */


    queue<int> q;

        // push(x) → Insert element at the back.
        // pop() → Remove element from the front.
        // front() → Access the first element.
        // back() → Access the last element.
        // size() → Returns number of elements.
        // empty() → Returns true if queue is empty
        

          q.push(10);   // {10}
          q.push(20);   // {10, 20}
          q.push(30);   // {10, 20, 30}


          q.back()+=10;

             cout << "Front element: " << q.front() << endl; // 10
             cout << "Back element: " << q.back() << endl;   // 40

        
        q.pop();   // removes 10 → {20, 30}  remove first element


            cout << "After pop, front: " << q.front() << endl; // 20
            cout << "Size: " << q.size() << endl;   // 2



              if(q.empty())
                    cout << "Queue is empty\n";
              else
                    cout << "Queue is not empty\n";


        /*
        Works only in FIFO order.
        No random access (you can only access front/back).
        Internally implemented using deque by default.
        */

} 