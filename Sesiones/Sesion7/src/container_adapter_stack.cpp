#include <iostream>  // Para cout y cin
#include <stack>     // Biblioteca para el uso de stacks

using namespace std;  // Para no poner std:: en cada línea
int main() {
    // Crear una pila de enteros
    stack<int> numbers;

    // Inserta(push) elementos en la pila
    numbers.push(1);    // Insertar el número 1
    numbers.push(100);  // Insertar el número 100
    numbers.push(10);   // Insertar el número 10

    cout << "Numbers are: ";

    while (!numbers.empty()) {
        // Imprime el elemento del top
        cout << numbers.top() << ", ";  // Muestra el valor en la cima de la pila

        // Elimina el elemento del tope de la pila
        numbers.pop();  // Elimina el elemento en el top
    }

    return 0;
}
