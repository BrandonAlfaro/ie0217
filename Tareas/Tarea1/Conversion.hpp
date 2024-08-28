#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>

using namespace std;

class Conversion {
    public:
        int valor;
        string unidad;

        Conversion(int valor, string &unidad);

        virtual ~Conversion() = default;

        void obtenerValor(int valor);

        void obtenerUnidad(const string &unidad);

        void realizarConversion(int valor, string &unidad);

        virtual void mostrarConversion() const = 0;
};

#endif