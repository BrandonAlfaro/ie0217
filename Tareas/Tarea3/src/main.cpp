#include "ABB.hpp"
#include <iostream>

using namespace std;

int main() {
    ArbolBinarioBusqueda arbol; // Instancia arbol
    int opcion, valor; // Declara variables

    do {
        // Menu
        cout << "1. Insertar un nodo\n";
        cout << "2. Recorrido en Inorden\n";
        cout << "3. Eliminar un valor\n";
        cout << "4. Buscar un valor\n";
        cout << "5. Altura del árbol\n";
        cout << "6. Verificar si el árbol está balanceado\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        // Se elige la accion requerida
        switch (opcion) {
            case 1:
                cout << "Ingrese un valor: ";
                cin >> valor;
                arbol.insertar(valor);
                break;
            case 2:
                arbol.inOrden();
                break;
            case 3:
                cout << "Ingrese un valor a eliminar: ";
                cin >> valor;
                if (arbol.buscar(valor)) {
                    cout << "Valor encontrado y eliminado.\n";
                    arbol.eliminar(valor);
                } else {
                    cout << "Valor no encontrado.\n";
                }
                break;
            case 4:
                cout << "Ingrese un valor a buscar: ";
                cin >> valor;
                if (arbol.buscar(valor)) {
                    cout << "Valor encontrado.\n";
                } else {
                    cout << "Valor no encontrado.\n";
                }
                break;
            case 5:
                cout << "Altura del árbol: " << arbol.altura() << endl;
                break;
            case 6:
                if (arbol.estaBalanceado()) {
                    cout << "El árbol está balanceado.\n";
                } else {
                    cout << "El árbol no está balanceado.\n";
                }
                break;
            case 7:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }
    } while (opcion != 7); // Repite el menu hasta opcion 7

    return 0;
}