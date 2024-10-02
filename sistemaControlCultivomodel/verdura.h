#pragma once
#include "planta.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class Verdura:planta
    {
    protected:
        String^ tipoVerdura;
        String^ nombreVerdura;
        String^ maduro;

    public:

        // Constructores
        Verdura();
        Verdura(int idplanta, String^ faseCrecimiento, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez, String^ tipoVerdura, String^ nombreVerdura, String^ maduro);

        // M�todos Getters y Setters para tipoVerdura
        String^ gettipoVerdura();
        void settipoVerdura(String^ tipoVerdura);

        // M�todos Getters y Setters para nombreVerdura
        String^ getnombreVerdura();
        void setnombreVerdura(String^ nombreVerdura);

        // M�todos Getters y Setters para maduro
        String^ getmaduro();
        void setmaduro(String^ maduro);
    };

}