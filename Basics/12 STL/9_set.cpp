#include <iostream>
#include <set>

using namespace std;

int main(){
    /*
        A set is an associative container in STL that stores elements in sorted order (by default ascending) and ensures
         that all elements are unique.

         Ordered – elements are stored in sorted order.
        Unique elements – duplicates are not allowed.
        Underlying structure – implemented using a balanced BST (Red-Black Tree).
            Time complexity –

            insert() → O(log n)
            erase() → O(log n)
            find() → O(log n)
            count() → O(log n)

            */

        set <int> s;

        // Insert elements
        s.insert(5);
        s.insert(1);
        s.insert(10);
        s.insert(5);  // duplicate, won't be inserted
        s.emplace(6);
        s.emplace(7);
        s.emplace(8);
        s.emplace(9);

        cout << "Elements in set: ";
            for (int x : s) {
                cout << x << " ";
            }

            cout << endl;

/*

            | Function         | Description                                    |
            | ---------------- | ---------------------------------------------- |
            | `insert(x)`      | Inserts element `x` (O(log n))                 |
            | `erase(x)`       | Removes element `x`                            |
            | `find(x)`        | Returns iterator to `x` if found, else `end()` |
            | `count(x)`       | Returns 1 if `x` is in set, else 0             |
            | `begin(), end()` | Iterators for traversal                        |
            | `empty()`        | Checks if set is empty                         |
            | `size()`         | Returns number of elements                     |
            | `clear()`        | Removes all elements                           |
                                                                                    */

        
            auto it=s.find(5);

            if (it != s.end()) {
                cout << "Element found: " << *it << endl;
            } else {
                cout << "Element not found!" << endl;
            }


        s.erase(5);
            cout << "After erasing 5: ";
            for (int x : s) cout << x << " ";
            cout << endl;

        
        // Search
        if (s.find(10) != s.end())
            cout << "10 found!" << endl;



        int cnt=s.count(1);    //it will always give 1 and 0 because it hold 1 

        cout << cnt << endl;

        auto it1=s.find(6);
        auto it2=s.find(8);       //it will remove 

        s.erase(it1,it2);
        for (int x : s) cout << x << " ";
            cout << endl;

        
            /*
            Since set in C++ is sorted automatically (ascending order by default), we can use binary search–like functions:

                lower_bound(x) → returns an iterator pointing to the first element that is >= x.
                upper_bound(x) → returns an iterator pointing to the first element that is > x.
            */

                set<int> s1 = {1, 3, 5, 7, 9};

                    auto i1 = s1.lower_bound(5);   // points to 5
                    auto i2 = s1.upper_bound(5);   // points to 7


                 cout << "lower_bound(5): " << *i1 << endl;
                 cout << "upper_bound(5): " << *i2 << endl;


                    auto it3 = s1.lower_bound(6);   // points to 7 (first >= 6)
                     cout << "lower_bound(6): " << *it3 << endl;


             auto it4 = s1.upper_bound(9);   // no element > 9 → returns s.end()
            if (it4 == s1.end())
                cout << "upper_bound(9): Not found (points to end)" << endl;


                // Both functions work in O(log n) time (binary search internally).
}