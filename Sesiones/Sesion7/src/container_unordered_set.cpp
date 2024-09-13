#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Inicializa un unordered_set de tipo int
    unordered_set<int> numbers = {1, 100, 10, 70, 100}; // Guarda los números sin un orden específico y sin repetir

    // Imprime el unordered_set
    cout << "Numbers are: ";
    for (auto &num : numbers) { // auto es para recorrer todo el unordered_set automáticamente
        cout << num << " ";
    }
    return 0;
}
