#include <iostream>
#include "biblioteca.hpp"

using namespace std;

// Implementación de la función para agregar un libro al catálogo
void Biblioteca::agregarLibro(const string& titulo, const string& autor) {
    catalogo.emplace_back(titulo, autor);
}

// Implementación de la función para mostrar el catálogo completo
void Biblioteca::mostrarCatalogo() {
    for (const auto& libro : catalogo) {
        libro.mostrarInfo(); // Muestra la información de cada libro en el catálogo
    }
}
