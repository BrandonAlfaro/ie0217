// Implementación Optimizada de Bubble Sort en C++

// Bibliotecas
#include <iostream>

using namespace std;


// Función Bubble Sort Optimizada
void bubbleSort(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    // Bucle para accesar a cada elemento del arreglo
    for (int step = 0; step < (size - 1); ++step) // Inicio = 0, Fin < (size - 1), step + 1. El 'size - 1' es porque se ocupan n-1 pasos o comparaciones
    {
        int swapped = 0; // Indica si se intercambió un número.
        
        // Bucle para comparar elementos del arreglo
        for (int i = 0; i < (size - step - 1); ++i) // (size - step - 1). El '-1' es para que no acceda mas allá del array. '-step' es porque se acomoda de derecha a izquierda, esto evita comparaciones ya acomodadas.
        {
            
            // Compara dos elementos consecutivos
            if (array[i] > array[i + 1]) // > orden ascendente, < orden descendente
            {
                // Cambia los elementos de posición
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                
                swapped = 1;
            }
        }

        if (swapped == 0) // Si swapped = 0 no se intercambiaron números
            break; // Termina el bucle
    }
}

// Función Imprimir Arreglo
void printArray(int array[], int size) // Arreglo de números enteros, tamaño del arreglo
{
    for (int i = 0; i < size; ++i) // Inicio = 0, Fin < size, i + 1
    {
        cout << " " << array[i]; // Imprime el elemento i del arreglo
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
    bubbleSort(data, size);

    // Impresión de arreglo
    cout << "Arreglo ordenado en orden ascendente: \n";
    printArray(data, size);

    return 0;
}