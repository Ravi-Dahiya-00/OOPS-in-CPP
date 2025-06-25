#include <iostream>
using namespace std;


int main()
{
            // 4. Bitwise Operators
                    /*
                    Bitwise operators are works on bit-level. So, compiler first converted to bit-level 
                    and then the calculation is performed on the operands.
                            */



    int a=6 , b=4;






//number conversion binary to decimal and vice-versa


// decimal number is having base = 10   ex=(123)10

// binary number is having base = 2     ex=(123)2



// formula
//    N...........16        8          4             2            1



// we have to write this series of this formula upto when the digits of the binary number is not finished.
// we have to ignore all the numbers of the series which is getting 0 under this series.
// we have to take all the numbers of series of only one.
// then take all the numbers of the series which is getting one.
// now sum all the numbers of the series which are above one.


// binary to decimal

// convert 1101010 to decimal 

//  (1101010)2=  ()10



// now solve this 

//   1            1              0          1            0               1                 0
//   64           32             16         8            4               2                 1


// now forget all the numbers of series which are getting zero above it.
// take all the numbers of series of one and sum all the numbers.

//   64+32+8+2=106 
// the decimal of 1101010 is 106.











// decimal to binary.

// convert 16 to binary


//     16            8            4             2              1
//     1             0            0             0              0

// binary of 16 is 10000




// convert 19 to binary


//     16             8              4                2                1
//      1             0              0                1                1

// binary of 19 is 10011

// we have to put one on those numbers that can make the sum equal to that number which we are converting to binary.


















    /* 4. Bitwise Operators
     These operate at the bit level of the numbers.
    
    bitwise operators in C++ programming language enable MANIPULATION OF DATA AT BINARY LEVEL , allowing for efficient bit-level programming.
     
    these operators perform operations on individual bits , 0s and 1s , making them particularly useful in numerical computation for swift and resource-efficient calculation.
   
    bitwise operations are often more efficient then conventional arithmetic operations , especially when dealing with LOW-LEVEL PROGRAMMING or RESOURCE-CONSTRAINED ENVIORNMENT.
    */


    
// bitwise operators

// Bitwise operators are used to compare (binary) numbers:

    /*  '''Operator     	Name	                Description	                                                               Example	


            &       	AND	                              Sets each bit to 1 if both bits are 1                                    x & y	
                                                    if one is zero then it will give zero.

            |	        OR	                              Sets each bit to 1 if one of two bits is 1                    	         x | y	
                                                         only give 0 when both are zero.

           ^        	XOR	                              Sets each bit to 1 if only one of two bits is 1	                         x ^ y	
                                                     it will give zero when both are 0 or 1 in same row

          ~         	NOT(Compliment)                              	Inverts all the bits	                                       ~x	
                                                                0 to 1 and 1 to 0

          <<    	Zero fill left shift          	  Shift left by pushing zeros in from the right and \
                                                       let the leftmost bits fall off	                                         x << 2	        

           >>	        Signed right shift	          Shift right by pushing copies of the leftmost bit in from the left, 
                                                    and let the rightmost bits fall off                                       	x >> 2	'''

                                                                        */


    cout << "Bitwise Operators:\n";







    cout << "a &b is " << (a&b) << endl;
       // Bitwise AND: Compares each bit of a and b


//let's see how this print statement will be calculated.

//firstly this are converted into binary
//     a   =    0   1    0    1                #5 in binary form
//     b   =    0   1    0    0                #4 in binary form

//    a&b  =    0   1    0    0                a&b in binary form
// only the place where a and b are having 1 that will be written as 1
//  and where in only 1 is there that place is written 0 

// now convert this 0100 into decimal form 
//  8          4         2             1
//  0          1         0             0

// decimal form of this 0100 is 4.
//  so the output of the print(a&b) will be 4.















    cout << "a | b is " << (a|b) << endl;   // Bitwise OR: Compares each bit and sets to 1 if either bit is 1


//firstly this are converted into binary
//    a   =    0   1    0    1                #5 in binary form
//     b   =    0   1    0    0                #4 in binary form

//    a|b  =    0   1    0    1                a|b in binary form
//if only place is having 1 then it will be written as zero
//zero will be return only when there are both zeroes in same line

//now convert this 0101 into decimal form 
// 8          4         2             1
//0          1         0             1

//decimal form if this 0101 will be 5
//so the output of the print(a|b) will be 5.
    











//3. XOR bitwise operator
    cout << "a ^ b is " << (a^b) << endl;   // Bitwise XOR: Sets each bit to 1 if the corresponding bits are different


//let's see how this print statement will be calculated.

//firstly this are converted into binary
//     a   =    0   1    0    1                #5 in binary form
//     b   =    0   1    0    0                #4 in binary form

//    a^b  =    0   0    0    1                a^b in binary form

//it will give one only when both bits are different in same row.
//gives zero when both are same bits 
//now convert this 0001 into decimal form 
// 8          4         2             1
// 0          0         0             1

//decimal form if this 0001 will be 1
//so the output of the print(a^b) will be 1.
















//4. NOT(compliment) bitwise operator
    cout << "~(a) is " << ~(a) << endl;         // Bitwise Complement: Inverts all bits of a

//let's see how this print statement will be calculated.

//   5    =   0     1        0          1
//  ~5    =   1     0        1          0

// 2's = 1's + 1   (2's is compliment of 2)
//2's because 6 in binary form is written as          0    1     1     0
//1's in binary form will be written as               1    0     0     1
//one will also be added because 1 is also is 2's                      1
                                            
//this is - 6 stored in binary form                   1   0      1      0




//short trick is that always add 1 in a and put - sign this will be NOT of that a.
// a=8
// print(-8)   #this will give -9.













// 5.   left shift : 
                        // var << 2 
                        // we have to shift this var by 2bits.

        // if we have 10 and we have to convert it by 2 shifts 
        //  10 << 2

            // 10 -->      128          64          32               16           8              4                 2                  1
        // bit of 10 -->    0            0           0                0           1              0                 1                  0

// shifting by 2points-->   0           0           1                0           1              0                 0                  0

// it will give 40.


// shortcut to find : 
                    // var * (2*n)     n--> value upto which we have to shift that digit here n is 2.
                    // it is easy method for mcq.

                    



  cout << "a << 1 is " << (a<<1) << endl; // Left shift: Shifts bits of a to the left by 1












// 6.   right shift : 
                        // var >> 2 
                        // we have to shift this var by 2bits.

        // if we have 10 and we have to convert it by 2 shifts in right
        //  10 << 2

            // 10 -->      128          64          32               16           8              4                 2                  1
        // bit of 10 -->    0            0           0                0           1              0                 1                  0

// shifting by 2points-->   0           0           0                0           0               0                1                  0

// the first leading blocks is filled by 0's not by the digits we discarded from the right side.

// it will give 2.


// shortcut to find : 
                    // var / (2*n)     n--> value upto which we have to shift that digit here n is 2.
                    



    cout << "a >> 2 is " << (a>>2) << endl; // Right shift: Shifts bits of a to the right by 1







        
}
