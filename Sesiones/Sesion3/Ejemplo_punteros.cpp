#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* pointVar;

    // Almacenar la dirección de var
    pointVar = &var;

    // Imprimir var
    cout << "var = " << var << endl;

    // Imprimir pointVar
    cout << "pointVar = " << pointVar << endl;

    // Imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl;

    cout << "Cambiando el valor de var a 7:" << endl;
    // Cambiar el valor de var a 7
    var = 7;

    // Imprimir var
    cout << "var = " << var << endl;

    // Imprimir pointVar
    cout << "pointVar = " << pointVar << endl;

    // Imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl;

    cout << "Cambiando el valor de *pointVar a 16:" << endl;
    // Cambiar el valor de *pointVar a 16
    *pointVar = 16;

    // Imprimir var
    cout << "var = " << var << endl;

    // Imprimir pointVar
    cout << "pointVar = " << pointVar << endl;

    // Imprimir *pointVar
    cout << "*pointVar = " << *pointVar << endl;

    return 0;
}
