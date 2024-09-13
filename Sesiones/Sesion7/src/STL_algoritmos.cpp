// Ejemplo del algoritmo sort
#include <iostream>     // Para cout
#include <algorithm>    // Para sort
#include <vector>       // Para vectores

using namespace std;

bool myfunction (int i, int j) { 
    return (i < j); 
}

struct myclass {
    bool operator() (int i, int j) { 
        return (i < j); 
    }
} myobject;

int main () {
    // Define un array
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};

    // Crea un vector usando los elementos del array, en este caso todos (+8)
    vector<int> myvector (myints, myints + 8);  // myints+8 indica el final del array

    //Por defecto (operador <)
    sort(myvector.begin(), myvector.begin() + 4); // Ordena los primeros 4 elementos

    // Usar una función como comparador
    sort(myvector.begin() + 4, myvector.end(), myfunction); // Ordena los elementos restantes usando `myfunction`

    // Usar un objeto (myobject) como comparador
    sort(myvector.begin(), myvector.end(), myobject); // Ordena todo el vector usando el objeto `myobject`

    // Imprimir el vector
    cout << "myvector contains:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it) {
        cout << ' ' << *it;
    }
    cout << '\n';

    return 0;
}
