#include <iostream>
#include <set>

using namespace std;

int main(){

    /*
    set → stores unique elements (no duplicates).
    multiset → stores elements in sorted order but allows duplicates.

        */

    /*
          lower_bound(x) → returns an iterator to the first element ≥ x (the first occurrence of x, if it exists).
          upper_bound(x) → returns an iterator to the first element > x (the position right after the last occurrence of x).
   */

            multiset<int> ms = {1,1, 2, 2, 2, 3, 5, 7};


            auto it1 = ms.lower_bound(2);   // points to first 2
            auto it2 = ms.upper_bound(2);   // points to element after last 2 (points to 3)

            cout << "lower_bound(2): " << *it1 << endl;
            cout << "upper_bound(2): " << *it2 << endl;

            auto it3 = ms.lower_bound(4);   // first >= 4 → points to 5
            cout << "lower_bound(4): " << *it3 << endl;

            auto it4 = ms.upper_bound(7);   // no element > 7 → returns end
            if (it4 == ms.end())
                cout << "upper_bound(7): Not found (points to end)" << endl;



            ms.erase(1);   //all 1's will be erased

            int cnt=ms.count(2);

            cout << cnt << endl;

            ms.erase(ms.find(2));


            /*
            In set: no duplicates → behavior is straightforward.
            In multiset: lower_bound(x) gives first occurrence, upper_bound(x) gives the position after last occurrence.*/


            
}