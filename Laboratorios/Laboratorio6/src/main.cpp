// Bibliotexa
#include <iostream>         
#include "FileReader.hpp"   
#include "TextProcessor.hpp"
#include "RegexUtils.hpp"   
#include "Exceptions.hpp"   

int main(int argc, char* argv[]) {
    // Verifica si el número de argumentos es incorrecto
    if (argc != 2) {
        // Imprime un mensaje de error que indica como se ejecuta el programa
        std::cerr << "Uso: " << argv[0] << " <archivo_texto>" << std::endl;
        return 1;  // Indica error
    }

    // Almacena la ruta del archivo
    std::string filePath = argv[1];
    // Almacena las líneas del archivo
    std::vector<std::string> lines;

    try {
        // Crea un objeto FileReader para leer el archivo y almacenar las líneas en el vector
        FileReader<std::vector<std::string>> fileReader(filePath);
        fileReader.readFile(lines);
        
        // Imprime mensaje
        std::cout << "Archivo leído correctamente. Total de líneas: " << lines.size() << std::endl;

        // Procesa el texto con una función lambda
        int lineCount = 0;
        processText(lines, [&](const std::string& line) {
            if (!line.empty()) {
                lineCount++;  // Incrementa el contador si la línea no está vacía
            }
        });

        // Imprime mensaje
        std::cout << "Líneas no vacías: " << lineCount << std::endl;

        // Busca un patrón en las líneas usando expresiones regulares
        std::string pattern = "\\d+";  // El patrón busca cualquier número
        std::vector<std::string> matchedLines = regexSearch(lines, pattern);

        // Imprime mensaje
        std::cout << "Líneas que contienen números: " << matchedLines.size() << std::endl;

        // Reemplaza los números en las líneas por "[Número]"
        regexReplace(lines, pattern, "[Número]");

        // Imprime mensaje
        std::cout << "Números reemplazados en las líneas." << std::endl;

    } catch (const FileNotFoundException& e) {
        // Captura la excepción si el archivo no se encuentra e imprime mensaje
        std::cerr << e.what() << std::endl;
        return 1;  // Retorna 1 indicando error
    } catch (const RegexException& e) {
        // Captura la excepción si hay un error e imprime mensaje
        std::cerr << e.what() << std::endl;
        return 1;  // Retorna 1 indicando error
    }

    return 0;  // Indica que el programa terminó correctamente
}
