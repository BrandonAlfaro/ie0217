// Implementación de Insertion Sort en C++

// Biblioteca
#include <iostream>

using namespace std;


// Función Imprimir Arreglo
void printArray(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    for (int i = 0; i < size; i++) // Inicio = 0, Fin < size, i + 1
    {
        cout << array[i] << " "; // Imprime el elemento i del arreglo
    }
    cout << endl; // Imprime salto de línea
}

// Función Insertion Sort
void insertionSort(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    for (int step = 1; step < size; step++) // Inicio = step = 1, Fin < size, step + 1
    {
        int key = array[step];
        int j = step - 1;

        // Compara key con cada elemento a la izquierda hasta que sea mayor
        while (key < array[j] && j >= 0) // Mientras (key < arreglo[j]) y (j >= 0). < orden ascendente, > orden descendente
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

// Función Main
int main()
{
    int data[] = {-2, 45, 0, 11, -9}; // Arreglo

    // Calcula el tamaño del arreglo sin importar el tipo de dato del arreglo
    int size = sizeof(data) / sizeof(data[0]);

    // Llamada de función
    insertionSort(data, size);

    // Impresión de arreglo
    cout << "Arreglo ordenado en orden ascendente: \n";
    printArray(data, size);

    return 0;
}