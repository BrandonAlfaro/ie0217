#include <iostream> // To use cin and cout

using namespace std; // to don't use std in each line

void test() {
    static int var = 0;
    ++var; // Increment variable
    cout << var << endl; // Print number
}

int main() {
    test(); //Function call
    test(); //Function call

    return 0; // Returns 0 to indicate that it was executed correctly
}