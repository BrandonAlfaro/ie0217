#ifndef NODO_HPP
#define NODO_HPP

// Se define una estructura nodo
struct Nodo {

    int dato; // Variable que almacena el valor en el nodo
    Nodo *siguiente;     // Variable que almacena el puntero al siguietne nodo
    
    // Inicializa las variables de las estructura
    Nodo(int valor) : dato(valor), siguiente(nullptr) {}

};

#endif // NODO_HPP
