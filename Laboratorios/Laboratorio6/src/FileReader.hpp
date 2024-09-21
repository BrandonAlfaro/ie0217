#ifndef FILEREADER_HPP
#define FILEREADER_HPP

// Biblioteca
#include "Exceptions.hpp"
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

// Definición clase plantilla para leer archivos
template <typename Container>
class FileReader {
public:
    // Constructor que recibe la ruta del archivo como parámetro
    FileReader(const std::string& filePath) : filePath(filePath) {}

    // Método para leer el archivo línea por línea y almacenar el contenido en el contenedor
    void readFile(Container& container) {
        // Se abre el archivo
        std::ifstream file(filePath);
        
        // Si no se pudo abrir el archivo, lanza una excepción
        if (!file.is_open()) {
            throw FileNotFoundException("Error: No se pudo abrir el archivo " + filePath);
        }

        // Lee el archivo línea por línea y almacena cada línea
        std::string line;
        while (std::getline(file, line)) {
            container.push_back(line);
        }

        // Cierra el archivo al terminar de leer
        file.close();
    }

private:
    // Ruta del archivo que se va a leer
    std::string filePath;
};

#endif // FILEREADER_HPP
