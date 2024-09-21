#ifndef REGEXUTILS_HPP
#define REGEXUTILS_HPP

// Biblioteca
#include "Exceptions.hpp"
#include <regex>    
#include <string>   
#include <vector>   
#include <stdexcept>

// Busca un patrón regular en líneas de texto
std::vector<std::string> regexSearch(const std::vector<std::string>& lines, const std::string& pattern) {
    std::vector<std::string> matches;  // Almacena las líneas que coinciden con el patrón
    std::regex regexPattern;  // Objeto para almacenar el patrón de expresión regular

    try {
        // Intenta compilar el patrón regular
        regexPattern = std::regex(pattern);
    } catch (const std::regex_error&) {
        // Si el patrón es inválido
        throw RegexException("Error: Patrón de expresión regular inválido.");
    }

    // Recorre cada línea de texto
    for (const auto& line : lines) {
        // Si la línea coincide con el patrón
        if (std::regex_search(line, regexPattern)) {
            matches.push_back(line);  // Agrega la línea a los resultados coincidentes
        }
    }

    // Líneas que coinciden con el patrón
    return matches;
}

// Reemplaza un patrón de expresión regular en una lista de líneas de texto
void regexReplace(std::vector<std::string>& lines, const std::string& pattern, const std::string& replacement) {
    std::regex regexPattern;  // Objeto para almacenar el patrón de expresión regular

    try {
        // Intenta compilar el patrón regular
        regexPattern = std::regex(pattern);
    } catch (const std::regex_error&) {
        // Si el patrón es inválido
        throw RegexException("Error: Patrón de expresión regular inválido.");
    }

    // Recorre cada línea de texto
    for (auto& line : lines) {
        // Reemplaza todas las lineas que coinden con el patrón
        line = std::regex_replace(line, regexPattern, replacement);
    }
}

#endif // REGEXUTILS_HPP
