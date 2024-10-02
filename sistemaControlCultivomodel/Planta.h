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

        // Métodos Getters y Setters para idplanta
        int getidplanta();
        void setidplanta(int idplanta);

        // Métodos Getters y Setters para faseCrecimiento
        String^ getfaseCrecimiento();
        void setfaseCrecimiento(String^ faseCrecimiento);

        // Métodos Getters y Setters para tipoRiego
        String^ gettipoRiego();
        void settipoRiego(String^ tipoRiego);

        // Métodos Getters y Setters para tiempoCosecha
        String^ gettiempoCosecha();
        void settiempoCosecha(String^ tiempoCosecha);

        // Métodos Getters y Setters para etapaMadurez
        String^ getetapaMadurez();
        void setetapaMadurez(String^ etapaMadurez);

        List<Requerimiento^>^ getListaRequerimientos();
        void setListaRequerimientos(List<Requerimiento^>^ listaRequerimientos);
    };

}