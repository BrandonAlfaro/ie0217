#include "Conversion.hpp"

using namespace std;

Conversion::Conversion(int valor, string &unidad) : valor(valor), unidadActual(unidadActual), unidadNueva(unidadNueva)  {}

void Conversion::obtenerValor(int valor){
    this->valor = valor;
}

void Conversion::obtenerUnidades(const string &unidadActual, const string &unidadNueva){
    this->unidadActual = unidadActual;
}

void Conversion::realizarConversion(int valor, string &unidadActual, string &unidadNueva){
    this->valor = valor;
    this->unidadActual = unidadActual;
    this->unidadNueva = unidadNueva;
}