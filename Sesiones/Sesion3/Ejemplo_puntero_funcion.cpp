#include <iostream>
using namespace std;

// Definición de la función para intercambiar valores
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    // Inicializar variables
    int a = 1, b = 2;

    cout << "Antes de intercambiar" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Llamar a la función para intercambiar números
    swap(a, b);

    cout << "\nDespués de intercambiar" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
