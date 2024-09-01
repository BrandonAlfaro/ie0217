// Stack implementation in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

// Creando una pila
struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

// Verificar si la pila está llena
int isfull(st *s) {
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Verificar si la pila está vacía
int isempty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Agregar elementos a la pila
void push(st *s, int newitem) {
    if (isfull(s)) {
        cout << "PILA LLENA";
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
    size++;
}

// Eliminar elemento de la pila
void pop(st *s) {
    if (isempty(s)) {
        cout << "\nPILA VACÍA\n";
    } else {
        cout << "Elemento eliminado = " << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}

// Imprimir elementos de la pila
void printStack(st *s) {
    printf("Pila: ");
    for (int i = 0; i < size; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Código principal
int main() {
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nDespués de eliminar un elemento\n";
    printStack(s);

    return 0;
}
