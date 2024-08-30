/**
* @file main.cpp
* @brief Programa principal para la conversión de unidades de longitud, masa y temperatura.
* 
* El programa permite convertir valores entre diferentes prefijos de 
* longitud, masa, y entre diferentes escalas de temperatura. El usuario puede seleccionar 
* la unidad de medida y los prefijos o escalas para realizar la conversión deseada.
* 
* @author Brandon Alfaro
* @date 2024-08-29
* 
* @license MIT
* 
* Copyright (c) 2024 Tu Nombre
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

#include <iostream>
#include "Conversiones.hpp"
#include <iomanip>

using namespace std;

/**
 * @brief Estructura global para parámetros de conversión.
 */

Conversion conv;
int opcion;
char prefijo;
char escala;


void mostrarMenu() {

    cout << "Conversion de unidades:" << endl;
    cout << "Opción 1: Convertir entre diferentes unidades de longitud." << endl;
    cout << "Opción 2: Convertir entre diferentes unidades de peso." << endl;
    cout << "Opción 3: Convertir entre diferentes unidades de temperatura." << endl;
    cout << "Opción 4: Salir del programa." << endl;

}

void obtenerOpcion() {

    bool condicion = true;
    while (condicion)
    {
        cout << "Digite la opcion escogida: ";
        cin >> opcion;
        cout << endl;

        if (opcion == 1) {
            conv.unidad = Longitud;
            condicion = false;
        } else if (opcion == 2) {
            conv.unidad = Masa;
            condicion = false;
        } else if (opcion == 3) {
            conv.unidad = Temperatura;
            condicion = false;
        } else if (opcion == 4) {
            cout << "Saliendo del programa." << endl;
            exit(0);
        } else {
            cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        }
    }

}

void obtenerPrefijos() {

    while (true)
    {
        cout << "Digite el prefijo actual de la cantidad: ";
        cin >> prefijo;

        if (prefijo == 'P') {
        conv.prefijoActual = P;
        } else if (prefijo == 'T') {
        conv.prefijoActual = T;
        break;
        } else if (prefijo == 'G') {
        conv.prefijoActual = G;
        break;
        } else if (prefijo == 'M') {
        conv.prefijoActual = M;
        break;
        } else if (prefijo == 'K') {
        conv.prefijoActual = K;
        break;
        } else if (prefijo == 'N') {
        conv.prefijoActual = N;
        break;
        } else if (prefijo == 'm') {
        conv.prefijoActual = m;
        break;
        } else if (prefijo == 'u') {
        conv.prefijoActual = u;
        break;
        } else if (prefijo == 'n') {
        conv.prefijoActual = n;
        break;
        } else if (prefijo == 'p') {
        conv.prefijoActual = p;
        break;
        } else if (prefijo == 'f') {
        conv.prefijoActual = f;
        break;
        } else {
        cout << "El prefijo digitado no es valido." << endl;
        continue;  // Continúa con la siguiente iteración del bucle
        }
    }

    while (true)
    {
        cout << "Digite el prefijo nuevo de la cantidad: ";
        cin >> prefijo;
        
        if (prefijo == 'P') {
            conv.prefijoNuevo = P;
            break;
        } else if (prefijo == 'T') {
            conv.prefijoNuevo = T;
            break;
        } else if (prefijo == 'G') {
            conv.prefijoNuevo = G;
            break;
        } else if (prefijo == 'M') {
            conv.prefijoNuevo = M;
            break;
        } else if (prefijo == 'K') {
            conv.prefijoNuevo = K;
            break;
        } else if (prefijo == 'N') {
            conv.prefijoNuevo = N;
            break;
        } else if (prefijo == 'm') {
            conv.prefijoNuevo = m;
            break;
        } else if (prefijo == 'u') {
            conv.prefijoNuevo = u;
            break;
        } else if (prefijo == 'n') {
            conv.prefijoNuevo = n;
            break;
        } else if (prefijo == 'p') {
            conv.prefijoNuevo = p;
            break;
        } else if (prefijo == 'f') {
            conv.prefijoNuevo = f;
            break;
        } else {
            cout << "El prefijo digitado no es valido." << endl;
            continue;
        }
    }

}

void obtenerValor() {
    cout << "Digite el valor numerico que desea convertir: ";
    cin >> conv.valor;
}

void obtenerEscalas() {

    while (true)
    {
    
        cout << "Digite la escala actual de la cantidad: ";
        cin >> escala;

        if (escala == 'C') {
            conv.escalaActual = Celsius;
            break;  // Simula el comportamiento del switch
        } else if (escala == 'F') {
            conv.escalaActual = Fahrenheit;
            break;  // Simula el comportamiento del switch
        } else if (escala == 'K') {
            conv.escalaActual = Kelvin;
            break;  // Simula el comportamiento del switch
        } else {
            cout << "La escala digitada no es valida." << endl;
            continue;  // Continúa con la siguiente iteración del bucle
        }

    }
    
    while (true)
    {
    
        cout << "Digite la escala nueva de la cantidad: ";
        cin >> escala;

        if (escala == 'C') {
            conv.escalaNueva = Celsius;
            break;  // Simula el comportamiento del switch
        } else if (escala == 'F') {
            conv.escalaNueva = Fahrenheit;
            break;  // Simula el comportamiento del switch
        } else if (escala == 'K') {
            conv.escalaNueva = Kelvin;
            break;  // Simula el comportamiento del switch
        } else {
            cout << "La escala digitada no es valida." << endl;
            continue;  // Continúa con la siguiente iteración del bucle
        }

    }

}

