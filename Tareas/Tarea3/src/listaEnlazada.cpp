#include "ListaEnlazada.hpp"
#include <iostream>

// Constructor de la lista enlazada
ListaEnlazada::ListaEnlazada() : cabeza(nullptr) {}

// Destructor que asegura la liberación de memoria
ListaEnlazada::~ListaEnlazada() {
    liberarMemoria();
}

// Insertar una canción al final de la lista
void ListaEnlazada::insertar(Cancion* cancion) {
    Nodo* nuevoNodo = new Nodo(cancion);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
    }
}

// Eliminar una canción por su nombre
void ListaEnlazada::eliminarPorNombre(const std::string& nombre) {
    if (cabeza == nullptr) {
        cout << "La lista está vacía.\n";
        return;
    }

    // Caso especial: la cabeza es la canción a eliminar
    if (cabeza->cancion->getNombre() == nombre) {
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp->cancion;
        delete temp;
        return;
    }

    Nodo* actual = cabeza;
    while (actual->siguiente != nullptr && actual->siguiente->cancion->getNombre() != nombre) {
        actual = actual->siguiente;
    }

    if (actual->siguiente != nullptr) {
        Nodo* temp = actual->siguiente;
        actual->siguiente = temp->siguiente;
        delete temp->cancion;
        delete temp;
    } else {
        cout << "Canción no encontrada.\n";
    }
}

// Modificar una canción
void ListaEnlazada::modificarCancion(const string& nombre) {
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        if (actual->cancion->getNombre() == nombre) {
            string nuevoNombre, nuevoArtista;
            float nuevaDuracion;

            cout << "Ingrese el nuevo nombre de la canción: ";
            cin >> nuevoNombre;
            cout << "Ingrese el nuevo nombre del artista: ";
            cin >> nuevoArtista;
            cout << "Ingrese la nueva duración de la canción: ";
            cin >> nuevaDuracion;

            actual->cancion->setNombre(nuevoNombre);
            actual->cancion->setArtista(nuevoArtista);
            actual->cancion->setDuracion(nuevaDuracion);
            return;
        }
        actual = actual->siguiente;
    }

    cout << "Canción no encontrada.\n";
}

// Imprimir la lista de canciones
void ListaEnlazada::imprimirLista() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->cancion->getNombre() << " - " << actual->cancion->getArtista()
                  << " (" << actual->cancion->getDuracion() << " mins)\n";
        actual = actual->siguiente;
    }
}

// Liberar toda la memoria dinámica asignada
void ListaEnlazada::liberarMemoria() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp->cancion;
        delete temp;
    }
}
