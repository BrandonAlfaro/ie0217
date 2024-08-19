#include <iostream> /*Includes the output library for printing to the console*/
using namespace std; /*Allows you to use elements from the std namespace without typing std::*/

// Global variable
int g; // Variable declaration

/*Main function*/
int main() {
    
    // Local Variable:
    int a, b; // Variable declaration

    // Initialization
    a = 10;
    b = 20;
    g = a + b; // Add two variables

    cout << g; // Print add
    
    return 0; /*Returns 0 to indicate that it was executed correctly.*/
}