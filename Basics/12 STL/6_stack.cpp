#include <iostream>
#include <stack>

using namespace std;

int main(){

    /*
    A stack is a container adapter that provides LIFO (Last In First Out) functionality.
    Think of it like a stack of plates — you can only add/remove from the top.
        */

    stack<int> st;

     st.push(10);   // {10}
    st.push(20);   // {20, 10}
    st.push(30);   // {30, 20, 10}
    st.emplace(40);    // {40,30, 20, 10}

    cout << "Top element: " << st.top() << endl; // 40



    // push(x) → Insert element on top of stack.
    // pop() → Remove element from top.
    // top() → Access the top element.
    // size() → Returns number of elements.
    // empty() → Returns true if stack is empty.

        st.pop();  // removes 40 → {30 ,20 , 10}

        cout << "After pop, top: " << st.top() << endl; // 30

        cout << "Size: " << st.size() << endl;   // 3



            if(st.empty())
                cout << "Stack is empty\n";
            else
               cout << "Stack is not empty\n";

    


               /*
                Works only in LIFO order.
                No random access (unlike vector).
                Can be implemented internally using deque, vector, or list.
                    */





}
