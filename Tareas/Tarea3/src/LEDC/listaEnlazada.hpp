/**
 * @file listaEnlazada.hpp
 * @brief Definición de la clase ListaEnlazada para gestionar una lista enlazada de canciones.
 * 
 * Este archivo contiene la definición de la clase ListaEnlazada, que implementa una lista enlazada
 * de objetos de tipo Cancion. Proporciona métodos para insertar, eliminar, modificar y mostrar
 * las canciones en la lista, así como para liberar la memoria asignada dinámicamente.
 * 
 * También incluye la definición de la clase Nodo, que es utilizada internamente para representar
 * los nodos de la lista enlazada.
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

#ifndef LISTA_ENLAZADA_HPP
#define LISTA_ENLAZADA_HPP

#include "cancion.hpp"

using namespace std;

/**
 * @brief Clase Nodo que representa un nodo en la lista enlazada.
 * 
 * Cada nodo contiene un puntero a un objeto Cancion y un puntero al siguiente nodo en la lista.
 */
class Nodo {
public:
    Cancion* cancion; /**< Puntero al objeto Cancion almacenado en el nodo */
    Nodo* siguiente; /**< Puntero al siguiente nodo en la lista */

    /**
     * @brief Constructor de la clase Nodo.
     * 
     * Inicializa un nodo con un puntero a una Cancion.
     * 
     * @param cancion Puntero al objeto Cancion que se almacenará en el nodo.
     */
    Nodo(Cancion* cancion) : cancion(cancion), siguiente(nullptr) {}
};

/**
 * @brief Clase ListaEnlazada que implementa una lista enlazada de canciones.
 * 
 * Proporciona operaciones para insertar, eliminar, modificar y mostrar las canciones en la lista,
 * además de un método para liberar la memoria asignada dinámicamente.
 */
class ListaEnlazada {
private:
    Nodo* cabeza; /**< Puntero al primer nodo de la lista enlazada */

public:
    /**
     * @brief Constructor de la clase ListaEnlazada.
     * 
     * Inicializa una lista enlazada vacía.
     */
    ListaEnlazada();

    /**
     * @brief Destructor de la clase ListaEnlazada.
     * 
     * Libera toda la memoria dinámica asignada a la lista enlazada de canciones.
     */
    ~ListaEnlazada();

    /**
     * @brief Inserta una canción al final de la lista enlazada.
     * 
     * @param cancion Puntero al objeto Cancion que se desea insertar en la lista.
     */
    void insertar(Cancion* cancion);

    /**
     * @brief Elimina una canción de la lista por su nombre.
     * 
     * Busca la canción por su nombre y, si la encuentra, la elimina de la lista.
     * 
     * @param nombre El nombre de la canción que se desea eliminar.
     */
    void eliminarPorNombre(const string& nombre);

    /**
     * @brief Modifica los atributos de una canción en la lista.
     * 
     * Busca una canción por su nombre y permite modificar su nombre, artista y duración.
     * 
     * @param nombre El nombre de la canción que se desea modificar.
     */
    void modificarCancion(const string& nombre);

    /**
     * @brief Imprime la lista de canciones.
     * 
     * Recorre la lista enlazada e imprime los detalles de cada canción (nombre, artista, duración).
     */
    void imprimirLista() const;

    /**
     * @brief Libera toda la memoria dinámica asignada a la lista enlazada.
     * 
     * Recorre la lista enlazada, liberando la memoria de cada nodo y la canción asociada.
     */
    void liberarMemoria();
};

#endif // LISTA_ENLAZADA_HPP
