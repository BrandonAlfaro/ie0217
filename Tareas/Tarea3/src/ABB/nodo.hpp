/**
 * @file nodo.hpp
 * @brief Definición de la estructura Nodo para el Árbol Binario de Búsqueda (ABB).
 * 
 * Este archivo contiene la definición de la estructura Nodo, que representa
 * un nodo individual de un Árbol Binario de Búsqueda (ABB). Cada nodo contiene
 * un valor, un puntero al nodo izquierdo y un puntero al nodo derecho.
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

#ifndef NODO_HPP
#define NODO_HPP

/**
 * @brief Estructura que representa un nodo en el Árbol Binario de Búsqueda (ABB).
 * 
 * Cada nodo contiene un valor (dato) y dos punteros: uno al nodo izquierdo y otro
 * al nodo derecho.
 */
struct Nodo {
    int dato; /**< Valor almacenado en el nodo */
    Nodo* izquierdo; /**< Puntero al nodo izquierdo */
    Nodo* derecho; /**< Puntero al nodo derecho */

    /**
     * @brief Constructor que inicializa un nodo con un valor dado.
     * 
     * @param valor Valor que será almacenado en el nodo.
     */
    Nodo(int valor) : dato(valor), izquierdo(nullptr), derecho(nullptr) {}
};

#endif // NODO_HPP
