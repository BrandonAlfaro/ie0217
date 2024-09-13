#include <iostream>   // Para cou y cin
#include <vector>     // Para vectores

using namespace std;  // Para no poner std:: en cada línea

int main() {
    // Crear un vector de strings
    vector<string> languages = {"Python", "C++", "Java"};

    // Crear un iterador para el vector de strings
    vector<string>::iterator itr;

    // Iterar sobre todos los elementos del vector
    for (itr = languages.begin(); itr != languages.end(); itr++) {
        cout << *itr << ", ";  // Imprime el lenguaje de programación
    }

    return 0;
}
