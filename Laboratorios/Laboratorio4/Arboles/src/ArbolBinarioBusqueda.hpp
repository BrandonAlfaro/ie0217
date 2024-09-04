#ifndef ARBOLBINARIOBUSQUEDA_HPP
#define ARBOLBINARIOBUSQUEDA_HPP

#include "NodoArbol.hpp"
#include <iostream>
#include <algorithm>

class ArbolBinarioBusqueda {
private:
    NodoArbol* raiz; // Puntero al nodo raiz del arbol

    void insertarNodo(NodoArbol*& nodo, int valor) {

        if (nodo == nullptr) {  // Si la dirreccion al nodo es nula entonces no hay nodo y se puede hacer un nodo 
            nodo = new NodoArbol(valor);
        } else if (valor < nodo->dato) { // Si el valor nuevo es menor al actual pasa a la rama izquierda.
            insertarNodo(nodo->izquierdo, valor);
        } else {                        // Si el valor es mayor o igual al actual pasa a la rama derecha.
            insertarNodo(nodo->derecho, valor);
        }
    }

    void preOrden(NodoArbol* nodo) const {
        if (nodo != nullptr) {  // Si el nodo informacion imprime el valor
            std::cout << nodo->dato << " ";
            preOrden(nodo->izquierdo);    // Si el nodo tiene rama izquierda imprime los valores
            preOrden(nodo->derecho);      // Si el nodo tiene rama derecha imprimer los valores
        }
    }

    void inOrden(NodoArbol* nodo) const {

        // Recorre las ramas izquierdas , luego el valor del nodo y luego las ramas derechas, asi en cada nodo.
        if (nodo != nullptr) {
            inOrden(nodo->izquierdo);  
            std::cout << nodo->dato << " ";
            inOrden(nodo->derecho);
        }
    }

    void postOrden(NodoArbol* nodo) const {

        // Recorre las ramas izquierdas, luego las ramas derechas y despues imprime el valor del nodo, asi en cada nodo.
        if (nodo != nullptr) {
            postOrden(nodo->izquierdo);
            postOrden(nodo->derecho);
            std::cout << nodo->dato << " ";
        }
    }

    bool buscarNodo(NodoArbol* nodo, int valor) const {
        if (nodo == nullptr) return false; // Si el valor del nodo es null no existe el dato en el arbol devuleve false
        if (nodo->dato == valor) return true; // Si el valor del nodo se encuentra devuelve true
        if (valor < nodo->dato) return buscarNodo(nodo->izquierdo, valor);  // Si el valor de nodo es menor al valor buscado busca en la rama izquierda
        return buscarNodo(nodo->derecho, valor); // Si el valor de nodo es mayor al valor buscado busca en la rama derecha
    }

    int altura(NodoArbol* nodo) const {
        if (nodo == nullptr) return 0;  // Si el nodo es null devuelve un valor de 0.
        return 1 + std::max(altura(nodo->izquierdo), altura(nodo->derecho)); // Analiza las ramas derechas e izquierdas del arbol devuelve la altura mayor
    }


    bool estaBalanceado(NodoArbol* nodo) const {
        if (nodo == nullptr) return true; // Si no tiene ramas esta balanceado

        int alturaIzquierda = altura(nodo->izquierdo); // Calcula la altura de la rama izquierda.
        int alturaDerecha = altura(nodo->derecho);     // Calcula la altura de la rama derecha.

        // Compara las alturas de las ramas del nodo
        return std::abs(alturaIzquierda - alturaDerecha) <= 1 &&
               estaBalanceado(nodo->izquierdo) &&
               estaBalanceado(nodo->derecho);
    }


public:
    ArbolBinarioBusqueda() : raiz(nullptr) {} // Inicializa el árbol vacío.

    // Inserta un valor en el arbol
    void insertar(int valor) {
        insertarNodo(raiz, valor);
    }

    // Realiza un recorrido en preorden
    void preOrden() const {
        preOrden(raiz);
        std::cout << std::endl; // Imprime una nueva linea
    }

    // Realiza un recorrido en inorden
    void inOrden() const {
        inOrden(raiz);
        std::cout << std::endl; // Imprime una nueva linea
    }

    // Realiza un recorrido en postorden
    void postOrden() const {
        postOrden(raiz);
        std::cout << std::endl; // Imprime una nueva linea
    }

    // Busca un valor en el arbol
    bool buscar(int valor) const {
        return buscarNodo(raiz, valor);
    }

    // Devuelve la altura del arbol
    int altura() const {
        return altura(raiz);
    }

    // Devuelve si el arbol esta balanceado
    bool estaBalanceado() const {
        return estaBalanceado(raiz);
    }
};

#endif

