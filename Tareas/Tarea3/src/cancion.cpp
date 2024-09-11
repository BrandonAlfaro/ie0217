#include "Cancion.hpp"

using namespace std;

// Constructor
Cancion::Cancion(const string& nombre, const string& artista, float duracion)
    : nombre(nombre), artista(artista), duracion(duracion) {}

// Métodos para obtener los atributos
string Cancion::getNombre() const {
    return nombre;
}

string Cancion::getArtista() const {
    return artista;
}

float Cancion::getDuracion() const {
    return duracion;
}

// Métodos para modificar los atributos
void Cancion::setNombre(const string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Cancion::setArtista(const string& nuevoArtista) {
    artista = nuevoArtista;
}

void Cancion::setDuracion(float nuevaDuracion) {
    duracion = nuevaDuracion;
}
