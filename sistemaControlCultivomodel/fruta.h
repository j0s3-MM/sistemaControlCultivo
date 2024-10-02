#pragma once
#include "planta.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class fruta:planta
    {
    protected:
        String^ nombreFruta;

    public:

        // Constructores
        fruta();
        fruta(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, String^ nombreFruta);

        // Métodos Getters y Setters para nombreFruta
        String^ getnombreFruta();
        void setnombreFruta(String^ nombreFruta);
    };

}