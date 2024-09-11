#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP

#include "Cancion.hpp"

using namespace std;

class Nodo {
public:
    Cancion* cancion;
    Nodo* siguiente;

    // Constructor del nodo
    Nodo(Cancion* cancion) : cancion(cancion), siguiente(nullptr) {}
};

class ListaEnlazada {
private:
    Nodo* cabeza;

public:
    // Constructor
    ListaEnlazada();

    // Destructor
    ~ListaEnlazada();

    // Métodos
    void insertarAlFinal(Cancion* cancion);
    void eliminarPorNombre(const std::string& nombre);
    void modificarCancion(const std::string& nombre);
    void imprimirLista() const;
    void liberarMemoria();
};

#endif // LISTA_ENLAZADA_HPP
