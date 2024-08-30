#include <iostream>
#include "Conversiones.hpp"
#include <iomanip>

using namespace std;

Conversion conv;
int opcion;
char prefijo;
char escala;


void mostrarMenu() {

    cout << "Conversion de unidades:" << endl;
    cout << "Opción 1: Convertir entre diferentes unidades de longitud." << endl;
    cout << "Opción 2: Convertir entre diferentes unidades de peso." << endl;
    cout << "Opción 3: Convertir entre diferentes unidades de temperatura." << endl;
    cout << "Opción 4: Salir del programa." << endl;

}