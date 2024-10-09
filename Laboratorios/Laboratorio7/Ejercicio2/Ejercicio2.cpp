/* Archivos necesarios para compilar y ejecutar:
    - sqlite3.h
    - sqlite3.def
    - sqlite3.dll

    Comando en terminal: g++ Ejercicio2.cpp -o main.exe -L . -lsqlite3
    Comando en terminal: ./main.exe
*/

#include <iostream>
#include "sqlite3.h"

static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
    for (int i = 0; i < argc; i++) {
        std::cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << std::endl;
    }
    std::cout << std::endl;
    return 0;
}

int main() {
    sqlite3* db;
    char* errMsg = 0;
    int rc;

    // Abre o crea la base de datos
    rc = sqlite3_open("inventario.db", &db);
    if (rc) {
        std::cerr << "No se pudo abrir la base de datos: " << sqlite3_errmsg(db) << std::endl;
        return 0;
    } else {
        std::cout << "Base de datos abierta con éxito" << std::endl;
    }

    // Crea la tabla Productos
    const char* sql = "CREATE TABLE IF NOT EXISTS Productos ("
                      "IDProducto INTEGER PRIMARY KEY AUTOINCREMENT,"
                      "NombreProducto TEXT NOT NULL,"
                      "Cantidad INT NOT NULL,"
                      "Precio REAL NOT NULL);";
    
    rc = sqlite3_exec(db, sql, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error al crear la tabla: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    } else {
        std::cout << "Tabla creada con éxito" << std::endl;
    }

    // Inserta productos en la tabla
    const char* sqlInsert = "INSERT INTO Productos (NombreProducto, Cantidad, Precio) "
                            "VALUES ('Laptop', 10, 1000.50),"
                            "('Teclado', 50, 20.99),"
                            "('Mouse', 30, 15.50);";
    
    rc = sqlite3_exec(db, sqlInsert, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error al insertar datos: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    } else {
        std::cout << "Datos insertados con éxito" << std::endl;
    }

    // Seleccionar todos los productos
    const char* sqlSelect = "SELECT * FROM Productos;";
    std::cout << "Seleccionando todos los productos..." << std::endl;
    rc = sqlite3_exec(db, sqlSelect, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error al consultar datos: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }

    // Actualizar la cantidad del producto "Mouse" a 25
    const char* sqlUpdate = "UPDATE Productos SET Cantidad = 25 WHERE NombreProducto = 'Mouse';";
    std::cout << "Actualizando la cantidad del producto 'Mouse' a 25..." << std::endl;
    rc = sqlite3_exec(db, sqlUpdate, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error al actualizar datos: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    } else {
        std::cout << "Cantidad de 'Mouse' actualizada a 25." << std::endl;
    }

    // Eliminar el producto "Teclado"
    const char* sqlDelete = "DELETE FROM Productos WHERE NombreProducto = 'Teclado';";
    std::cout << "Eliminando el producto 'Teclado'..." << std::endl;
    rc = sqlite3_exec(db, sqlDelete, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error al eliminar datos: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    } else {
        std::cout << "Producto 'Teclado' eliminado." << std::endl;
    }

    // Seleccionar todos los productos después de la actualización y eliminación
    std::cout << "\nProductos después de las modificaciones:" << std::endl;
    rc = sqlite3_exec(db, sqlSelect, callback, 0, &errMsg);
    if (rc != SQLITE_OK) {
        std::cerr << "Error al consultar datos: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }

    // Cierra la base de datos
    sqlite3_close(db);
    return 0;
}