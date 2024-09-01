#include <iostream>
using namespace std;

int main() {

    /* Declara un entero puntero. */
    int* pointInt;

    /* Declara un flotante puntero. */
    float* pointFloat;

    /* Asigna memoria dinámica. */
    pointInt = new int;
    pointFloat = new float;

    /* Asigna valor a la variables en la dirección de memoria. */
    *pointInt = 45;
    *pointFloat = 45.45f;

    /* Imprime los valores de las variables. */
    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    /* Libera la memoria dinámica asignada. */
    delete pointInt;
    delete pointFloat;

    return 0;
}
