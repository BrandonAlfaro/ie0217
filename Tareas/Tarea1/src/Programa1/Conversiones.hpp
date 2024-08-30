/**
* @file Conversiones.hpp
* @brief Declaraciones de funciones y estructuras para la conversión de unidades.
* 
* Este archivo contiene las enumeraciones, estructuras y funciones necesarias
* para convertir entre diferentes unidades de longitud, masa y temperatura.
* 
* @author Brandon Alfaro
* @date 2024-08-29
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

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>

using namespace std;

/**
* @enum UnidadMedida
* @brief Enumeración para representar las diferentes unidades de medida.
*/

enum UnidadMedida {
    Longitud,
    Masa,
    Temperatura
};

/**
* @enum EscalaTemperatura
* @brief Enumeración para representar las diferentes escalas de temperatura.
*/

enum EscalaTemperatura {
    Kelvin,
    Celsius,
    Fahrenheit
};

/**
* @enum Prefijos
* @brief Enumeración para representar potencias de diez de cada prefijo.
*/

enum Prefijos {
    P = 15,        // 10^15
    T = 12,        // 10^12
    G = 9,         // 10^9
    M = 6,         // 10^6
    K = 3,         // 10^3
    N = 0,         // 10^0
    m = -3,        // 10^-3
    u = -6,        // 10^-6
    n = -9,        // 10^-9
    p = -12,       // 10^-12
    f = -15        // 10^-15
};

/**
* @struct Conversion
* @brief Estructura para representar los parámetros necesarios para las conversiones de unidades.
*/

struct Conversion {
    float valor;
    Prefijos prefijoActual;
    Prefijos prefijoNuevo;
    UnidadMedida unidad;
    EscalaTemperatura escalaActual;
    EscalaTemperatura escalaNueva;
};

/**
* @brief Convierte un valor de masa entre diferentes prefijos.
* 
* @param valorMasa Valor de la masa.
* @param prefijoActual Prefijo actual de la masa.
* @param prefijoNuevo Prefijo nuevo de la masa.
* @return float Valor de la masa convertido al nuevo prefijo.
*/

float conversionMasa(float valorMasa, Prefijos prefijoActual, Prefijos prefijoNuevo);

/**
* @brief Convierte un valor de longitud entre diferentes prefijos.
* 
* @param valorLongitud Valor de la longitud.
* @param prefijoActual Prefijo actual de la longitud.
* @param prefijoNuevo Prefijo nuevo de la longitud.
* @return float Valor de la longitud convertido al nuevo prefijo.
*/

float conversionLongitud(float valorLongitud, Prefijos prefijoActual, Prefijos prefijoNuevo);

/**
* @brief Convierte un valor de temperatura entre diferentes prefijos.
* 
* @param valorTemperatura Valor de la temperatura.
* @param escalaActual Prefijo actual de la temperatura.
* @param escalaNueva Prefijo nuevo de la temperatura.
* @return float Valor de la temperatura convertido a la nueva escala.
*/

float conversionTemperatura(float valorTemperatura, EscalaTemperatura escalaActual, EscalaTemperatura escalaNueva);

#endif