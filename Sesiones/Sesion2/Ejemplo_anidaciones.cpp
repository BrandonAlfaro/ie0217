#include <iostream> // To use cin y cout

using namespace std; // to don't use std in each line

// Main function
int main() {
    int num; // Number initialization

    cout << "Enter an integer: "; // Print message
    cin >> num; // Receive a number

    // Outer if condition
    if (num != 0) {

        // Inner if condition
        if (num > 0) {
            cout << "The number is positive." << endl; // Print message
        }
        // Inner else condition
        else {
            cout << "The number is negative." << endl; // Print message
        }
    }
    // Outer else condition
    else {
        cout << "The number is 0 and it is neither positive nor negative." << endl; // Print message
    }

    cout << "This line is always printed." << endl; // Print message

    return 0;
}
