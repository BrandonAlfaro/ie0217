#include <iostream>
#include "Conversion_Longitud.hpp"
#include "Prefijos_Unidades.hpp"

ConversionLongitud::ConversionLongitud(int valor, string &unidad) : valor(valor), unidad(unidad) {}

void ConversionLongitud::realizarConversion(int valor, string &unidadActual, string &unidadNueva){
    
    Prefijo prefijoActual;
    Prefijo prefijoNuevo;
    
    // Asignar el valor del prefijoActual
    if (unidadActual == "Pm") {
        prefijoActual = Pm;
    } else if (unidadActual == "Tm") {
        prefijoActual = Tm;
    } else if (unidadActual == "Gm") {
        prefijoActual = Gm;
    } else if (unidadActual == "Mm") {
        prefijoActual = Mm;
    } else if (unidadActual == "Km") {
        prefijoActual = Km;
    } else if (unidadActual == "m") {
        prefijoActual = m;
    } else if (unidadActual == "mm") {
        prefijoActual = mm;
    } else if (unidadActual == "um") {
        prefijoActual = um;
    } else if (unidadActual == "nm") {
        prefijoActual = nm;
    } else if (unidadActual == "pm") {
        prefijoActual = pm;
    } else if (unidadActual == "fm") {
        prefijoActual = fm;
    } else {
        cout << "Prefijo de unidad actual no válido" << endl;
        return;
    }

    // Asignar el valor del prefijoNuevo
    if (unidadNueva == "Pm") {
        prefijoNuevo = Pm;
    } else if (unidadNueva == "Tm") {
        prefijoNuevo = Tm;
    } else if (unidadNueva == "Gm") {
        prefijoNuevo = Gm;
    } else if (unidadNueva == "Mm") {
        prefijoNuevo = Mm;
    } else if (unidadNueva == "Km") {
        prefijoNuevo = Km;
    } else if (unidadNueva == "m") {
        prefijoNuevo = m;
    } else if (unidadNueva == "mm") {
        prefijoNuevo = mm;
    } else if (unidadNueva == "um") {
        prefijoNuevo = um;
    } else if (unidadNueva == "nm") {
        prefijoNuevo = nm;
    } else if (unidadNueva == "pm") {
        prefijoNuevo = pm;
    } else if (unidadNueva == "fm") {
        prefijoNuevo = fm;
    } else {
        cout << "Prefijo de unidad nueva no válido" << endl;
        return;
    }

    // valor = valor * (prefijoActual/prefijoNuevo);

}