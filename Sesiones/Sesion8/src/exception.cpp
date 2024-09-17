#include <iostream>

using namespace std;

int main() {

    double numerator, denominator, divide;

    // Pide al usuario que ingrese el numerador
    cout << "Enter numerator: ";
    cin >> numerator;

    // Pide al usuario que ingrese el denominador
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        // Lanza una excepción si el denominador es 0
        if (denominator == 0)
            throw 0;

        // Esta parte no se ejecuta si el denominador es 0
        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
    }
    catch (int num_exception) {
        // Captura la excepción y muestra un mensaje de error
        cout << "Error: Cannot divide by " << num_exception << endl;
    }

    return 0;
}
