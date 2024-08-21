#include <iostream>
using namespace std;

// Programa en C++ para mostrar la dirección de cada elemento de un arreglo
float arr[3];

int main() {
    // Declarar variable puntero
    float *ptr;

    // Almacenar la dirección de arr[0]
    ptr = &arr[0];

    cout << "Usar método de índice simple" << endl;
    // Bucle for para imprimir direcciones usando índice de arreglo
    for (int i = 0; i < 3; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    cout << "\n\nMostrando dirección usando punteros: " << endl;
    
    // Usar notación de puntero
    // Bucle for para imprimir direcciones de todos los elementos del arreglo
    for (int i = 0; i < 3; i++) {
        cout << ptr + i << " ";
        ++ptr;
        cout << ptr + i << endl;
     }
     return 0;
}
