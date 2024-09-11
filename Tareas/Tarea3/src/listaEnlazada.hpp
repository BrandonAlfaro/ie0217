#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP

#include "cancion.hpp"

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
    void insertar(Cancion* cancion);
    void eliminarPorNombre(const string& nombre);
    void modificarCancion(const string& nombre);
    void imprimirLista() const;
    void liberarMemoria();
};

#endif // LISTA_ENLAZADA_HPP
