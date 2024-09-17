#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

using namespace std;

class Libro {
public:
    // Constructor que recibe el título y el autor del libro
    Libro(const string& titulo, const string& autor);

    // Función para mostrar la información del libro
    void mostrarInfo() const;

private:
    string titulo; // Almacena el título del libro
    string autor;  // Almacena el autor del libro
};

#endif
