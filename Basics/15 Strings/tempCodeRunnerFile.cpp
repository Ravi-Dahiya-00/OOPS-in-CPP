  try {
        cout << s.at(10); // throws out_of_range exception
    } catch (out_of_range &e) {
        cout << "Exception caught: " << e.what() << endl;
    }