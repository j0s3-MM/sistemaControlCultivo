#pragma once
#include "actuador.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class bomba:actuador
    {
    protected:
        int caudal;

    public:

        // Constructores
        bomba();
        bomba(String^ estado, int duracion, int cantidad, int potenciaConsumida, int caudal);

        // M�todos Getters y Setters para caudal
        int getcaudal();
        void setcaudal(int caudal);
    };

}