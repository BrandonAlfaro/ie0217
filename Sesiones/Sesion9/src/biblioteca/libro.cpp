#include <iostream>
#include "libro.hpp"

using namespace std;

// Implementación del constructor
Libro::Libro(const string& titulo, const string& autor)
    : titulo(titulo), autor(autor) {}

// Implementación de la función para mostrar la información del libro
void Libro::mostrarInfo() const {
    cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
}
