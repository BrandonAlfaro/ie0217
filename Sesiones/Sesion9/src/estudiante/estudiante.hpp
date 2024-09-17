#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

using namespace std;

class Estudiante {
public:
    // Constructor que recibe nombre y edad
    Estudiante(const string& nombre, int edad);

    // Función para mostrar los datos del estudiante
    void mostrarDatos();

private:
    std::string nombre; // Variable que almacena el nombre
    int edad;           // Variable que almacena la edad
};

#endif
