// Inclusión de bibliotecas y archivos de cabecera
#include "algoritmos_ordenamiento.hpp"  // Algoritmos personalizados de ordenamiento
#include "random_data.hpp"              // Función para generar datos aleatorios
#include <iostream>                     // Para operaciones de entrada y salida
#include <vector>                       // Para usar el tipo de datos std::vector
#include <chrono>                       // Para medir el tiempo de ejecución
#include <iomanip>                      // Para manipular el formato de salida, como la precisión de los decimales
#include <algorithm>                    // Incluye std::sort y otras funciones de algoritmos estándar
#include <exception>                    // Para manejar excepciones, como std::bad_alloc
#include <regex>                        // Para expresiones regulares, utilizadas en validación de entrada

// Uso del espacio de nombres estándar para evitar la necesidad de prefijar std::
using namespace std;

// Template para medir el tiempo de ejecución de una función de ordenamiento que no requiere índices
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data) {
    auto start = chrono::high_resolution_clock::now();  // Inicia el temporizador
    sort_function(data);                                // Ejecuta la función de ordenamiento
    auto end = chrono::high_resolution_clock::now();    // Detiene el temporizador
    chrono::duration<double> elapsed = end - start;     // Calcula el tiempo transcurrido
    return elapsed.count();                             // Devuelve el tiempo en segundos
}

// Template para medir el tiempo de ejecución de una función de ordenamiento que requiere índices
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data, int low, int high) {
    auto start = chrono::high_resolution_clock::now();
    sort_function(data, low, high);                     // Ordenamiento con índices, por ejemplo, Quick Sort
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    return elapsed.count();
}

// Función para validar la entrada del usuario (debe ser un número entero positivo)
bool isValidInput(const char* arg) {
    regex pattern("^\\d+$");                            // Regex solo acepta números enteros positivos
    return regex_match(arg, pattern);
}

// Función principal
int main(int argc, char* argv[]) {
    vector<size_t> sizes;                               // Vector para almacenar los tamaños de los conjuntos de datos

    // Procesamiento de argumentos de línea de comando
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            if (!isValidInput(argv[i])) {
                cerr << "Error: Todos los argumentos deben ser números enteros positivos.\n";
                return 1;                                // Termina el programa si la entrada no es válida
            }
            sizes.push_back(stoi(argv[i]));              // Convierte y almacena el tamaño
        }
    } else {
        sizes = {5000, 10000, 20000};                    // Tamaños predeterminados si no se proporcionan argumentos
    }

    // Bucle para procesar cada tamaño de conjunto de datos
    for (auto size : sizes) {
        vector<int> data = randomData(size);             // Genera datos aleatorios

        try {
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
            return 1;                                    // Termina el programa en caso de fallo de memoria
        }
    }

    return 0;                                           // Termina correctamente
}
