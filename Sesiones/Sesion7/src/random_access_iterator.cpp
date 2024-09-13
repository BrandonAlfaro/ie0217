#include <iostream>   // Para cout y cin
#include <vector>     // Para usar la clase vector

using namespace std;

int main() {
    // Crear un vector
    vector<int> vec{1, 2, 3, 4};

    // Crear iteradores para apuntar al primer y al último elemento
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1;

    // Imprime elementos
    cout << "First Element: " << *itr_first << endl;           // Primer elemento
    cout << "Second Element: " << itr_first[1] << endl;        // Segundo elemento

    cout << "Second Last Element: " << *(itr_last - 1) << endl; // Penúltimo elemento
    cout << "Last Element: " << *itr_last << endl;              // Último elemento

    return 0;
}
