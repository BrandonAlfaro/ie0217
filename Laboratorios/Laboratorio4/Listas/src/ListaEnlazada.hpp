#ifndef LISTAENLAZADA_HPP
#define LISTAENLAZADA_HPP

#include "Nodo.hpp"
#include <iostream>

class ListaEnlazada {
private:
    Nodo* cabeza; // Variable que almacena la direccion al primer nodo 

public:

    // Inicializa la variable cabeza
    ListaEnlazada() : cabeza(nullptr) {}

    // Elimina la lista quitando nodos
    ~ListaEnlazada() {

        // Bucle
        while (cabeza != nullptr) {
            Nodo* temp = cabeza; // Almacena la direccion del puntero cabeza actual
            cabeza = cabeza->siguiente; // La direccion al nodo cabeza se actualiza al sieguiente
            delete temp; // Elimina la cabeza antigua
        }
    }

    // Agrega un nodo al inicio de la lista
    void insertarInicio(int valor) {
        Nodo* nuevoNodo = new Nodo(valor); // 
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }

    // Agrega un nodo al final de la lista
    void insertarFinal(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
        } else {
            Nodo* temp = cabeza;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevoNodo;
        }
    }

    // Elimina un nodo con el dato de variable valor
    void eliminar(int valor) {
        if (cabeza == nullptr) return;

        if (cabeza->dato == valor) {
            Nodo* temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
            return;
        }

        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr && temp->siguiente->dato != valor) {
            temp = temp->siguiente;
        }

        if (temp->siguiente != nullptr) {
            Nodo* nodoAEliminar = temp->siguiente;
            temp->siguiente = temp->siguiente->siguiente;
            delete nodoAEliminar;
        }
    }

    // Imprime los nodos
    void imprimir() const {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            std::cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        std::cout << "null" << std::endl;
    }

    // Busco un valor en los nodos que hay
    bool buscar(int valor) const {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            if (temp->dato == valor) return true;
            temp = temp->siguiente;
        }
        return false;
    }
};

#endif