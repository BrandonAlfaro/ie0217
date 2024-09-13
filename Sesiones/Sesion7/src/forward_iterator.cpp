#include <iostream>     // Para cout y cin
#include <forward_list> // Para forward_list

using namespace std;

int main() {
    // Crear un forward_list
    forward_list<int> nums{1, 2, 3, 4};

    // Inicializar un iterador para apuntar al inicio de la forward_list
    forward_list<int>::iterator itr = nums.begin();

    // Iterar sobre la lista y modificar cada valor
    while (itr != nums.end()) {
        // Acceder al valor
        int original_value = *itr;

        // Asignar un nuevo valor
        *itr = original_value * 2;

        // Avanzar a la siguiente posición
        itr++;
    }

    // Imprimir la lista
    for (int num : nums) {
        cout << num << ", ";
    }

    return 0;
}
