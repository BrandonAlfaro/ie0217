#include "algoritmos_ordenamiento.hpp"
#include <algorithm>

using namespace std;

// Bubble Sort
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
// Para optimizacion no genera instancias de otro tipo de datos.
template void bubbleSort<int>(vector<int>&);

// Insertion Sort
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
// Para optimizacion no genera instancias de otro tipo de datos.
template void insertionSort<int>(vector<int>&);

// Función auxiliar para la partición en Quick Sort
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
// Quick Sort
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

// Selection Sort
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

// STL Sort
template <typename T>
void stlSort(vector<T>& array) {
    sort(array.begin(), array.end());  // Llamada a sort
}
// Instanciación explícita de la plantilla para int
template void stlSort<int>(vector<int>&);
