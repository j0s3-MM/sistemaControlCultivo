#include "bomba.h"
using namespace sistemaControlCultivomodel;

// Constructor por defecto
bomba::bomba():actuador() {
    this->caudal = 0; // Valor predeterminado
}

// Constructor parametrizado
bomba::bomba(String^ estado, int duracion, int cantidad, int potenciaConsumida, int caudal) {
    this->caudal = caudal;
}

// Getter y Setter para caudal
int bomba::getcaudal() {
    return this->caudal;
}

void bomba::setcaudal(int caudal) {
    this->caudal = caudal;
}