#include <iostream>
using namespace std;

// Función plantilla para sumar dos números de cualquier tipo
template <typename T>
T add(T num1, T num2) {
    return (num1 + num2); // Devuelve la suma de num1 y num2
}

int main() {
    int result1;    // Declara variable result1
    double result2; // Declara variable result2

    // Llama a la función plantilla de tipo int
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // Llama a la función plantilla de tipo double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0; // Salir del programa
}
