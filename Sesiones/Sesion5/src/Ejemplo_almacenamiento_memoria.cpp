#include <iostream> ///> Para cin y cout en consola.

using namespace std;

/* Variable se almacena en el segmento de data. */
int globalVariable = 42;

int main() {

    /* Variable se almacena en el stack. */
    int stackVariable = 10;

    /* Variable se almacena en el heap*/
    int* heapVariable = new int(20); // Devuelve un espacio para almacenar la variable en el heap, no en el stack.

    /* Impresiones en ventana de comandos. */
    cout << "Valor de globalVariable: " << globalVariable << endl;
    cout << "Valor de stackVariable: " << stackVariable << endl;
    cout << "Valor de heapVariable: " << *heapVariable << endl;

    /* Se libera la memoria dinámica asignada. */
    delete heapVariable;

    return 0;

}