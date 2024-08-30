#include <iostream>
#include "Conversiones.hpp"
#include <iomanip>

using namespace std;

Conversion conv;
int opcion;
char prefijo;
char escala;


void mostrarMenu() {

    cout << "Conversion de unidades:" << endl;
    cout << "Opción 1: Convertir entre diferentes unidades de longitud." << endl;
    cout << "Opción 2: Convertir entre diferentes unidades de peso." << endl;
    cout << "Opción 3: Convertir entre diferentes unidades de temperatura." << endl;
    cout << "Opción 4: Salir del programa." << endl;

}

void obtenerOpcion() {

    bool condicion = true;
    while (condicion)
    {
        cout << "Digite la opcion escogida: ";
        cin >> opcion;
        cout << endl;

        if (opcion == 1) {
            conv.unidad = Longitud;
            condicion = false;
        } else if (opcion == 2) {
            conv.unidad = Masa;
            condicion = false;
        } else if (opcion == 3) {
            conv.unidad = Temperatura;
            condicion = false;
        } else if (opcion == 4) {
            cout << "Saliendo del programa." << endl;
            exit(0);
        } else {
            cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        }
    }
}

void obtenerPrefijos() {

    while (true)
    {
        cout << "Digite el prefijo actual de la cantidad: ";
        cin >> prefijo;

        if (prefijo == 'P') {
        conv.prefijoActual = P;
        } else if (prefijo == 'T') {
        conv.prefijoActual = T;
        break;
        } else if (prefijo == 'G') {
        conv.prefijoActual = G;
        break;
        } else if (prefijo == 'M') {
        conv.prefijoActual = M;
        break;
        } else if (prefijo == 'K') {
        conv.prefijoActual = K;
        break;
        } else if (prefijo == 'N') {
        conv.prefijoActual = N;
        break;
        } else if (prefijo == 'm') {
        conv.prefijoActual = m;
        break;
        } else if (prefijo == 'u') {
        conv.prefijoActual = u;
        break;
        } else if (prefijo == 'n') {
        conv.prefijoActual = n;
        break;
        } else if (prefijo == 'p') {
        conv.prefijoActual = p;
        break;
        } else if (prefijo == 'f') {
        conv.prefijoActual = f;
        break;
        } else {
        cout << "El prefijo digitado no es valido." << endl;
        continue;  // Continúa con la siguiente iteración del bucle
        }
    }

    while (true)
    {
        cout << "Digite el prefijo nuevo de la cantidad: ";
        cin >> prefijo;
        
        if (prefijo == 'P') {
            conv.prefijoNuevo = P;
            break;
        } else if (prefijo == 'T') {
            conv.prefijoNuevo = T;
            break;
        } else if (prefijo == 'G') {
            conv.prefijoNuevo = G;
            break;
        } else if (prefijo == 'M') {
            conv.prefijoNuevo = M;
            break;
        } else if (prefijo == 'K') {
            conv.prefijoNuevo = K;
            break;
        } else if (prefijo == 'N') {
            conv.prefijoNuevo = N;
            break;
        } else if (prefijo == 'm') {
            conv.prefijoNuevo = m;
            break;
        } else if (prefijo == 'u') {
            conv.prefijoNuevo = u;
            break;
        } else if (prefijo == 'n') {
            conv.prefijoNuevo = n;
            break;
        } else if (prefijo == 'p') {
            conv.prefijoNuevo = p;
            break;
        } else if (prefijo == 'f') {
            conv.prefijoNuevo = f;
            break;
        } else {
            cout << "El prefijo digitado no es valido." << endl;
            continue;
        }
    }

}