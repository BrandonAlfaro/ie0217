#include <iostream>
using namespace std;

// Plantilla de clase
template <class T>
class Number {
private:
    // Variable de tipo T
    T num;

public:
    // Constructor que inicializa la variable 'num' con el valor 'n'
    Number(T n) : num(n) {}

    // Método para obtener el valor de 'num'
    T getNum() {
        return num;
    }
};

int main() {
    // Crea un objeto de tipo int
    Number<int> numberInt(7);

    // Crea un objeto de tipo double
    Number<double> numberDouble(7.7);

    // Imprime el valor del objeto de tipo int
    cout << "int Number = " << numberInt.getNum() << endl;

    // Imprime el valor del objeto de tipo double
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
