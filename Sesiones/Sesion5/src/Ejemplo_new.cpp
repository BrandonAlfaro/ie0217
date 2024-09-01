#include <iostream>

using namespace std;

int main() {
/* Declaración de un entero puntero. */
int* ptrVar;

/* Se asigna memoria dinámica para una variable entera. */
ptrVar = new int;

/* Asigna el valor en la memoria dinámica. */
*ptrVar = 45;

/* Imprime el valor guardado en memoria variable. */
cout << *ptrVar;

/* Se libera la memoria dinámica asignada. */
delete ptrVar;
}