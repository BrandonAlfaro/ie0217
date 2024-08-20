#include <iostream> // To use cin and cout

using namespace std; // to don't use std in each line

// Structure initialization
struct Person
{
    char name[50];
    int age;
    float salary;
};

// Main function
int main () {
    Person p1;
    cout << "Enter full name: "; // Print
    cin.get(p1.name, 50); // In

    cout << "Enter age: "; // Print
    cin >> p1.age; // In

    cout << "Enter salary: "; // Print
    cin >> p1.salary; // In

    cout << "\nDisplaying information" << endl; // Print
    cout << "Name: " << p1.name << endl; // Print
    cout << "Age: " << p1.age << endl; // Print
    cout << "Salary: " << p1.salary << endl; // Print

    return 0; // Returns 0 to indicate that it was executed correctly
}