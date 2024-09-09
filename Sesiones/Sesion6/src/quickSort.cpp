// Implemetación de Quick Sort en C++

// Bibliotecas
#include <iostream>

using namespace std;


// Función Swap
void swap(int *a, int *b) // Dirección de dos números
{
    // Cambia los elementos de posición
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función Partición
int partition(int array[], int low, int high) // // Arreglo de números enteros, posición mínima, posición máxima
{
    int pivot = array[high]; // Elige el último elemento como pivote
    
    int i = low - 1; // Índice del elemento en posición mínima

    // Recorre desde el primer elemento hasta el último
    for (int j = low; j < high; j++) 
    {
        // Coloca el pivote en la posición correcta
        if (array[j] <= pivot) 
        {
            i++; // Incrementa el índice de la posición más pequeña
            swap(&array[i], &array[j]); // Intercambia el elemento en la posición i con los menores o iguales al pivote
        }
    }

    // Coloca el pivot en su posición correcta
    swap(&array[i + 1], &array[high]);
    
    // Retorna la posición del pivot
    return i + 1;
}

// Función recursiva de Quick Sort
void quickSort(int array[], int low, int high) 
{
    if (low < high) 
    {
        int pi = partition(array, low, high); // Indice de partición. Encuentra la posición correcta del pivot

        // Llamada recursiva de Quick Sort
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Función Imprimir Arreglo
void printArray(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    for (int i = 0; i < size; i++) // Inicio = 0, Fin < size, i + 1
    {
        cout << array[i] << " "; // Imprime el elemento i del arreglo
    }
    cout << endl; // Imprime salto de línea
}

// Función Main
int main()
{
    int data[] = {-2, 45, 0, 11, -9}; // Arreglo

    // Calcula el tamaño del arreglo sin importar el tipo de dato del arreglo
    int size = sizeof(data) / sizeof(data[0]);

    // Llamada de función
    quickSort(data, 0, size - 1);

    // Impresión de arreglo
    cout << "Arreglo ordenado en orden ascendente: \n";
    printArray(data, size);

    return 0;
}
