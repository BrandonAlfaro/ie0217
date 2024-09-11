#ifndef ABB_HPP
#define ABB_HPP

#include <iostream>
#include "Nodo.hpp"

using namespace std;

class ArbolBinarioBusqueda {
    private:
        NodoArbol* raiz; // Puntero al nodo raiz del arbol

        void insertarNodo(NodoArbol*& nodo, int valor);
        void inOrden(NodoArbol* nodo) const;
        bool buscarNodo(NodoArbol* nodo, int valor) const;
        int altura(NodoArbol* nodo) const;
        bool estaBalanceado(NodoArbol* nodo) const;
        NodoArbol* eliminarNodo(NodoArbol* nodo, int valor);
        NodoArbol* encontrarMinimo(NodoArbol* nodo);

    public:
        ArbolBinarioBusqueda(); // Constructor que inicializa el árbol vacío
        void insertar(int valor); // Inserta un valor en el árbol
        void inOrden() const; // Realiza un recorrido en inorden
        bool buscar(int valor) const; // Busca un valor en el árbol
        int altura() const; // Devuelve la altura del árbol
        bool estaBalanceado() const; // Verifica si el árbol está balanceado
        void eliminar(int valor); // Elimina un valor del árbol
    };

#endif // ABB_HPP
