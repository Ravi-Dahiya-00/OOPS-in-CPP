#include <iostream>
using namespace std;
int main()
{
    int y=10;
    int &x=y;

    y=20;
    cout << y;
    cout << x;
}