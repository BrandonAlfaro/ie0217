#ifndef CONVERSION_LONGITUD_HPP
#define CONVERSION_LONGITUD_HPP

#include "Conversion.hpp"

using namespace std;

class ConversionLongitud : public Conversion {
    public:
        ConversionLongitud(int valor, string &unidad);

        void realizarConversion(int valor, string &unidad);

        void mostrarConversion() const override;

};


#endif