#include <iostream>
using namespace std;

int main()
{
     int arr[5] = {1,2,3,4,5};

                 arr[0]=9;
                 arr[1]=-8;
                 arr[3]=arr[0];

                 
                 for (int i=0;i<=5;i++)
                 {
                    cout << arr[i] << endl;
                 }


}