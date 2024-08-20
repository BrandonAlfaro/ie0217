#include <iostream> // To use cin and cout

extern int count; // Variable initialization

// Extern function
void write_extern(void) {
    std::cout << "Count is " << count << std::endl; // Print message
}