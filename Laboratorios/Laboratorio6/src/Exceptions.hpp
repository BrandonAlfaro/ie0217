#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

// Bibliotecas
#include <stdexcept>
#include <string>

// Definición de la clase FileNotFoundException
class FileNotFoundException : public std::runtime_error {
public:
    // Constructor toma un mensaje y lo pasa al constructor de std::runtime_error
    explicit FileNotFoundException(const std::string& message)
        : std::runtime_error(message) {}
};

// Definición de la clase RegexException
class RegexException : public std::runtime_error {
public:
    // Constructor que toma un mensaje y lo pasa al constructor de std::runtime_error
    explicit RegexException(const std::string& message)
        : std::runtime_error(message) {}
};

#endif // EXCEPTIONS_HPP
