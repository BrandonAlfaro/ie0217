#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Inicializa un vector de tipo int
    vector<int> numbers = {1, 100, 10, 70, 100}; // Guarda los números como se inicializan

    // Imprime el vector
    cout << "Numbers are: ";
    for (auto &num : numbers) { // auto es para recorrer todo el vector automáticamente
        cout << num << " ";
    }
    return 0;
}
