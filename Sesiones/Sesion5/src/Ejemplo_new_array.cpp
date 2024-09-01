#include <iostream>
using namespace std;

int main() {

    /* Declara variable*/
    int num;

    /* Imprime y recibe información. */
    cout << "Enter total number of students: ";
    cin >> num;

    /* Declara un flotante puntero. */
    float* ptr;

    /* Asiga memoria dinámica a la cantidad de números flotantes. */
    ptr = new float[num];
    
    /* Imprime y recibe información*/
    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    /* Imprime la información*/
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    /* Libera la memoria dinámica asignada. */
    delete[] ptr;

    return 0;
}
