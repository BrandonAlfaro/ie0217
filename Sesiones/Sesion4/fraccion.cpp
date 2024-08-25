#include <iostream>
using namespace std;

class Fraccion {
    int numerador, denominador;

public:
    // Constructor para inicializar el numerador y el denominador
    Fraccion(int n, int d) : numerador(n), denominador(d) {}

    // Sobrecarga del operador + para sumar dos fracciones
    Fraccion operator+(const Fraccion &f) {
        Fraccion resultado(
            numerador * f.denominador + f.numerador * denominador,
            denominador * f.denominador
        );
        return resultado;
    }

    // Método para imprimir la fracción en formato "numerador/denominador"
    void imprimir() {
        cout << numerador << "/" << denominador << endl;
    }
};

int main() {
    // Crear dos objetos de tipo Fraccion
    Fraccion f1(1, 2); // Fracción 1/2
    Fraccion f2(3, 4); // Fracción 3/4

    // Sumar las dos fracciones usando el operador sobrecargado
    Fraccion f3 = f1 + f2;

    // Imprimir la fracción resultante
    f3.imprimir(); // Esto imprimirá "10/8"

    return 0;
}
