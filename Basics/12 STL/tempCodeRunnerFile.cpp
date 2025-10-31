   // /*
        // The Standard Template Library (STL) is a collection of classes and functions in C++ that provide ready-made implementations
        //  of common data structures and algorithms.

        //         🔹 Why Use STL?
        //             ✅ Saves time (no need to implement data structures from scratch)
        //             ✅ Highly optimized and tested
        //             ✅ Clean, readable code
        //             ✅ Widely used in competitive programming and interview coding


        //     */


        // // creating a vector 
        // //  vector< data type > vector_name (size of vector , initialization )

        // vector <int> v (4,2);
        //     // this will create a size of 4 vector and initialize all by value 2 

        //   vector<int> a;   // empty vector of int
        //     // inserting elements
        //     v.push_back(10);
        //     v.push_back(20);
        //     v.push_back(30);

        //     // push_back is used for inserting the elements

        //     /*it doubles the size of last vector its similar to array , but if there is a empty space it does not increase the size it 
        //     put that element in that space , it does not increases the size by 1 */


        //     // initialization with different values
        //     vector <int> b ={1,2,3,4,5};

        //     // vector initialization by user;
        //     int n;
        //     cout << "Enter the size of vector : " << endl;
        //     cin >> n;

        //     vector <int> user(n);
        //     for (int i=0;i<n;i++)
        //     {
        //         cin >> user[i];
        //     }




        //     v.pop_back();                 // to remove last element of a vector       o(1)
        //     v.erase(v.begin()+2);         // to remove element at specific index      o(n)
        //     v.clear();                  // to delete complete vector          
            


        //     // size : how many elements are present in the vector , size can be decreased if element is removed
        //     // capacity : how many elements a vector can store , capacity can not be decreased if element is removed


        //     cout << a.front();          // it will give first element of vector
        //     cout << a.back();           // it will give last element of vector


        //     cout << v.empty();         // give 1 when empty , 0 when elements are present



        //     /*
        //     .at(index) is a member function of the vector class.
        //     It is used to access an element at a given index safely.
        //     Unlike the [] operator, .at() performs bounds checking (it throws an error if the index is out of range).

        //     */


        //         cout << "Element at index 0: " << a.at(0) << endl;
        //         cout << "Element at index 3: " << a.at(3) << endl;


        //      // Accessing using [] (works but no error if out of range - undefined behavior)
        //         cout << "Using [] operator at index 2: " << a[2] << endl;  





        //         // iterator in vector'
        //             // v.begin() : it points on 0th element of the vector
        //             // v.end() : it points on 1 point after the last element of the vector

