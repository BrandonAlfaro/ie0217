#include <iostream> // To use cin and cout

using namespace std; // to don't use std in each line

// Function prototype
int add(int, int);

// Main function
int main() {
    int sum; // Number initialization

    sum = add(100, 78); //Function call

    cout << "100 + 78 = " << sum << endl; // Print sum

    return 0; // Returns 0 to indicate that it was executed correctly
}

// Function definition
int add(int a, int b) {
    return (a + b); // Returns result
}