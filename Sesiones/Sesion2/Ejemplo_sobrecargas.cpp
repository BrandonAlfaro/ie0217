#include <iostream> // To use cin y cout

using namespace std; // to don't use std in each line

// Function with two parameters
void display(int var1, double var2) {
    cout << "Integer number: " << var1; // Prints the integer number
    cout << " and double number: " << var2 << endl; // Prints the double number
}

// Function with a single double parameter
void display(double var) {
    cout << "Double number: " << var << endl; // Prints the double number
}

// Function with a single int parameter
void display(int var) {
    cout << "Integer number: " << var << endl; // Prints the integer number
}

int main() {
    int a = 5; // Number initialiazation and declaration
    double b = 5.5; // Number initialiazation and declaration
    // Calls function with int type parameter
    display(a); 

    // Calls function with double type parameter
    display(b);

    // Calls function with two parameters
    display(a, b);

    return 0; // Returns 0 to indicate that it was executed correctly
}
