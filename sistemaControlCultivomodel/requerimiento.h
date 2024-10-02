#pragma once
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class Requerimiento
    {
    protected:
        int cantidadAgua;
        int humedadRequerida;
        int temperaturaIdeal;
        String^ tipoSuelo;
        int horasLuz;

    public:

        // Constructores
        Requerimiento();
        Requerimiento(int cantidadAgua, int humedadRequerida, int temperaturaIdeal, String^ tipoSuelo, int horasLuz);

        // Métodos Getters y Setters para cantidadAgua
        int getcantidadAgua();
        void setcantidadAgua(int cantidadAgua);

        // Métodos Getters y Setters para humedadRequerida
        int gethumedadRequerida();
        void sethumedadRequerida(int humedadRequerida);

        // Métodos Getters y Setters para temperaturaIdeal
        int gettemperaturaIdeal();
        void settemperaturaIdeal(int temperaturaIdeal);

        // Métodos Getters y Setters para tipoSuelo
        String^ gettipoSuelo();
        void settipoSuelo(String^ tipoSuelo);

        // Métodos Getters y Setters para horasLuz
        int gethorasLuz();
        void sethorasLuz(int horasLuz);

        
    };

}