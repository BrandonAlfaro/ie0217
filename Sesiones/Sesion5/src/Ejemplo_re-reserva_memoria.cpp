#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    /* Declara variables flotantes puntero. */
    float *ptr, *new_ptr;

    /* Reserva memoria dinámica de tamaño flotante. */
    ptr = (float*) malloc(5 * sizeof(float));

    /* Se ejecuta si no se reserva memoria dinámica*/
    if(ptr == NULL) {
        cout << "Memory Allocation Failed";
        exit(1);
    }

    /* Inicializa el bloque de memoria dinámica reservado. */
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 1.5;
    }

    /* Re-reserva la memoria dinámica reservada */
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float));

    /* Se ejecuta si no se re-reserva memoria dinámica*/
    if(new_ptr == NULL){
        cout << "Memory Re-allocation Failed";
        exit(1);
    }

    /* Inicializando el bloque de memoria dinámica re-reservada. */
    for (int i = 5; i < 10; i++) {
        new_ptr[i] = i * 2.5;
    }

    /* Imprimiendo información*/
    cout << "Printing Values" << endl;
    for (int i = 0; i < 10; i++){
        cout << new_ptr[i] << endl;
    }

    /* Libera la memoria dinámica reservada. */
    free(new_ptr);

    return 0;
    
}
