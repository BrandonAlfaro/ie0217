#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    /* Reserva memoria dinámica del tamaño de un entero. */
    int* ptr = (int*) malloc(sizeof(int)); // Asigna 4 Bytes de memoria(Tamaño del int).

    /* Asigna el valor 5 a la memoria reservada. */
    *ptr = 5;

    cout << *ptr;

    return 0;
}
