// Implementación de Selection Sort en C++

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

// Función Imprimir Arreglo
void printArray(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    for (int i = 0; i < size; i++) // Inicio = 0, Fin < size, i + 1
    {
        cout << array[i] << " "; // Imprime el elemento i del arreglo
    }
    cout << endl; // Imprime salto de línea
}

// Función Selection Sort
void selectionSort(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    for (int step = 0; step < size - 1; step++) 
    {
        int min_idx = step; // Indica la posición del número menor
        for (int i = step + 1; i < size; i++) // Inicio = steop + 1, Fin < size, i + 1
        {
            // Encuentra el mínimo en un bucle
            if (array[i] < array[min_idx]) // < orden ascendente, > orden descendente
            {
                min_idx = i;
            }
        }

        swap(&array[min_idx], &array[step]); // Coloca el número menor en la posición correcta
    }
}

// Función Main
int main()
{
    int data[] = {-2, 45, 0, 11, -9}; // Arreglo

    // Calcula el tamaño del arreglo sin importar el tipo de dato del arreglo
    int size = sizeof(data) / sizeof(data[0]);

    // Llamada de función
    selectionSort(data, size);

    // Impresión de arreglo
    cout << "Arreglo ordenado en orden ascendente: \n";
    printArray(data, size);

    return 0;
}
