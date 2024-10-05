/**
 * @file main.cpp
 * @brief Programa principal para medir el rendimiento de varios algoritmos de ordenamiento.
 * 
 * Este programa genera datos aleatorios y mide el tiempo de ejecución de diferentes algoritmos 
 * de ordenamiento, incluyendo Bubble Sort, Insertion Sort, Quick Sort, Selection Sort y STL Sort. 
 * Se utiliza el tipo de datos std::vector y se hacen mediciones precisas del tiempo de ejecución 
 * con std::chrono.
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

#include "algoritmos_ordenamiento.hpp"  // Algoritmos personalizados de ordenamiento
#include "random_data.hpp"              // Función para generar datos aleatorios
#include <iostream>                     // Para operaciones de entrada y salida
#include <vector>                       // Para usar el tipo de datos std::vector
#include <chrono>                       // Para medir el tiempo de ejecución
#include <iomanip>                      // Para manipular el formato de salida, como la precisión de los decimales
#include <algorithm>                    // Incluye std::sort y otras funciones de algoritmos estándar
#include <exception>                    // Para manejar excepciones, como std::bad_alloc
#include <regex>                        // Para expresiones regulares, utilizadas en validación de entrada

using namespace std;

/**
 * @brief Mide el tiempo de ejecución de una función de ordenamiento.
 * 
 * @tparam Func Tipo de la función de ordenamiento que será pasada como argumento.
 * @param sort_function Función de ordenamiento a medir.
 * @param data Vector de datos a ordenar.
 * @return Tiempo de ejecución en segundos.
 */
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data) {
    auto start = chrono::high_resolution_clock::now();  // Inicia el temporizador
    sort_function(data);                                // Ejecuta la función de ordenamiento
    auto end = chrono::high_resolution_clock::now();    // Detiene el temporizador
    chrono::duration<double> elapsed = end - start;     // Calcula el tiempo transcurrido
    return elapsed.count();                             // Devuelve el tiempo en segundos
}

/**
 * @brief Mide el tiempo de ejecución de un algoritmo de ordenamiento.
 * 
 * Este template se utiliza específicamente para algoritmos como Quick Sort, que requieren 
 * índices de inicio y fin.
 * 
 * @tparam Func Tipo de la función de ordenamiento que será pasada como argumento.
 * @param sort_function Función de ordenamiento a medir.
 * @param data Vector de datos a ordenar.
 * @param low Índice inferior del subarreglo a ordenar.
 * @param high Índice superior del subarreglo a ordenar.
 * @return Tiempo de ejecución en segundos.
 */
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data, int low, int high) {
    auto start = chrono::high_resolution_clock::now();
    sort_function(data, low, high);                     // Ordenamiento con índices
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    return elapsed.count();
}

/**
 * @brief Función principal del programa.
 * 
 * El programa genera conjuntos de datos de diferentes tamaños y mide el tiempo de ejecución
 * de los algoritmos de ordenamiento Bubble Sort, Insertion Sort, Quick Sort, Selection Sort,
 * y STL Sort. Los tiempos de ejecución se muestran en la consola.
 * 
 * @return int Devuelve 0 si el programa finaliza correctamente.
 */
int main() {
    vector<size_t> sizes = {1000, 5000, 10000, 50000};  // Tamaños de los conjuntos de datos

    for (const size_t& size : sizes) {
        try {
            vector<int> data = randomData(size);  // Genera datos aleatorios

            cout << "Tamaño del conjunto de datos: " << size << "\n";

            // Bubble Sort
            vector<int>* bubble_data = new vector<int>(data);
            double bubble_time = measure_sort_time(bubbleSort<int>, *bubble_data);
            cout << fixed << setprecision(4) << "Bubble Sort: " << bubble_time << " segundos\n";
            delete bubble_data;

            // Insertion Sort
            vector<int>* insertion_data = new vector<int>(data);
            double insertion_time = measure_sort_time(insertionSort<int>, *insertion_data);
            cout << "Insertion Sort: " << insertion_time << " segundos\n";
            delete insertion_data;

            // Quick Sort
            vector<int>* quick_data = new vector<int>(data);
            double quick_time = measure_sort_time(quickSort<int>, *quick_data, 0, quick_data->size() - 1);
            cout << "Quick Sort: " << quick_time << " segundos\n";
            delete quick_data;

            // Selection Sort
            vector<int>* selection_data = new vector<int>(data);
            double selection_time = measure_sort_time(selectionSort<int>, *selection_data);
            cout << "Selection Sort: " << selection_time << " segundos\n";
            delete selection_data;

            // STL Sort
            vector<int>* stl_data = new vector<int>(data);
            double stl_time = measure_sort_time([](vector<int>& stl_data) { sort(stl_data.begin(), stl_data.end()); }, *stl_data);
            cout << "STL Sort: " << stl_time << " segundos\n";
            delete stl_data;

            cout << "---------------------------------------------\n";

        } catch (const bad_alloc& e) {
            cerr << "Error: Fallo en la asignación de memoria para un tamaño de " << size << " elementos." << endl;
            return 1;  // Termina el programa en caso de fallo de memoria
        }
    }

    return 0;  // Termina correctamente
}
