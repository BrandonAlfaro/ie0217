/**
* @file Estadistica_Arreglo.hpp
* @brief Programa principal para el cálculo de estadísticas y busqueda de números.
* 
* El progrma permite realizar el cálculo de varios parámetros estadísticos y buscar un
* número dentro del arreglo. El arreglo es proporcionado desde la ventana de comandos al
* ejecutar el código. 
* 
* @author Brandon Alfaro
* @date 2024-08-30
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

#include "Estadistica_Arreglo.hpp"

using namespace std;

int main(int argc, char* argv[]) {

    // Convierte los carácteres en números

    double numeros[argc - 1];

    for (int i = 1; i < argc; i++) {
        numeros[i - 1] = stod(*(argv + i));
    }

    double* num_ptr = numeros;

    Estadisticas estadistica(num_ptr, argc - 1);

    int opcion;
    do {
        cout << endl << "Menú:" << endl;
        cout << endl << "1. Mostrar Estadísticas" << endl;
        cout << endl << "2. Buscar un Número en el Arreglo" << endl;
        cout << endl << "3. Salir" << endl;
        cout << endl << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Suma: " << estadistica.calcularSuma() << endl;
                cout << "Promedio: " << estadistica.calcularPromedio() << endl;
                cout << "Máximo: " << estadistica.encontrarMaximo() << endl;
                cout << "Mínimo: " << estadistica.encontrarMinimo() << endl;
                break;

            case 2: {
                double numero;
                cout << "Ingrese un número para buscar: ";
                cin >> numero;
                if (estadistica.buscarNumero(numero)) {
                    cout << "El número " << numero << " fue encontrado en el arreglo." << endl;
                } else {
                    cout << "El número " << numero << " no fue encontrado en el arreglo." << endl;
                }
                break;
            }

            case 3:
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opción no válida. Por favor intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
