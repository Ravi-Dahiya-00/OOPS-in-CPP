#include <iostream>
using namespace std;

int sum(int a,int b)
{
    int s1=a+b;
    return s1;
}

int main()
{
        // C) goto 
            /*
             The goto statement in C also referred to as the unconditional jump statement can be used to jump 
             from one point to another within a function.
                */

        int num1=10;
        int num2=20;

        int sum_of=sum(num1,num2);
        cout << sum_of << endl;
}