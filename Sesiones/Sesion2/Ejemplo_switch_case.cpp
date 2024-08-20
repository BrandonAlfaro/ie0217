#include <iostream> // To use cin y cout

using namespace std; // to don't use std in each line

// Main function
int main() {
    char oper; // Operator initialization 
    float num1, num2; // Numbers initialization
    
    cout << "Enter an operator (+, -, *, /): "; // Print message
    cin >> oper; // Receive a operator
    
    cout << "Enter two numbers: " << endl; // Print message
    cin >> num1 >> num2; // Receive a numbers

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)  // Verify that it is not divided by zero
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }

    return 0; // Returns 0 to indicate that it was executed correctly
}