#include <iostream>        // Para std::cout y std::cin
#include "Conversion_Longitud.hpp" 
#include <string>

using namespace std;  // Para evitar escribir std:: cada vez

int main() {
    int valor;
        string unidadActual;
        string unidadNueva;
    
    // Crear una instancia de la clase ConversionLongitud
    ConversionLongitud conversion;

    // Solicitar el valor de entrada al usuario
    cout << "Digite el valor al que desea realizar la conversión: ";
    cin >> conversion.valor;

    // Solicitar la unidad actual al usuario
    cout << "Digite el prefijo y unidad actual de la cantidad (Ej: 'Km'): ";
    cin >> conversion.unidadActual;

    // Solicitar la unidad nueva al usuario
    cout << "Digite el prefijo y unidad nueva de la cantidad (Ej: 'Km'): ";
    cin >> conversion.unidadNueva;

    conversion.realizarConversion(conversion.valor, conversion.unidadActual, conversion.unidadNueva);

    return 0;
}