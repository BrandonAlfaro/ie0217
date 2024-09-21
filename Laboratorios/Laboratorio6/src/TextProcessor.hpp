#ifndef TEXTPROCESSOR_HPP
#define TEXTPROCESSOR_HPP

// Biblioteca
#include <functional>

// Definición de un template
template <typename Container, typename Func>
void processText(Container& container, Func processFunc) {
    // Recorre cada elemento del contenedor
    for (auto& element : container) {
        // Aplica la función a cada elemento
        processFunc(element);
    }
}

#endif // TEXTPROCESSOR_HPP
