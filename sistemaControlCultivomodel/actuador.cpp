#include "actuador.h"
using namespace sistemaControlCultivomodel;

// Constructor por defecto
actuador::actuador() {
}

// Constructor parametrizado
actuador::actuador(String^ estado, int duracion, int cantidad, int potenciaConsumida) {
    this->estado = estado;
    this->duracion = duracion;
    this->cantidad = cantidad;
    this->potenciaConsumida = potenciaConsumida;
}

// Getter y Setter para estado
String^ actuador::getestado() {
    return this->estado;
}

void actuador::setestado(String^ estado) {
    this->estado = estado;
}

// Getter y Setter para duracion
int actuador::getduracion() {
    return this->duracion;
}

void actuador::setduracion(int duracion) {
    this->duracion = duracion;
}

// Getter y Setter para cantidad
int actuador::getcantidad() {
    return this->cantidad;
}

void actuador::setcantidad(int cantidad) {
    this->cantidad = cantidad;
}

// Getter y Setter para potenciaConsumida
int actuador::getpotenciaConsumida() {
    return this->potenciaConsumida;
}

void actuador::setpotenciaConsumida(int potenciaConsumida) {
    this->potenciaConsumida = potenciaConsumida;
}

// Método activar
void actuador::activar() {
    this->estado = "Activo";
    Console::WriteLine("El actuador ha sido activado.");
}

// Método desactivar
void actuador::desactivar() {
    this->estado = "Inactivo";
    Console::WriteLine("El actuador ha sido desactivado.");
}

// Método tiempoDuracion
void actuador::tiempoDuracion() {
    Console::WriteLine("Duración actual: {0} segundos.", this->duracion);
}