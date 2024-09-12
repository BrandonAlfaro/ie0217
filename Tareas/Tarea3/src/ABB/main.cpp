/**
 * @file main.cpp
 * @brief Programa principal para la interacción con el Árbol Binario de Búsqueda (ABB).
 * 
 * Este archivo contiene el programa principal que permite al usuario interactuar
 * con un Árbol Binario de Búsqueda (ABB). Las operaciones que se pueden realizar
 * incluyen insertar, eliminar, buscar nodos, y verificar la altura y balance del árbol.
 * 
 * El usuario interactúa mediante un menú que le permite elegir entre diferentes opciones.
 * 
 * @author Brandon Alfaro
 * @date 2024-09-11
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

#include "ABB.hpp"
#include <iostream>

using namespace std;

/**
 * @brief Función principal para la ejecución del programa.
 * 
 * El programa crea un Árbol Binario de Búsqueda (ABB) y permite al usuario realizar
 * diversas operaciones a través de un menú interactivo. El menú permite insertar
 * nodos, realizar recorridos en inorden, eliminar nodos, buscar nodos, obtener la
 * altura del árbol y verificar si el árbol está balanceado.
 * 
 * @return int Código de retorno del programa (0 si finaliza correctamente).
 */
int main() {
    ArbolBinarioBusqueda arbol; // Instancia arbol

    // Insertar nodos predeterminados
    arbol.insertar(15);
    arbol.insertar(10);
    arbol.insertar(20);
    arbol.insertar(8);
    arbol.insertar(12);
    arbol.insertar(17);
    arbol.insertar(25);

    int opcion, valor; // Declara variables

    // Menú interactivo
    do {
        // Mostrar menú
        cout << endl;
        cout << "1. Insertar un nodo\n";
        cout << "2. Recorrido en Inorden\n";
        cout << "3. Eliminar un valor\n";
        cout << "4. Buscar un valor\n";
        cout << "5. Altura del árbol\n";
        cout << "6. Verificar si el árbol está balanceado\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cout << endl;

        // Selección de acción basada en la opción del usuario
        switch (opcion) {
            case 1:
                cout << "Ingrese un valor: ";
                cin >> valor;
                arbol.insertar(valor);
                break;
            case 2:
                arbol.inOrden();
                break;
            case 3:
                cout << "Ingrese un valor a eliminar: ";
                cin >> valor;
                if (arbol.buscar(valor)) {
                    cout << "Valor encontrado y eliminado.\n";
                    arbol.eliminar(valor);
                } else {
                    cout << "Valor no encontrado.\n";
                }
                break;
            case 4:
                cout << "Ingrese un valor a buscar: ";
                cin >> valor;
                if (arbol.buscar(valor)) {
                    cout << "Valor encontrado.\n";
                } else {
                    cout << "Valor no encontrado.\n";
                }
                break;
            case 5:
                cout << "Altura del árbol: " << arbol.altura() << endl;
                break;
            case 6:
                if (arbol.estaBalanceado()) {
                    cout << "El árbol está balanceado.\n";
                } else {
                    cout << "El árbol no está balanceado.\n";
                }
                break;
            case 7:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }

    } while (opcion != 7); // Repite el menú hasta que el usuario seleccione la opción 7 (Salir)

    return 0;
}
