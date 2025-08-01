/**
 * @file random_data.cpp
 * @brief Implementación de la función para generar datos aleatorios.
 * 
 * Este archivo contiene la implementación de una función que genera un número
 * determinado de datos aleatorios enteros dentro de un rango predefinido.
 * 
 * @author Brandon Alfaro
 * @date 2024-10-04
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

#include "random_data.hpp"
#include <random>

/**
 * @brief Genera un vector de números aleatorios.
 * 
 * Esta función genera un vector de tamaño `n` con números enteros aleatorios 
 * entre 1 y 10,000 utilizando el generador Mersenne Twister y una distribución 
 * uniforme.
 * 
 * @param n El número de elementos a generar.
 * @return Un vector con 'n' números aleatorios.
 */
vector<int> randomData(size_t n) {
    vector<int> datos(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 10000); // Rango de valores aleatorios

    for (size_t i = 0; i < n; ++i) {
        datos[i] = dist(gen);
    }
    return datos;
}
