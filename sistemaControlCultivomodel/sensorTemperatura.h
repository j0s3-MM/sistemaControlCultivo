#pragma once
#include "sensor.h"
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class sensorTemperatura:sensor
    {
    protected:
        String^ rangopOperacion;
        double voltajeSalida;
        int idSensor;
        int factorConversion;

    public:

        // Constructores
        sensorTemperatura();
        sensorTemperatura(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, String^ rangopOperacion, double voltajeSalida, int idSensor, int factorConversion);

        // M�todos Getters y Setters para rangopOperacion
        String^ getrangopOperacion();
        void setrangopOperacion(String^ rangopOperacion);

        // M�todos Getters y Setters para voltajeSalida
        double getvoltajeSalida();
        void setvoltajeSalida(double voltajeSalida);

        // M�todos Getters y Setters para idSensor
        int getidSensor();
        void setidSensor(int idSensor);

        // M�todos Getters y Setters para factorConversion
        int getfactorConversion();
        void setfactorConversion(int factorConversion);
    };

}