#include <iostream>
using namespace std;

// Definición de la clase base Animal
class Animal {
public:
    // Método para representar que el animal puede comer
    void eat() {
        cout << "I can eat!" << endl;
    }

    // Método para representar que el animal puede dormir
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// Definición de la clase derivada Dog que hereda de Animal
class Dog : public Animal {
public:
    // Método para representar que el perro puede ladrar
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Creación de un objeto de la clase Dog
    Dog dog1;

    // Llamadas a los métodos de la clase base Animal
    dog1.eat();
    dog1.sleep();

    // Llamada al método de la clase derivada Dog
    dog1.bark();

    return 0;
}
