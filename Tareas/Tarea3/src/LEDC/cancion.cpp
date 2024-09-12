/**
 * @file cancion.cpp
 * @brief Implementación de la clase Cancion para representar una canción en el sistema.
 * 
 * Este archivo contiene la implementación de la clase Cancion, que incluye métodos
 * para acceder y modificar los atributos de una canción como el nombre, el artista
 * y la duración.
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

#include "cancion.hpp"

using namespace std;

/**
 * @brief Constructor de la clase Cancion.
 * 
 * Inicializa una canción con un nombre, artista y duración especificados.
 * 
 * @param nombre El nombre de la canción.
 * @param artista El nombre del artista de la canción.
 * @param duracion La duración de la canción en minutos.
 */
Cancion::Cancion(const string& nombre, const string& artista, float duracion)
    : nombre(nombre), artista(artista), duracion(duracion) {}

/**
 * @brief Obtiene el nombre de la canción.
 * 
 * @return El nombre de la canción.
 */
string Cancion::getNombre() const {
    return nombre;
}

/**
 * @brief Obtiene el nombre del artista de la canción.
 * 
 * @return El nombre del artista.
 */
string Cancion::getArtista() const {
    return artista;
}

/**
 * @brief Obtiene la duración de la canción.
 * 
 * @return La duración de la canción en minutos.
 */
float Cancion::getDuracion() const {
    return duracion;
}

/**
 * @brief Establece un nuevo nombre para la canción.
 * 
 * @param nuevoNombre El nuevo nombre de la canción.
 */
void Cancion::setNombre(const string& nuevoNombre) {
    nombre = nuevoNombre;
}

/**
 * @brief Establece un nuevo nombre para el artista de la canción.
 * 
 * @param nuevoArtista El nuevo nombre del artista.
 */
void Cancion::setArtista(const string& nuevoArtista) {
    artista = nuevoArtista;
}

/**
 * @brief Establece una nueva duración para la canción.
 * 
 * @param nuevaDuracion La nueva duración de la canción en minutos.
 */
void Cancion::setDuracion(float nuevaDuracion) {
    duracion = nuevaDuracion;
}
