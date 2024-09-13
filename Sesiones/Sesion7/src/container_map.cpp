#include <iostream>  // Para cout y cin
#include <map>       // Incluye la biblioteca para utilizar map

using namespace std;  // Para no usar std::

int main() {
    // Definición de un mapa que usa enteros como keys y strings como valores
    map<int, string> student;

    // Uso del operador [] para agregar elementos al map
    student[1] = "Jacqueline";  // Asigna el valor "Jacqueline" a la key 1
    student[2] = "Blake";       // Asigna el valor "Blake" a la key 2

    // Uso del método insert() para agregar elementos al map
    student.insert(make_pair(3, "Denise"));  // Inserta un par key-valor (3, "Denise")
    student.insert(make_pair(4, "Blake"));   // Inserta un par key-valor (4, "Blake")

    // Agregar elementos con claves duplicadas
    student[5] = "Timothy";   // Asigna el valor "Timothy" a la key 5
    student[5] = "Aaron";     // Sobrescribe el valor de la key 5 con "Aaron"

    // Ciclo para recorrer e imprimir los elementos del map
    for (int i = 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;  // Imprime la key y el valor asociado
    }

    return 0;
}
