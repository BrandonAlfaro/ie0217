#include "ABB.hpp"

// Constructor que inicializa el árbol vacío
ArbolBinarioBusqueda::ArbolBinarioBusqueda() : raiz(nullptr) {}

// Función para insertar un nodo
void ArbolBinarioBusqueda::insertarNodo(NodoArbol*& nodo, int valor) {
    if (nodo == nullptr) {
        nodo = new NodoArbol(valor);
    } else if (valor < nodo->dato) {
        insertarNodo(nodo->izquierdo, valor);
    } else {
        insertarNodo(nodo->derecho, valor);
    }
}

// Función de recorrido en inorden
void ArbolBinarioBusqueda::inOrden(NodoArbol* nodo) const {
    if (nodo != nullptr) {
        inOrden(nodo->izquierdo);
        cout << nodo->dato << " ";
        inOrden(nodo->derecho);
    }
}

// Función para buscar un nodo
bool ArbolBinarioBusqueda::buscarNodo(NodoArbol* nodo, int valor) const {
    if (nodo == nullptr) return false;
    if (nodo->dato == valor) return true;
    if (valor < nodo->dato) return buscarNodo(nodo->izquierdo, valor);
    return buscarNodo(nodo->derecho, valor);
}

// Función para calcular la altura del árbol
int ArbolBinarioBusqueda::altura(NodoArbol* nodo) const {
    if (nodo == nullptr) return 0;
    return 1 + max(altura(nodo->izquierdo), altura(nodo->derecho));
}

// Función para verificar si el árbol está balanceado
bool ArbolBinarioBusqueda::estaBalanceado(NodoArbol* nodo) const {
    if (nodo == nullptr) return true;

    int alturaIzquierda = altura(nodo->izquierdo);
    int alturaDerecha = altura(nodo->derecho);

    return abs(alturaIzquierda - alturaDerecha) <= 1 &&
           estaBalanceado(nodo->izquierdo) &&
           estaBalanceado(nodo->derecho);
}

// Función auxiliar para eliminar un nodo
NodoArbol* ArbolBinarioBusqueda::eliminarNodo(NodoArbol* nodo, int valor) {
    if (nodo == nullptr) return nodo;

    if (valor < nodo->dato) {
        nodo->izquierdo = eliminarNodo(nodo->izquierdo, valor);
    } else if (valor > nodo->dato) {
        nodo->derecho = eliminarNodo(nodo->derecho, valor);
    } else {
        if (nodo->izquierdo == nullptr && nodo->derecho == nullptr) {
            delete nodo;
            return nullptr;
        } else if (nodo->izquierdo == nullptr) {
            NodoArbol* temp = nodo->derecho;
            delete nodo;
            return temp;
        } else if (nodo->derecho == nullptr) {
            NodoArbol* temp = nodo->izquierdo;
            delete nodo;
            return temp;
        } else {
            NodoArbol* temp = encontrarMinimo(nodo->derecho);
            nodo->dato = temp->dato;
            nodo->derecho = eliminarNodo(nodo->derecho, temp->dato);
        }
    }
    return nodo;
}

// Función auxiliar para encontrar el nodo con el valor mínimo
NodoArbol* ArbolBinarioBusqueda::encontrarMinimo(NodoArbol* nodo) {
    while (nodo->izquierdo != nullptr) {
        nodo = nodo->izquierdo;
    }
    return nodo;
}

// Inserta un valor en el árbol
void ArbolBinarioBusqueda::insertar(int valor) {
    insertarNodo(raiz, valor);
}

// Realiza un recorrido en inorden
void ArbolBinarioBusqueda::inOrden() const {
    inOrden(raiz);
    cout << endl;
}

// Busca un valor en el árbol
bool ArbolBinarioBusqueda::buscar(int valor) const {
    return buscarNodo(raiz, valor);
}

// Devuelve la altura del árbol
int ArbolBinarioBusqueda::altura() const {
    return altura(raiz);
}

// Verifica si el árbol está balanceado
bool ArbolBinarioBusqueda::estaBalanceado() const {
    return estaBalanceado(raiz);
}

// Elimina un valor del árbol
void ArbolBinarioBusqueda::eliminar(int valor) {
    raiz = eliminarNodo(raiz, valor);
}
