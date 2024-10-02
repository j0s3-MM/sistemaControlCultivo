#pragma once
#include "sensor.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class sensorHumedad:sensor
    {
    protected:
        int idSensor;
        int humedadActual;
        bool estadoUmbral;
        int configResistencia;
        int humedadLimite;
        String^ tipoSalida;

    public:

        // Constructores
        sensorHumedad();
        sensorHumedad(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, int idSensor, int humedadActual, bool estadoUmbral, int configResistencia, int humedadLimite, String^ tipoSalida);

        // Métodos Getters y Setters para idSensor
        int getidSensor();
        void setidSensor(int idSensor);

        // Métodos Getters y Setters para humedadActual
        int gethumedadActual();
        void sethumedadActual(int humedadActual);

        // Métodos Getters y Setters para estadoUmbral
        bool getestadoUmbral();
        void setestadoUmbral(bool estadoUmbral);

        // Métodos Getters y Setters para configResistencia
        int getconfigResistencia();
        void setconfigResistencia(int configResistencia);

        // Métodos Getters y Setters para humedadLimite
        int gethumedadLimite();
        void sethumedadLimite(int humedadLimite);

        // Métodos Getters y Setters para tipoSalida
        String^ gettipoSalida();
        void settipoSalida(String^ tipoSalida);
    };

}