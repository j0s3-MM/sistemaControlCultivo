#pragma once
#include "requerimiento.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    using namespace System::Collections::Generic;
    ref class planta
    {
    protected:
        int idplanta;
        String^ faseCrecimiento;
        String^ tipoRiego;
        String^ tiempoCosecha;
        String^ etapaMadurez;
        List<Requerimiento^>^ listaRequerimientos;

    public:

        // Constructores
        planta();
        planta(int idplanta, String^ faseCrecimiento, List<Requerimiento^>^ listaRequerimientos, String^ tipoRiego, String^ tiempoCosecha, String^ etapaMadurez);

        // M�todos Getters y Setters para idplanta
        int getidplanta();
        void setidplanta(int idplanta);

        // M�todos Getters y Setters para faseCrecimiento
        String^ getfaseCrecimiento();
        void setfaseCrecimiento(String^ faseCrecimiento);

        // M�todos Getters y Setters para tipoRiego
        String^ gettipoRiego();
        void settipoRiego(String^ tipoRiego);

        // M�todos Getters y Setters para tiempoCosecha
        String^ gettiempoCosecha();
        void settiempoCosecha(String^ tiempoCosecha);

        // M�todos Getters y Setters para etapaMadurez
        String^ getetapaMadurez();
        void setetapaMadurez(String^ etapaMadurez);

        List<Requerimiento^>^ getListaRequerimientos();
        void setListaRequerimientos(List<Requerimiento^>^ listaRequerimientos);
    };

}