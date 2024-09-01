#include <iostream>
using namespace std;

class Student {
    private:
        int age;

    public:
    /* Constructor inicializa la variable age en 23. */
        Student() : age(23) {}

        void getAge() {
        cout << "Age = " << age << endl;
        }
};

int main() {
    /* Se asigna memoria dinámica al objeto. */
    Student* brandon = new Student();

    /* Llama a la función getAge(). */
    brandon->getAge();

    /* Se libera la memoria dinámica asignada. */
    delete brandon;

    return 0;
}
