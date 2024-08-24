#include <iostream>
#include <cstring>
#include "funciones.hpp"

using namespace std;

void agregarLibro(Libro libros[], int &cantidadLibros){
    cout << "Ingrese el título del libro: ";
    cin.ignore();
    cin.getline(libros[cantidadLibros].titulo, 100);

    cout << "Ingrese el autor del libro: ";
    cin.getline(libros[cantidadLibros].autor, 100);

    cout << "Ingrese el ISBN del libro: ";
    cin.getline(libros[cantidadLibros].ISBN, 13);

    cout << "Ingrese el año de publicación del libro: ";
    cin >> (libros[cantidadLibros].yearPublication);

    cantidadLibros++;
}

void mostrarLibros(Libro libros[], int cantidadLibros){
    if (cantidadLibros == 0)
    {
        cout << "No hay libros en la lista" << endl;
    } else
    {
        for (int i = 0; i < cantidadLibros; i++){
            cout << i + 1 << "." << libros[i].titulo << "por " << libros[i].autor
            << "ISBN: " << libros[i].ISBN << ", Año: " << libros[i].yearPublication << ")" 
            << endl;
        }
    }
}

void buscarLibroPorTitulo(Libro libros[], int cantidadLibros){
    char titulo[100];
    cout << "Ingrese el título del libro que desea buscar: ";
    cin.ignore();
    cin.getline(titulo, 100);

    bool encontrado = false;

    for (int i = 0; i < cantidadLibros; i++) {
        if (strcmp(libros[i].titulo, titulo) == 0) {
            cout << "Libro encontrado: " << libros[i].titulo << " por " << libros[i].autor << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        cout << "Libro no ha sido encontrado." << endl;
    }
}

void buscarLibroPorISBN(Libro libros[], int cantidadLibros) {
    char ISBN[13];
    cout << "Ingrese el ISBN del libro que desea buscar: ";
    cin.ignore();
    cin.getline(ISBN, 13);
    bool encontrado = false;
    for (int i = 0; i < cantidadLibros; i++) {
        if (strcmp(libros[i].ISBN, ISBN) == 0) {
            cout << "Libro encontrado: " << libros[i].titulo << " por " << libros[i].autor << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Libro no encontrado." << endl;
    }
}

void eliminarLibros(Libro libros[], int &cantidadLibros){
    char ISBN[13];
    cout << "Ingrese el ISBN del libro que desea eliminar: ";
    cin.ignore();
    cin.getline(ISBN, 13);
    
    for (int i = 0; i < cantidadLibros; i++)
    {
        if (strcmp(libros[i].ISBN, ISBN) ==0 )
        {   
            for (int j = i; j < cantidadLibros - 1; j++)
            {
                libros[j] = libros[j + 1];
            }
            cantidadLibros--;
            cout <<"Libro eliminado." << endl;
            return;
        }
        
    }
    cout << "Libro no encontrado." << endl;
}