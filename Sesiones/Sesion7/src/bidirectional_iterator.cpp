#include <iostream>   // Para cout y cin
#include <list>       // Para usar la clase list

using namespace std;

int main() {
    // Define una lista
    list<int> nums {1, 2, 3, 4, 5};

    // Iterador al inicio
    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " << endl;

    // Imprimir elementos hacia adelante
    while (itr != nums.end()) {
        cout << *itr << ", ";
        itr++;
    }

    cout << endl << "Moving backward: " << endl;

    // Imprimir elementos hacia atras
    while (itr != nums.begin()) {
        itr--;
        if (itr != nums.end()) {
            cout << *itr << ", ";
        }
    }

    cout << *itr << endl;  // Imprime el primer elemento

    return 0;
}
