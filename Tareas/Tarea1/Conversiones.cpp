/**
 * @file Conversiones.cpp
 * @brief Implementación de las funciones de conversión de unidades de masa, longitud y temperatura.
 * 
 * Este archivo define las funciones necesarias para convertir valores entre diferentes
 * prefijos de masa, longitud, y escalas de temperatura.
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

#include "Conversiones.hpp"
#include <cmath>

/**
* @brief Convierte un valor de masa entre diferentes prefijos.
* 
* @param valorMasa Valor de la masa.
* @param prefijoActual Prefijo actual de la masa.
* @param prefijoNuevo Prefijo nuevo de la masa.
* @return float Valor de la masa convertido al nuevo prefijo.
*/

float conversionMasa(float valorMasa, Prefijos prefijoActual, Prefijos prefijoNuevo){
    return valorMasa * (pow(10, int(prefijoActual)) / pow(10, int(prefijoNuevo)));
}

/**
* @brief Convierte un valor de longitud entre diferentes prefijos.
* 
* @param valorLongitud Valor de la longitud.
* @param prefijoActual Prefijo actual de la longitud.
* @param prefijoNuevo Prefijo nuevo de la longitud.
* @return float Valor de la longitud convertido al nuevo prefijo.
*/

float conversionLongitud(float valorLongitud, Prefijos prefijoActual, Prefijos prefijoNuevo){
    return valorLongitud * (pow(10, int(prefijoActual)) / pow(10, int(prefijoNuevo)));
}

/**
* @brief Convierte un valor de temperatura entre diferentes prefijos.
* 
* @param valorTemperatura Valor de la temperatura.
* @param escalaActual Prefijo actual de la temperatura.
* @param escalaNueva Prefijo nuevo de la temperatura.
* @return float Valor de la temperatura convertido a la nueva escala.
*/

float conversionTemperatura(float valorTemperatura, EscalaTemperatura escalaActual, EscalaTemperatura escalaNueva) {

    // Condicionales para evaluar en cual escala esta la temperatura y condicionales anidados para convertir a la escala requerida.
    if (escalaActual == Kelvin) {
        if (escalaNueva == Celsius) {
            return valorTemperatura - 273.15;
        } else if (escalaNueva == Fahrenheit) {
            return (valorTemperatura - 273.15) * 9.0 / 5.0 + 32.0;
        }
    } else if (escalaActual == Celsius) {
        if (escalaNueva == Kelvin) {
            return valorTemperatura + 273.15;
        } else if (escalaNueva == Fahrenheit) {
            return valorTemperatura * 9.0 / 5.0 + 32.0;
        }
    } else if (escalaActual == Fahrenheit) {
        if (escalaNueva == Celsius) {
            return (valorTemperatura - 32.0) * 5.0 / 9.0;
        } else if (escalaNueva == Kelvin) {
            return (valorTemperatura - 32.0) * 5.0 / 9.0 + 273.15;
        }
    }
    return valorTemperatura; // Si las escalas son iguales
}
