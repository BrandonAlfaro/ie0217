#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
    
    // friend function
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};

// Accessing the private function
int addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    
    // Use friend function to add 5
    cout << "Distance: " << addFive(D);
    
    return 0;
}