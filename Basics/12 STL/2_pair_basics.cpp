#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
       /* 
        A pair is a container that stores two values (can be of the same type or different types).

        Defined in the <utility> header.

        Very useful in problems like mapping, sorting with conditions, and competitive programming.

            */


        // Basic declaration
        pair <int,int> p1;

         // Initialization (method 1)
         pair <int,int> p2(10,12);

         // Initialization (method 2)
         pair <int,string> p3 ={1,"Ravi"};

            // Printing
        cout << p1.first << " " << p1.second << endl;
        cout << p2.first << " " << p2.second << endl;
        cout << p3.first << " " << p3.second << endl;



        // Nesting of pairs
        pair <int,pair<int,int>> p = {1,{2,3}};

        cout << p.first << " " << p.second.first << " " << p.second.second;

        cout << endl;


        // Arrays of pairs
        pair <int,int> arr[] = {{1,2},{3,4},{5,6}};
        
        cout << arr[1].first << " " << arr[2].second;





}
