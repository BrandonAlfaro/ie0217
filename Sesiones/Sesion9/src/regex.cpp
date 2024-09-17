#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    // Definimos una expresión regular que busca las palabras "my" o "your" seguidas de "regex"
    auto const regex = std::regex("(my|your) regex");

    // Definimos un texto que contiene "my regex"
    auto const myText = std::string("A piece of text that contains my regex.");
    // Verificamos si el texto 'myText' contiene el patrón de la expresión regular
    bool const myTextContainsRegex = std::regex_search(myText, regex);

    // Definimos un texto que contiene "your regex"
    auto const yourText = std::string("A piece of text that contains your regex.");
    // Verificamos si el texto 'yourText' contiene el patrón de la expresión regular
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    // Definimos un texto que contiene "their regex" (que no coincide con la expresión regular)
    auto const theirText = std::string("A piece of text that contains their regex.");
    // Verificamos si el texto 'theirText' contiene el patrón de la expresión regular
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    // Mostramos los resultados en la consola con los valores booleanos como 'true' o 'false'
    std::cout << std::boolalpha 
              << myTextContainsRegex << '\n'  // Imprime 'true' si "my regex" está en 'myText'
              << yourTextContainsRegex << '\n' // Imprime 'true' si "your regex" está en 'yourText'
              << theirTextContainsRegex << '\n'; // Imprime 'false' si "their regex" no coincide
}
