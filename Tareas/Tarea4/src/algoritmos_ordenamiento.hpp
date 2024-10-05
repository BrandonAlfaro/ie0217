/**
 * @file algoritmos_ordenamiento.hpp
 * @brief Declaraciones de funciones de algoritmos de ordenamiento.
 * 
 * Este archivo contiene las declaraciones de varias funciones plantilla (template) para
 * realizar el ordenamiento de vectores utilizando diferentes algoritmos como Bubble Sort,
 * Insertion Sort, Quick Sort, Selection Sort y la función de ordenamiento estándar (STL).
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

#ifndef ALGORITMOS_ORDENAMIENTO_HPP
#define ALGORITMOS_ORDENAMIENTO_HPP

#include <vector>

using namespace std;

/**
 * @brief Ordena un vector utilizando el algoritmo Bubble Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void bubbleSort(vector<T>& array);

/**
 * @brief Ordena un vector utilizando el algoritmo Insertion Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void insertionSort(vector<T>& array);

/**
 * @brief Ordena un vector utilizando el algoritmo Quick Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 * @param low Índice inicial del subarreglo que se va a ordenar.
 * @param high Índice final del subarreglo que se va a ordenar.
 */
template <typename T>
void quickSort(vector<T>& array, int low, int high);

/**
 * @brief Ordena un vector utilizando el algoritmo Selection Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void selectionSort(vector<T>& array);

/**
 * @brief Ordena un vector utilizando la función de ordenamiento estándar (STL) de C++.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void stlSort(vector<T>& array);

#endif //ALGORITMOS_ORDENAMIENTO_HPP
