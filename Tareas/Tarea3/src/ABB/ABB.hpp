/**
 * @file ABB.hpp
 * @brief Definición de la clase ArbolBinarioBusqueda para la implementación de un Árbol Binario de Búsqueda (ABB).
 * 
 * Este archivo contiene la definición de la clase ArbolBinarioBusqueda, que incluye
 * operaciones para insertar, eliminar, buscar, y recorrer un Árbol Binario de Búsqueda (ABB).
 * También permite verificar si el árbol está balanceado y calcular su altura.
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

#ifndef ABB_HPP
#define ABB_HPP

#include <iostream>
#include "nodo.hpp"

using namespace std;

/**
 * @brief Clase que implementa un Árbol Binario de Búsqueda (ABB).
 * 
 * La clase permite realizar operaciones como insertar, eliminar, buscar valores, y realizar 
 * recorridos en un Árbol Binario de Búsqueda (ABB). También se incluyen métodos para calcular
 * la altura del árbol y verificar si está balanceado.
 */
class ArbolBinarioBusqueda {
    private:
        Nodo* raiz; /**< Puntero al nodo raíz del árbol */

        /**
         * @brief Función privada para insertar un nodo en el árbol.
         * 
         * Inserta un valor en la ubicación correcta del árbol.
         * 
         * @param nodo Puntero al nodo actual donde se realiza la inserción.
         * @param valor El valor que se va a insertar.
         */
        void insertarNodo(Nodo*& nodo, int valor);

        /**
         * @brief Función privada para realizar un recorrido en inorden.
         * 
         * Recorre e imprime los valores del árbol en orden ascendente.
         * 
         * @param nodo Puntero al nodo actual desde donde comienza el recorrido.
         */
        void inOrden(Nodo* nodo) const;

        /**
         * @brief Función privada para buscar un valor en el árbol.
         * 
         * Busca un valor en el árbol binario de búsqueda.
         * 
         * @param nodo Puntero al nodo actual.
         * @param valor El valor a buscar.
         * @return true Si el valor se encuentra en el árbol.
         * @return false Si el valor no se encuentra en el árbol.
         */
        bool buscarNodo(Nodo* nodo, int valor) const;

        /**
         * @brief Función privada para calcular la altura del árbol.
         * 
         * Calcula y devuelve la altura de un subárbol.
         * 
         * @param nodo Puntero al nodo actual.
         * @return La altura del subárbol.
         */
        int altura(Nodo* nodo) const;

        /**
         * @brief Función privada para verificar si el árbol está balanceado.
         * 
         * Comprueba si el árbol está balanceado, verificando la diferencia de altura
         * entre los subárboles izquierdo y derecho.
         * 
         * @param nodo Puntero al nodo actual.
         * @return true Si el árbol está balanceado.
         * @return false Si el árbol no está balanceado.
         */
        bool estaBalanceado(Nodo* nodo) const;

        /**
         * @brief Función privada para eliminar un nodo del árbol.
         * 
         * Elimina el nodo con el valor especificado.
         * 
         * @param nodo Puntero al nodo actual.
         * @param valor Valor del nodo que se desea eliminar.
         * @return Nodo* Puntero al nodo actualizado después de la eliminación.
         */
        Nodo* eliminarNodo(Nodo* nodo, int valor);

        /**
         * @brief Función privada para encontrar el nodo con el valor mínimo.
         * 
         * Encuentra y devuelve el nodo con el valor mínimo en un subárbol.
         * 
         * @param nodo Puntero al nodo actual.
         * @return Nodo* Puntero al nodo con el valor mínimo.
         */
        Nodo* encontrarMinimo(Nodo* nodo);

    public:
        /**
         * @brief Constructor que inicializa el árbol vacío.
         */
        ArbolBinarioBusqueda();

        /**
         * @brief Inserta un valor en el árbol.
         * 
         * Inserta un valor en el Árbol Binario de Búsqueda.
         * 
         * @param valor El valor a insertar.
         */
        void insertar(int valor);

        /**
         * @brief Realiza un recorrido en inorden.
         * 
         * Recorre e imprime los valores del árbol en orden ascendente.
         */
        void inOrden() const;

        /**
         * @brief Busca un valor en el árbol.
         * 
         * Verifica si un valor está presente en el árbol binario de búsqueda.
         * 
         * @param valor El valor a buscar.
         * @return true Si el valor se encuentra en el árbol.
         * @return false Si el valor no se encuentra en el árbol.
         */
        bool buscar(int valor) const;

        /**
         * @brief Devuelve la altura del árbol.
         * 
         * Calcula y devuelve la altura del árbol binario de búsqueda.
         * 
         * @return La altura del árbol.
         */
        int altura() const;

        /**
         * @brief Verifica si el árbol está balanceado.
         * 
         * Comprueba si el árbol está balanceado.
         * 
         * @return true Si el árbol está balanceado.
         * @return false Si el árbol no está balanceado.
         */
        bool estaBalanceado() const;

        /**
         * @brief Elimina un valor del árbol.
         * 
         * Elimina un nodo que contiene el valor especificado del árbol binario de búsqueda.
         * 
         * @param valor El valor que se desea eliminar.
         */
        void eliminar(int valor);
};

#endif // ABB_HPP
