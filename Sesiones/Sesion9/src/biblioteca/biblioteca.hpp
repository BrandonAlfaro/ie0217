#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp"

using namespace std;

class Biblioteca {
public:
    // Función para agregar un libro a la biblioteca
    void agregarLibro(const string& titulo, const string& autor);

    // Función para mostrar todo el catálogo de libros
    void mostrarCatalogo();

private:
    vector<Libro> catalogo; // Almacena un vector de libros
};

#endif
