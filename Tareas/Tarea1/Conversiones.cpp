#include "Conversiones.hpp"
#include <cmath>

float conversionMasa(float valorMasa, Prefijos prefijoActual, Prefijos prefijoNuevo){
    return valorMasa * (pow(10, int(prefijoActual)) / pow(10, int(prefijoNuevo)));
}

float conversionLongitud(float valorLongitud, Prefijos prefijoActual, Prefijos prefijoNuevo){
    return valorLongitud * (pow(10, int(prefijoActual)) / pow(10, int(prefijoNuevo)));
}

float conversionTemperatura(float valorTemperatura, EscalaTemperatura escalaActual, EscalaTemperatura escalaNueva) {
    if (escalaActual == Kelvin) {
        if (escalaNueva == Celsius) {
            return valorTemperatura - 273.15;
        } else if (escalaNueva == Fahrenheit) {
            return (valorTemperatura - 273.15) * 9.0 / 5.0 + 32.0;
        }
    } else if (escalaActual == Celsius) {
        if (escalaNueva == Kelvin) {
            return valorTemperatura + 273.15;
        } else if (escalaNueva == Fahrenheit) {
            return valorTemperatura * 9.0 / 5.0 + 32.0;
        }
    } else if (escalaActual == Fahrenheit) {
        if (escalaNueva == Celsius) {
            return (valorTemperatura - 32.0) * 5.0 / 9.0;
        } else if (escalaNueva == Kelvin) {
            return (valorTemperatura - 32.0) * 5.0 / 9.0 + 273.15;
        }
    }
    return valorTemperatura; // Si las escalas son iguales
}
    