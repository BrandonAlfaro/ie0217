#include <iostream> // To use cin and cout

int count; // Variable initialization

extern void write_extern(); // Extern function

// Main function
int main() {
    count = 5; // Variable declaration
    write_extern(); // Function call
}