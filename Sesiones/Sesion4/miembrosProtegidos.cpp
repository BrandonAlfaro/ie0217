#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string color; // Miembro privado

protected:
    string type; // Miembro protegido

public:
    void run() { cout << "I can run -- BASE!" << endl; }
    void eat() { cout << "I can eat!" << endl; }
    void sleep() { cout << "I can sleep!" << endl; }
    
    void setColor(string clr) { color = clr; } // Setter para el miembro privado color
    string getColor() { return color; } // Getter para el miembro privado color
};

class Dog : public Animal {
public:
    void run() { cout << "I can run -- DERIVED!" << endl; }
    void setType(string tp) { type = tp; } // Setter para el miembro protegido type
    
    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }
    
    // Comentado porque no se puede acceder a un miembro privado de la clase base
    /* void setColor(string clr) { color = clr; } */
    
    void bark() { cout << "I can bark! Woof woof!!" << endl; }
};

int main() {
    Dog dog1;
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black"); // Establece el color del perro

    dog1.bark();
    dog1.setType("Doberman"); // Establece el tipo del perro
    dog1.displayInfo(dog1.getColor()); // Muestra la información del perro

    return 0;
}
