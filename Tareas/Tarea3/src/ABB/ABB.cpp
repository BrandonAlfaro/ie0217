/**
 * @file ABB.cpp
 * @brief Implementación de la clase ArbolBinarioBusqueda para la gestión de un Árbol Binario de Búsqueda (ABB).
 * 
 * Este archivo contiene la implementación de las funciones miembro de la clase 
 * ArbolBinarioBusqueda, que permiten la inserción, eliminación, búsqueda, y 
 * recorrido de un Árbol Binario de Búsqueda (ABB), además de la verificación 
 * de si el árbol está balanceado y el cálculo de su altura.
 * 
 * @author Brandon Alfaro
 * @date 2024-09-11
 * 
 * @license MIT
 * 
 * Copyright (c) 2024 Brandon Alfaro
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "ABB.hpp"

/**
 * @brief Constructor que inicializa el árbol vacío.
 */
ArbolBinarioBusqueda::ArbolBinarioBusqueda() : raiz(nullptr) {}

/**
 * @brief Función privada para insertar un nodo en el árbol.
 * 
 * Inserta un valor en el árbol binario de búsqueda de forma recursiva.
 * 
 * @param nodo Referencia al puntero del nodo actual.
 * @param valor Valor que se desea insertar.
 */
void ArbolBinarioBusqueda::insertarNodo(Nodo*& nodo, int valor) {
    if (nodo == nullptr) {
        nodo = new Nodo(valor);
    } else if (valor < nodo->dato) {
        insertarNodo(nodo->izquierdo, valor);
    } else {
        insertarNodo(nodo->derecho, valor);
    }
}

/**
 * @brief Función privada para realizar un recorrido en inorden.
 * 
 * Recorre e imprime los valores del árbol en orden ascendente.
 * 
 * @param nodo Puntero al nodo actual desde donde comienza el recorrido.
 */
void ArbolBinarioBusqueda::inOrden(Nodo* nodo) const {
    if (nodo != nullptr) {
        inOrden(nodo->izquierdo);
        cout << nodo->dato << " ";
        inOrden(nodo->derecho);
    }
}

/**
 * @brief Función privada para buscar un nodo en el árbol.
 * 
 * Busca si un valor está presente en el árbol binario de búsqueda.
 * 
 * @param nodo Puntero al nodo actual donde se realiza la búsqueda.
 * @param valor El valor que se está buscando.
 * @return true Si el valor se encuentra en el árbol.
 * @return false Si el valor no se encuentra en el árbol.
 */
bool ArbolBinarioBusqueda::buscarNodo(Nodo* nodo, int valor) const {
    if (nodo == nullptr) return false;
    if (nodo->dato == valor) return true;
    if (valor < nodo->dato) return buscarNodo(nodo->izquierdo, valor);
    return buscarNodo(nodo->derecho, valor);
}

/**
 * @brief Función privada para calcular la altura del árbol.
 * 
 * Calcula la altura de un subárbol de forma recursiva.
 * 
 * @param nodo Puntero al nodo actual.
 * @return La altura del subárbol.
 */
int ArbolBinarioBusqueda::altura(Nodo* nodo) const {
    if (nodo == nullptr) return 0;
    return 1 + max(altura(nodo->izquierdo), altura(nodo->derecho));
}

/**
 * @brief Función privada para verificar si el árbol está balanceado.
 * 
 * Verifica si la diferencia de altura entre los subárboles izquierdo y derecho
 * de cada nodo no supera 1.
 * 
 * @param nodo Puntero al nodo actual.
 * @return true Si el árbol está balanceado.
 * @return false Si el árbol no está balanceado.
 */
bool ArbolBinarioBusqueda::estaBalanceado(Nodo* nodo) const {
    if (nodo == nullptr) return true;

    int alturaIzquierda = altura(nodo->izquierdo);
    int alturaDerecha = altura(nodo->derecho);

    return abs(alturaIzquierda - alturaDerecha) <= 1 &&
           estaBalanceado(nodo->izquierdo) &&
           estaBalanceado(nodo->derecho);
}

/**
 * @brief Función privada auxiliar para eliminar un nodo en el árbol.
 * 
 * Busca y elimina el nodo que contiene el valor especificado.
 * 
 * @param nodo Puntero al nodo actual.
 * @param valor Valor que se desea eliminar.
 * @return Nodo* Puntero al nodo modificado después de la eliminación.
 */
Nodo* ArbolBinarioBusqueda::eliminarNodo(Nodo* nodo, int valor) {
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
            Nodo* temp = nodo->derecho;
            delete nodo;
            return temp;
        } else if (nodo->derecho == nullptr) {
            Nodo* temp = nodo->izquierdo;
            delete nodo;
            return temp;
        } else {
            Nodo* temp = encontrarMinimo(nodo->derecho);
            nodo->dato = temp->dato;
            nodo->derecho = eliminarNodo(nodo->derecho, temp->dato);
        }
    }
    return nodo;
}

/**
 * @brief Función privada auxiliar para encontrar el nodo con el valor mínimo.
 * 
 * Encuentra el nodo con el valor mínimo en el subárbol derecho.
 * 
 * @param nodo Puntero al nodo actual.
 * @return Nodo* Puntero al nodo con el valor mínimo.
 */
Nodo* ArbolBinarioBusqueda::encontrarMinimo(Nodo* nodo) {
    while (nodo->izquierdo != nullptr) {
        nodo = nodo->izquierdo;
    }
    return nodo;
}

/**
 * @brief Inserta un valor en el árbol.
 * 
 * Inserta un nuevo valor en el árbol binario de búsqueda.
 * 
 * @param valor El valor que se desea insertar.
 */
void ArbolBinarioBusqueda::insertar(int valor) {
    insertarNodo(raiz, valor);
}

/**
 * @brief Realiza un recorrido en inorden del árbol.
 * 
 * Recorre e imprime los valores del árbol en orden ascendente.
 */
void ArbolBinarioBusqueda::inOrden() const {
    inOrden(raiz);
    cout << endl;
}

/**
 * @brief Busca un valor en el árbol.
 * 
 * Verifica si un valor está presente en el árbol binario de búsqueda.
 * 
 * @param valor El valor a buscar.
 * @return true Si el valor se encuentra en el árbol.
 * @return false Si el valor no se encuentra en el árbol.
 */
bool ArbolBinarioBusqueda::buscar(int valor) const {
    return buscarNodo(raiz, valor);
}

/**
 * @brief Devuelve la altura del árbol.
 * 
 * Calcula la altura del árbol binario de búsqueda.
 * 
 * @return La altura del árbol.
 */
int ArbolBinarioBusqueda::altura() const {
    return altura(raiz);
}

/**
 * @brief Verifica si el árbol está balanceado.
 * 
 * Comprueba si el árbol binario de búsqueda está balanceado.
 * 
 * @return true Si el árbol está balanceado.
 * @return false Si el árbol no está balanceado.
 */
bool ArbolBinarioBusqueda::estaBalanceado() const {
    return estaBalanceado(raiz);
}

/**
 * @brief Elimina un valor del árbol.
 * 
 * Elimina el nodo que contiene el valor especificado en el árbol binario de búsqueda.
 * 
 * @param valor El valor que se desea eliminar.
 */
void ArbolBinarioBusqueda::eliminar(int valor) {
    raiz = eliminarNodo(raiz, valor);
}
