/**
 * @file cancion.hpp
 * @brief Definición de la clase Cancion para representar una canción.
 * 
 * Este archivo contiene la definición de la clase Cancion, que incluye atributos
 * y métodos para gestionar los datos de una canción, como su nombre, artista y
 * duración.
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

#ifndef CANCION_HPP
#define CANCION_HPP

#include <string>

using namespace std;

/**
 * @brief Clase que representa una canción con atributos como nombre, artista y duración.
 * 
 * La clase Cancion permite almacenar y manipular la información de una canción, como
 * su nombre, artista y duración. También proporciona métodos para acceder y modificar
 * estos atributos.
 */
class Cancion {
private:
    string nombre; /**< Nombre de la canción */
    string artista; /**< Nombre del artista de la canción */
    float duracion; /**< Duración de la canción en minutos */

public:
    /**
     * @brief Constructor que inicializa una canción.
     * 
     * @param nombre Nombre de la canción.
     * @param artista Nombre del artista.
     * @param duracion Duración de la canción en minutos.
     */
    Cancion(const string& nombre, const string& artista, float duracion);

    /**
     * @brief Obtiene el nombre de la canción.
     * 
     * @return El nombre de la canción.
     */
    string getNombre() const;

    /**
     * @brief Obtiene el nombre del artista de la canción.
     * 
     * @return El nombre del artista.
     */
    string getArtista() const;

    /**
     * @brief Obtiene la duración de la canción.
     * 
     * @return La duración de la canción en minutos.
     */
    float getDuracion() const;

    /**
     * @brief Modifica el nombre de la canción.
     * 
     * @param nuevoNombre El nuevo nombre de la canción.
     */
    void setNombre(const string& nuevoNombre);

    /**
     * @brief Modifica el nombre del artista de la canción.
     * 
     * @param nuevoArtista El nuevo nombre del artista.
     */
    void setArtista(const string& nuevoArtista);

    /**
     * @brief Modifica la duración de la canción.
     * 
     * @param nuevaDuracion La nueva duración de la canción en minutos.
     */
    void setDuracion(float nuevaDuracion);
};

#endif // CANCION_HPP
