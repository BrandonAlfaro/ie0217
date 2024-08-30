#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>

using namespace std;

enum UnidadMedida {
    Longitud,
    Masa,
    Temperatura
};

enum EscalaTemperatura {
    Kelvin,
    Celsius,
    Fahrenheit
};

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

struct Conversion {
    float valor;
    Prefijos prefijoActual;
    Prefijos prefijoNuevo;
    UnidadMedida unidad;
    EscalaTemperatura escalaActual;
    EscalaTemperatura escalaNueva;
};

float conversionMasa(float valorMasa, Prefijos prefijoActual, Prefijos prefijoNuevo);
float conversionLongitud(float valorLongitud, Prefijos prefijoActual, Prefijos prefijoNuevo);
float conversionTemperatura(float valorTemperatura, EscalaTemperatura escalaActual, EscalaTemperatura escalaNueva);

#endif