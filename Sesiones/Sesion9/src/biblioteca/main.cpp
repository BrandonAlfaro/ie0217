#include "biblioteca.hpp"

int main() {
    // Crear un objeto Biblioteca
    Biblioteca biblioteca;

    // Agregar libros a la biblioteca
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    // Mostrar el catálogo de libros
    biblioteca.mostrarCatalogo();

    return 0;
}
