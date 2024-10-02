#pragma once
#include "sensor.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class sensorGas:sensor
    {
    protected:
        double resistencia;
        int temperaturaOperacion;
        int humedadOperacion;
        int tiempoCalentamiento;
        String^ rangoDeteccion;
        String^ gasDeteccion;

    public:

        // Constructores
        sensorGas();
        sensorGas(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, double resistencia, int temperaturaOperacion, int humedadOperacion, int tiempoCalentamiento, String^ rangoDeteccion, String^ gasDeteccion);

        // M�todos Getters y Setters para resistencia
        double getresistencia();
        void setresistencia(double resistencia);

        // M�todos Getters y Setters para temperaturaOperacion
        int gettemperaturaOperacion();
        void settemperaturaOperacion(int temperaturaOperacion);

        // M�todos Getters y Setters para humedadOperacion
        int gethumedadOperacion();
        void sethumedadOperacion(int humedadOperacion);

        // M�todos Getters y Setters para tiempoCalentamiento
        int gettiempoCalentamiento();
        void settiempoCalentamiento(int tiempoCalentamiento);

        // M�todos Getters y Setters para rangoDeteccion
        String^ getrangoDeteccion();
        void setrangoDeteccion(String^ rangoDeteccion);

        // M�todos Getters y Setters para gasDeteccion
        String^ getgasDeteccion();
        void setgasDeteccion(String^ gasDeteccion);
    };

}


