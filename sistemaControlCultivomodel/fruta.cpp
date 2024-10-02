#include "fruta.h"
using namespace sistemaControlCultivomodel;

// Constructor por defecto
fruta::fruta(): planta() {
}

// Constructor parametrizado
fruta::fruta(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, String^ nombreFruta) {
    this->nombreFruta = nombreFruta;
}

// Getter y Setter para nombreFruta
String^ fruta::getnombreFruta() {
    return this->nombreFruta;
}

void fruta::setnombreFruta(String^ nombreFruta) {
    this->nombreFruta = nombreFruta;
}