#include <iostream>
using namespace std;

class ClassA {
    private:
        int numA;
    
    // friend function declaration
    friend int add(ClassA, ClassB);

public:
    // constructor to initialize numA to 12
    ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;
    
    // friend function declaration
    friend int add(ClassA, ClassB);

public:
    // constructor to initialize numB to -1
    ClassB() : numB(-1) {}
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    
    cout << "Sum: " << add(objectA, objectB);
    
    return 0;
}
