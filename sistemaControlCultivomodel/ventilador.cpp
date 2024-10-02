#include "Ventilador.h"
using namespace sistemaControlCultivomodel;

// Constructor por defecto
Ventilador::Ventilador():actuador() {
    this->direccion = ""; // Valor predeterminado: cadena vac�a
}

// Constructor parametrizado
Ventilador::Ventilador(String^ estado, int duracion, int cantidad, int potenciaConsumida, String^ direccion) {
    this->direccion = direccion;
}

// Getter y Setter para direccion
String^ Ventilador::getdireccion() {
    return this->direccion;
}

void Ventilador::setdireccion(String^ direccion) {
    this->direccion = direccion;
}