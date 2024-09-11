#include "ListaEnlazada.hpp"
#include "Cancion.hpp"
#include <iostream>
#include <string>  // Para usar std::getline

using namespace std;

void menu() {
    cout << "1. Insertar una nueva canción\n";
    cout << "2. Eliminar una canción\n";
    cout << "3. Modificar los datos de una canción existente\n";
    cout << "4. Imprimir la lista de canciones\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() {
    ListaEnlazada lista;

    // Inicialización con 3 canciones predeterminadas
    lista.insertar(new Cancion("Song1", "Artist1", 3.5));
    lista.insertar(new Cancion("Song2", "Artist2", 4.0));
    lista.insertar(new Cancion("Song3", "Artist3", 5.2));

    int opcion;
    do {
        menu();
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            string nombre, artista;
            float duracion;

            // Usamos std::getline para permitir que las entradas tengan espacios
            cout << "Ingrese el nombre de la canción: ";
            getline(cin, nombre);

            cout << "Ingrese el nombre del artista: ";
            getline(cin, artista);

            cout << "Ingrese la duración de la canción en minutos: ";
            cin >> duracion;

            lista.insertar(new Cancion(nombre, artista, duracion));
        } else if (opcion == 2) {
            string nombre;
            cout << "Ingrese el nombre de la canción a eliminar: ";
            getline(cin, nombre);
            lista.eliminarPorNombre(nombre);
        } else if (opcion == 3) {
            string nombre;
            cout << "Ingrese el nombre de la canción a modificar: ";
            getline(cin, nombre);
            lista.modificarCancion(nombre);
        } else if (opcion == 4) {
            lista.imprimirLista();
        }
    } while (opcion != 5);

    cout << "Saliendo y liberando memoria...\n";
    return 0;
}
