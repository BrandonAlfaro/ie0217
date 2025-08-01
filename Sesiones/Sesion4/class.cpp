#include <iostream> // Para usar cin cout
using namespace std; // Para no escribir std en cada linea

class Molde {
public:
    double largo;
    double ancho;
    double altura;

    Molde(){
        cout << "Esto se ejecuta en cada instanciación" << endl;
        cout << "Iniciando un objeto de la clase Room" << endl;
    }

    double calcularArea(){
        return largo * ancho;
    }

    double calcularVolumen(){
        return largo * ancho * altura;
    }
};

int main() {
    /* Instanciar un objeto llamado pared basado en la clase Molde. */
    Molde pared;

    /* Asignar valores al objeto pared. */
    pared.largo = 400.5;
    pared.ancho = 28.8;
    pared.altura = 315.2;

    /* Calcular y desplegar el area y volumen. */
    cout << "Area: " << pared.calcularArea() << endl;
    cout << "Volumen: " << pared.calcularVolumen() << endl;

    return 0;
}
