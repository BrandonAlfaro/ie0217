/**
* @file Estadistica_Arreglo.hpp
* @brief Declaración de la clase y métodos para el cálculo estadístico y busqueda de un número.
* 
* Este archivo contiene la clase y métodos para realizar el cálculo de las estadísticas
* y busqueda de un número en el arreglo proporcionado por el usuario.
* 
* @author Brandon Alfaro
* @date 2024-08-30
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

#ifndef ESTADISTICAS_HPP
#define ESTADISTICAS_HPP

#include <iostream>
#include <vector>

/**
* @class Estadisticas
* @brief Clase para calcular estadísticas básicas de un arreglo y busqueda de números.
* 
* La clase Estadisticas permite realizar cálculos estadísticos de un arreglo de números, como
* la suma, el promedio, el valor máximo, el valor mínimo y la búsqueda de un número específico.
*/

class Estadisticas {
public:

    /**
    * @brief Constructor de la clase Estadisticas.
    * @param numeros Puntero al arreglo de números sobre el cual se realizarán los cálculos.
    * @param cantidadNumeros Tamaño del arreglo de números.
    */

    Estadisticas(double* numeros, int cantidadNumeros);

    /**
    * @brief Calcula la suma de los números en el arreglo.
    * @return La suma de los números en el arreglo.
    */

    double calcularSuma();

    /**
    * @brief Calcula el promedio de los números en el arreglo.
    * @return El promedio de los números en el arreglo.
    */

    double calcularPromedio();

    /**
    * @brief Encuentra el valor máximo en el arreglo de números.
    * @return El valor máximo en el arreglo.
    */

    double encontrarMaximo();

    /**
    * @brief Encuentra el valor mínimo en el arreglo de números.
    * @return El valor mínimo en el arreglo.
    */

    double encontrarMinimo();

    /**
    * @brief Busca un número específico en el arreglo.
    * @param numero El número a buscar en el arreglo.
    * @return true si el número se encuentra en el arreglo, false en caso contrario.
    */

    bool buscarNumero(double numero);

private:
    double* numeros;  ///< Puntero al arreglo de números.
    int cantidadNumeros;   ///< Tamaño del arreglo de números.
};

#endif