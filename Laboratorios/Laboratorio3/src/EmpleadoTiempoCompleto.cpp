#include "EmpleadoTiempoCompleto.hpp"

using namespace std;

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(const string &nombre, int id, double salario,
double bonificacion, double deduccion) : Empleado (nombre, id, salario), bonificacion
(bonificacion), deduccion(deduccion) {}

void EmpleadoTiempoCompleto::setBonificacion(double boni) {
    this->bonificacion = boni;
}

void EmpleadoTiempoCompleto::setDeduccion(double dedu) {
    this->bonificacion = dedu;
}

double EmpleadoTiempoCompleto::getSalario() const{
    return salario + bonificacion - deduccion;
}

void EmpleadoTiempoCompleto::mostrarInformacion() const {
    cout << *this << ", Bonificación: " << bonificacion << ", Deducción: " << deduccion <<
    endl;
}
