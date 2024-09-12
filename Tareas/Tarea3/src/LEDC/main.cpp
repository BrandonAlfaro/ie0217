/**
 * @file main.cpp
 * @brief Programa principal para gestionar una lista enlazada de canciones.
 * 
 * Este archivo contiene el programa principal que permite al usuario interactuar
 * con una lista enlazada de canciones. Las operaciones que se pueden realizar
 * incluyen insertar nuevas canciones, eliminar canciones por su nombre, modificar
 * los datos de una canción existente e imprimir la lista completa de canciones.
 * 
 * El usuario interactúa mediante un menú simple que permite elegir entre diferentes
 * opciones para gestionar las canciones.
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

#include "listaEnlazada.hpp"
#include "cancion.hpp"
#include <iostream> // Para usar cout y cin
#include <string>  // Para usar getline

using namespace std;

/**
 * @brief Función que muestra el menú de opciones al usuario.
 * 
 * Presenta un menú que permite al usuario seleccionar diferentes operaciones
 * para gestionar la lista enlazada de canciones, como insertar, eliminar, modificar
 * o imprimir la lista de canciones.
 */
void menu() {
    // Menú
    cout << endl;
    cout << "1. Insertar una nueva canción\n";
    cout << "2. Eliminar una canción\n";
    cout << "3. Modificar los datos de una canción existente\n";
    cout << "4. Imprimir la lista de canciones\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}

/**
 * @brief Función principal que permite la gestión de una lista enlazada de canciones.
 * 
 * El programa principal crea una instancia de `ListaEnlazada` para gestionar canciones.
 * El usuario puede interactuar con la lista a través de un menú, eligiendo opciones
 * como insertar una nueva canción, eliminar una canción, modificar una canción
 * existente o imprimir la lista completa. El programa termina cuando se selecciona la
 * opción de salir.
 * 
 * @return int Código de retorno del programa (0 si finaliza correctamente).
 */
int main() {
    ListaEnlazada lista;  // Instancia de la lista enlazada de canciones

    int opcion;  // Variable para almacenar la opción seleccionada por el usuario
    do {
        menu();
        cin >> opcion;
        cout << endl;
        cin.ignore();

        if (opcion == 1) {
            string nombre, artista;
            float duracion;

            // getline permite que las entradas tengan espacios
            cout << "Ingrese el nombre de la canción: ";
            getline(cin, nombre);

            cout << "Ingrese el nombre del artista: ";
            getline(cin, artista);

            cout << "Ingrese la duración de la canción en minutos: ";
            cin >> duracion;

            lista.insertar(new Cancion(nombre, artista, duracion));
        } else if (opcion == 2) {
            string nombre;
            cout << "Ingrese el nombre de la canción a eliminar: ";
            getline(cin, nombre);
            lista.eliminarPorNombre(nombre);
        } else if (opcion == 3) {
            string nombre;
            cout << "Ingrese el nombre de la canción a modificar: ";
            getline(cin, nombre);
            lista.modificarCancion(nombre);
        } else if (opcion == 4) {
            lista.imprimirLista();
        }
    } while (opcion != 5);  // El programa continúa hasta que el usuario elige la opción 5

    cout << "Saliendo y liberando memoria...\n";
    return 0;
}
