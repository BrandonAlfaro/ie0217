#include <iostream> // To use cin and cout

using namespace std; // to don't use std in each line

// Main function
int main() {
    int i = 1; // Number initialization and declaration

    // Do-while loop
    do {
        cout << i << " "; // Print numbers
        i++; //Post-increment operator
    }
    while (i <= 15);

    return 0; // Returns 0 to indicate that it was executed correctly
}