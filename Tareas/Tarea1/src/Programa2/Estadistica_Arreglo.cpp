/**
* @file Estadistica_Arreglo.cpp
* @brief Implementación de la clase y métodos para el cálculo estadístico y busqueda de un número.
* 
* Este archivo define los métodos para realizar el cálculo de las estadísticas y busqueda de
* un número en el arreglo proporcionado por el usuario.
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

Estadisticas::Estadisticas(double* numeros, int cantidadNumeros) : numeros(numeros), cantidadNumeros(cantidadNumeros) {}

/**
* @brief Calcula la suma de los números en el arreglo.
* @return La suma de los números en el arreglo.
*/

double Estadisticas::calcularSuma(){
    double suma = 0;
    double* ptr = numeros;
    for (int i = 0; i < cantidadNumeros; i++)
    {
        suma += *ptr;
        ptr++;
    }
    return suma;
}

/**
* @brief Calcula el promedio de los números en el arreglo.
* @return El promedio de los números en el arreglo.
*/

double Estadisticas::calcularPromedio(){
    return calcularSuma()/cantidadNumeros;
}

/**
* @brief Encuentra el valor máximo en el arreglo de números.
* @return El valor máximo en el arreglo.
*/

double Estadisticas::encontrarMaximo() {
    double* ptr = numeros;
    double maximo = *ptr;
    for (int i = 1; i < cantidadNumeros; ++i) {
        ptr++;
        if (*ptr > maximo) {
            maximo = *ptr;
        }
    }
    return maximo;
}

/**
* @brief Encuentra el valor mínimo en el arreglo de números.
* @return El valor mínimo en el arreglo.
*/

double Estadisticas::encontrarMinimo() {
    double* ptr = numeros;
    double minimo = *ptr;
    for (int i = 1; i < cantidadNumeros; ++i) {
        ptr++;
        if (*ptr < minimo) {
            minimo = *ptr;
        }
    }
    return minimo;
}

/**
* @brief Busca un número específico en el arreglo.
* @param numero El número a buscar en el arreglo.
* @return true si el número se encuentra en el arreglo, false en caso contrario.
*/

bool Estadisticas::buscarNumero(double numero) {
    double* ptr = numeros;
    for (int i = 0; i < cantidadNumeros; ++i) {
        if (*ptr == numero) {
            return true;
        }
        ptr++;
    }
    return false;
}
