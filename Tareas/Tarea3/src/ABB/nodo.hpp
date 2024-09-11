#ifndef NODO_HPP
#define NODO_HPP

struct NodoArbol {
    int dato; // Valor en el nodo
    NodoArbol* izquierdo; // Direccion nodo izquierdo
    NodoArbol* derecho; // Direccion nodo derecho

    // Inicializa los valores de un nodo nuevo
    NodoArbol(int valor) : dato(valor), izquierdo(nullptr), derecho(nullptr) {}
};

#endif // NODO_HPP
