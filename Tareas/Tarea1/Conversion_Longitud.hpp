#ifndef CONVERSION_LONGITUD_HPP
#define CONVERSION_LONGITUD_HPP

#include "Conversion.hpp"

using namespace std;

class ConversionLongitud : public Conversion {
    public:
        ConversionLongitud(int valor, string &unidadActual, string &unidadNueva);

        void realizarConversion(int valor, string &unidadActual, string &unidadNueva);

        void mostrarConversion() const override;

};


#endif