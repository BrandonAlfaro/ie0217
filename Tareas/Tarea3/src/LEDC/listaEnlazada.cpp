/**
 * @file listaEnlazada.cpp
 * @brief Implementación de la clase ListaEnlazada para gestionar una lista enlazada de canciones.
 * 
 * Este archivo contiene la implementación de la clase ListaEnlazada, que permite la gestión de 
 * una colección de objetos de tipo Cancion mediante una lista enlazada. Se pueden realizar 
 * operaciones como insertar canciones, eliminar canciones por nombre, modificar los atributos 
 * de una canción y recorrer la lista para imprimir su contenido.
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

#include "listaEnlazada.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase ListaEnlazada.
 * 
 * Inicializa la lista enlazada con la cabeza apuntando a nullptr.
 */
ListaEnlazada::ListaEnlazada() : cabeza(nullptr) {}

/**
 * @brief Destructor de la clase ListaEnlazada.
 * 
 * Libera toda la memoria dinámica asignada a la lista enlazada de canciones.
 */
ListaEnlazada::~ListaEnlazada() {
    liberarMemoria();
}

/**
 * @brief Inserta una canción al final de la lista enlazada.
 * 
 * @param cancion Puntero al objeto Cancion que se desea insertar en la lista.
 */
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

/**
 * @brief Elimina una canción de la lista por su nombre.
 * 
 * Busca la canción por su nombre y, si la encuentra, la elimina de la lista.
 * 
 * @param nombre El nombre de la canción que se desea eliminar.
 */
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

/**
 * @brief Modifica los atributos de una canción en la lista.
 * 
 * Busca una canción por su nombre y permite modificar su nombre, artista y duración.
 * 
 * @param nombre El nombre de la canción que se desea modificar.
 */
void ListaEnlazada::modificarCancion(const string& nombre) {
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        if (actual->cancion->getNombre() == nombre) {
            string nuevoNombre, nuevoArtista;
            float nuevaDuracion;

            cout << "Ingrese el nuevo nombre de la canción: ";
            getline(cin, nuevoNombre);
            cout << "Ingrese el nuevo nombre del artista: ";
            getline(cin, nuevoArtista);
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

/**
 * @brief Imprime la lista de canciones.
 * 
 * Recorre la lista enlazada e imprime los detalles de cada canción (nombre, artista, duración).
 */
void ListaEnlazada::imprimirLista() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->cancion->getNombre() << " - " << actual->cancion->getArtista()
                  << " (" << actual->cancion->getDuracion() << " min)\n";
        actual = actual->siguiente;
    }
}

/**
 * @brief Libera toda la memoria dinámica asignada a la lista enlazada.
 * 
 * Recorre la lista enlazada, liberando la memoria de cada nodo y la canción asociada.
 */
void ListaEnlazada::liberarMemoria() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp->cancion;
        delete temp;
    }
}
