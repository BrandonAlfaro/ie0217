#include <iostream>
#include "estudiante.hpp"

using namespace std;

// Implementación del constructor
Estudiante::Estudiante(const string& nombre, int edad)
    : nombre(nombre), edad(edad) {}

// Implementación de la función mostrarDatos
void Estudiante::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
