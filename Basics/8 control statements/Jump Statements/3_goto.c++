#include <iostream>
using namespace std;

int main()
{
        //  C) goto 
            /*
               The goto statement in C also referred to as the unconditional jump statement can be used to jump from one 
               point to another within a function.
                    */



        int n=1;

        label:
            cout << n << endl;
            n++;
            if ( n<=10 )
            {
                goto label;
            }
}