#ifndef CANCION_HPP
#define CANCION_HPP

#include <string>

using namespace std;

class Cancion {
private:
    string nombre;
    string artista;
    float duracion;

public:
    // Constructor
    Cancion(const string& nombre, const string& artista, float duracion);

    // Métodos para obtener los atributos
    string getNombre() const;
    string getArtista() const;
    float getDuracion() const;

    // Métodos para modificar los atributos
    void setNombre(const string& nuevoNombre);
    void setArtista(const string& nuevoArtista);
    void setDuracion(float nuevaDuracion);
};

#endif // CANCION_HPP
