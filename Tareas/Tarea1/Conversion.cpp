#include "Conversion.hpp"

using namespace std;

Conversion::Conversion(int valor, string &unidad) : valor(valor), unidad(unidad) {}

void Conversion::obtenerValor(int valor){
    this->valor = valor;
}

void Conversion::obtenerUnidad(const string &unidad){
    this->unidad = unidad;
}

void Conversion::realizarConversion(int valor, string &unidad){
    this->valor = valor;
    this->unidad = unidad;
}