#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <iostream>
#include <string>

using namespace std;

class Empleado {
    protected:
        string nombre;
        int id;
        double salario;

    public:
        Empleado(const string &nombre, int id, double salario); // Firma de la funcion

        virtual ~Empleado() = default; // el default para indicar que la implementacion del destructor es predefinida

        void setNombre(const string &nombre);
        string getNombre() const; // const significa que no modifica ninguna variable

        void setId(int id);
        int getId() const;

        void setSalario(double salario);
        virtual double getSalario() const;

        friend bool compararSalario(const Empleado &e1, const Empleado &e2);

        friend ostream &operator<<(ostream &os, const Empleado &empleado);

        virtual void mostrarInformacion() const = 0; // Igualado a cero convierte un metodo virtual puro, es un metedo que no tiene implementacion 
                                                     // en la clase base, esto hace que toda la implementacion se haga una clase abstracta 
                                                     // no se puede crear un objeto de esta clase, solo puede crear una clase derivada.git





};



#endif // Empleado_HPP