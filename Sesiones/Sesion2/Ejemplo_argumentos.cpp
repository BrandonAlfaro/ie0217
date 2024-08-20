#include <iostream> // To use cin and cout

using namespace std; // to don't use std in each line

// Predefined function
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1; // Print number
    cout << "The double number is " << n2; // Print number
}

// Main function
int main() {
    int num1 = 5; // Number initialization and declaration
    double num2 = 5.5;// Number initialization and declaration

    displayNum(num1, num2); // Function call

    return 0; // Returns 0 to indicate that it was executed correctly
}