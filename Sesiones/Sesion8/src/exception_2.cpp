#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int numerador, denominador, resultado;

    // Solicita al usuario que ingrese el numerador
    cout << "Ingrese el numerador: ";
    cin >> numerador;

    // Solicita al usuario que ingrese el denominador
    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try {
        // Lanza una excepción si el denominador es 0
        if (denominador == 0) {
            throw runtime_error("Error: el denominador no puede ser cero.");
        }

        // Realiza la división si no hay error
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;
    } 
    // Captura cualquier excepción y muestra el mensaje de error
    catch (const exception& e) {
        cerr << e.what() << endl; // Muestra el mensaje de error de la excepción
    }

    return 0;
}
