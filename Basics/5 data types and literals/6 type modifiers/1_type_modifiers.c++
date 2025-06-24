#include <iostream>
using namespace std;


                /*
                In C++, type modifiers are the keywords used to change or give extra meaning to already existing data types.
                It is added to primitive data types as a prefix to modify their size or range of data they can store.
                        */
                // C++ have 4 type modifiers which are as follows:
                        /*
                        signed Modifier
                        unsigned Modifier
                        short Modifier
                        long Modifier           */

int main()
{
    
        // 1. signed Modifier
                /*
                The signed modifier indicates that the given variable variables can store both positive and negative values.
                 To specify any variable as signed, just add the keyword signed at the start of the variable declaration.
                        */

                // It can be used only with integer and character data types.
                cout << "signed Modifier: " << endl;
            signed int a=10;
            cout << a << endl;
            cout << "Signed int size: " << sizeof(signed int) << " bytes " << endl;
            cout << "Int size: " << sizeof(int) << " bytes " << endl;

                        
            // Note: The int datatype is signed by default. So, int can directly be used instead of signed int.
        
            cout << "\n \n \n";







        
        // 2. unsigned Modifier
                /*
                    The unsigned modifier indicates that the given variables can store only non-negative integer values.
                    Like signed modifier, it is also added at the start of the variable declaration to define the given
                    variable as unsigned.
                            */
                cout << "unsigned Modifier: " << endl;


              	// Declaring unsigned integer with negative value
                unsigned int unsigned_i = -1;

                // Declaring normal integer with negative value
                int i = -10;


                  	// Printing the value and size


                    cout << "unsigned_i: " << unsigned_i << endl;
                                /*
                                As we can see, when we assigned some negative value to unsigned integer,
                                 the value gets converted to its 2's complement because unsigned types 
                                 cannot store the negative values.
                                        */

                    cout << "unsigned int size: " << sizeof(unsigned_i) << " bytes" << endl;
                    cout << "i: " << i << endl;
                    cout << "int size: " << sizeof(i) << endl;


            cout << "\n \n \n";


        





        // 3. short Modifier
                        /*
                        The short keyword decreases the size of the data type in the memory. It leads to the decrease
                         in the range of value that the given data type can store. A variable can be declared as short
                          by adding the short keyword before the variable declaration.
                                        */


                // The short keyword can only be used with integer data type.
                // Note: The short int can be written as short also. They are equivalent.


                cout << "short Modifier: " << endl;

                
                // Printing the size of short and normal ints
                        cout << "short int size: " << sizeof(short int) << " bytes" << endl;
                        cout << "int size: " << sizeof(int) << " bytes" << endl;


            cout << "\n \n \n";

                
        


                

        // 4. long Modifier
                        /*
                        The long keyword increases the size of the data type in memory. It leads to increase in the range 
                        of value that the given data type can store. A variable can be declared as long by adding the long 
                        keyword before the variable declaration.
                                */
                cout << "long Modifier: " << endl;
                        


             // The long modifier can be used with integer and double data type. It can also be used twice on integers.


                        // Printing the size of long and normal ints
  	                // double and long double

                        cout << "int size: " << sizeof(int) << " bytes" << endl;
                        cout << "long int size: " << sizeof(long int) << " bytes" << endl;
                        cout << "double size: " << sizeof(double) << " bytes" << endl;
                        cout << "long double size: " << sizeof(long double) << " bytes" << endl;



                // Note: The long int can be written as long also. They are equivalent.


                




}