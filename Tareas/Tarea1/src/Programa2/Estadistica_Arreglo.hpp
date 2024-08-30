/**
* @file Estadistica_Arreglo.hpp
* @brief Declaraciones de funciones y estructuras para la conversión de unidades.
* 
* DESCRIBIR EL PROGRAMA
* 
* 
* @author Brandon Alfaro
* @date 2024-08-30
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

#ifndef ESTADISTICAS_HPP
#define ESTADISTICAS_HPP

#include <iostream>
#include <vector>

class Estadisticas {
public:
    // Constructor que toma un puntero a los números y su tamaño
    Estadisticas(double* numeros, int cantidadNumeros);

    // Métodos para calcular las estadísticas y encontrar número
    int calcularSuma();
    double calcularPromedio();
    int encontrarMaximo();
    int encontrarMinimo();
    bool buscarNumero(int numero);

private:
    int* numeros;  // Puntero al arreglo de números
    int cantidadNumeros;   // Tamaño del arreglo
};

#endif