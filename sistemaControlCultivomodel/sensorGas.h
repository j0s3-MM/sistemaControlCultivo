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

        // Métodos Getters y Setters para resistencia
        double getresistencia();
        void setresistencia(double resistencia);

        // Métodos Getters y Setters para temperaturaOperacion
        int gettemperaturaOperacion();
        void settemperaturaOperacion(int temperaturaOperacion);

        // Métodos Getters y Setters para humedadOperacion
        int gethumedadOperacion();
        void sethumedadOperacion(int humedadOperacion);

        // Métodos Getters y Setters para tiempoCalentamiento
        int gettiempoCalentamiento();
        void settiempoCalentamiento(int tiempoCalentamiento);

        // Métodos Getters y Setters para rangoDeteccion
        String^ getrangoDeteccion();
        void setrangoDeteccion(String^ rangoDeteccion);

        // Métodos Getters y Setters para gasDeteccion
        String^ getgasDeteccion();
        void setgasDeteccion(String^ gasDeteccion);
    };

}


