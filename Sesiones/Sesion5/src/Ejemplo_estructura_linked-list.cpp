// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creación de nodo
class Node {
    public:
        int value;
        Node* next;
};

int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Reserva de 3 nodos en la memoria dinámica.
    one = new Node();
    two = new Node();
    three = new Node();

    // Asigna valores
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Conecta nodos
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Imprime la lista enlazada de valores.
    head = one;
    while (head != NULL) {
        cout << head->value;
        head = head->next;
    }

    return 0;
}
