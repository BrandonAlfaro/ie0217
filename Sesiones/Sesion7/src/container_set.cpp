#include <iostream>
#include <set>

using namespace std;

int main() {
    // Inicializa un set de tipo int
    set<int> numbers = {1, 100, 10, 70, 100}; // Guarda los números de menor a mayor sin repetir

    // Imprime el set
    cout << "Numbers are: ";
    for (auto &num : numbers) { // auto es para recorrer todo el set automáticamente
        cout << num << " ";
    }
    return 0;
}
