#include <iostream> // To use cin y cout

using namespace std; // to don't use std in each line

// Main function
int main() {
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array initialization and declaration
    
    // For loop
    for (int n : num_array) {
        cout << n << " "; // Print message
    }

    return 0; // Returns 0 to indicate that it was executed correctly
}