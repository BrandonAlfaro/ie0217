#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    /* Declara una variable entero puntero. */
    int *ptr;

    /* Reserva memoria dinámica del tamaño de un entero. */
    ptr = (int*)calloc(5, sizeof(int)); // 5 espacios de memoria de 4 Bytes cada uno.

    /* Se ejecuta si no se reserva memoria dinámica*/
    if (!ptr) {
        cout << "Reserva de memoria fallida";
        exit(1);
    }

    cout << "Inicializando valores..." << endl << endl;
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2 + 1;
    }

    cout << "Valores inicializados" << endl;
    for (int i = 0; i < 5; i++) {

        /* ptr[i] y *(ptr+i) se pueden usar indiferentemente. */
        cout << *(ptr + i) << endl;
    }

    /* Libera la memoria reservada. */
    free(ptr);
    return 0;

}
