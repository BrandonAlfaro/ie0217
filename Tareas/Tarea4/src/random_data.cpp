#include "random_data.hpp"
#include <random>

// Implementación de la función de datos aleatorios
vector<int> randomData(size_t n) {
    vector<int> datos(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 10000); // Rango de valores aleatorios

    for (size_t i = 0; i < n; ++i) {
        datos[i] = dist(gen);
    }
    return datos;
}
