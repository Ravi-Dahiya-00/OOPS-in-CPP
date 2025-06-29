#include <iostream>
using namespace std;


        //  Conditional Operator in C
            /*
              The conditional operator is used to add conditional code in our program. It is similar 
              to the if-else statement. It is also known as the ternary operator as it works on three operands.
                */
int main()
{
      int var;
      int flag = 0;


          // using conditional operator to assign the value to var
          // according to the value of flag

          var = flag == 0 ? 25 : -25;

          cout << "value of var when flag is 0 : " << var << endl;

}