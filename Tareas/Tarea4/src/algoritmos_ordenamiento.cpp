/**
 * @file algoritmos_ordenamiento.cpp
 * @brief Implementación de funciones de algoritmos de ordenamiento.
 * 
 * Este archivo contiene las implementaciones de varias funciones plantilla (template)
 * que realizan el ordenamiento de vectores utilizando diferentes algoritmos, como 
 * Bubble Sort, Insertion Sort, Quick Sort, Selection Sort y la función de ordenamiento 
 * estándar (STL).
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

#include "algoritmos_ordenamiento.hpp"
#include <algorithm>

using namespace std;

/**
 * @brief Ordena un vector utilizando el algoritmo Bubble Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void bubbleSort(vector<T>& array) {
    bool swapped;
    for (size_t i = 0; i < array.size() - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < array.size() - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
// Para optimización no genera instancias de otro tipo de datos.
template void bubbleSort<int>(vector<int>&);

/**
 * @brief Ordena un vector utilizando el algoritmo Insertion Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void insertionSort(vector<T>& array) {
    for (size_t i = 1; i < array.size(); i++) {
        T key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
// Para optimización no genera instancias de otro tipo de datos.
template void insertionSort<int>(vector<int>&);

/**
 * @brief Función auxiliar para la partición en el algoritmo Quick Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 * @param low Índice inicial del subarreglo.
 * @param high Índice final del subarreglo.
 * @return El índice de partición.
 */
template <typename T>
int partition(vector<T>& array, int low, int high) {
    T pivot = array[high]; // Elige el último elemento como pivote
    int i = (low - 1);   // Índice del elemento más pequeño

    for (int j = low; j <= high - 1; ++j) {
        if (array[j] < pivot) {
            ++i;
            swap(array[i], array[j]); // Intercambia si el elemento actual es menor que el pivote
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

/**
 * @brief Ordena un vector utilizando el algoritmo Quick Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 * @param low Índice inicial del subarreglo que se va a ordenar.
 * @param high Índice final del subarreglo que se va a ordenar.
 */
template <typename T>
void quickSort(vector<T>& array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Índice de partición
        quickSort(array, low, pi - 1);        // Ordenar los elementos antes de la partición
        quickSort(array, pi + 1, high);       // Ordenar los elementos después de la partición
    }
}
// Instanciación explícita de la plantilla para int
template void quickSort<int>(vector<int>&, int, int);

/**
 * @brief Ordena un vector utilizando el algoritmo Selection Sort.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void selectionSort(vector<T>& array) {
    size_t n = array.size();  // Usa size_t

    for (size_t i = 0; i < n - 1; ++i) {
        size_t min_idx = i;  // Declarar correctamente min_idx

        // Encontrar el índice del elemento mínimo en la parte no ordenada
        for (size_t j = i + 1; j < n; ++j) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }

        // Intercambiar el elemento mínimo encontrado con el primer elemento
        swap(array[i], array[min_idx]);
    }
}
// Instanciación explícita de la plantilla para int
template void selectionSort<int>(vector<int>&);

/**
 * @brief Ordena un vector utilizando la función de ordenamiento estándar (STL) de C++.
 * 
 * @tparam T Tipo de los elementos del vector.
 * @param array Referencia al vector que se va a ordenar.
 */
template <typename T>
void stlSort(vector<T>& array) {
    sort(array.begin(), array.end());  // Llamada a sort
}
// Instanciación explícita de la plantilla para int
template void stlSort<int>(vector<int>&);
