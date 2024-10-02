#pragma once
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class actuador
    {
    protected:
        String^ estado;
        int duracion;
        int cantidad;
        int potenciaConsumida;

    public:

        // Constructores
        actuador();
        actuador(String^ estado, int duracion, int cantidad, int potenciaConsumida);

        // M�todos Getters y Setters para estado
        String^ getestado();
        void setestado(String^ estado);

        // M�todos Getters y Setters para duracion
        int getduracion();
        void setduracion(int duracion);

        // M�todos Getters y Setters para cantidad
        int getcantidad();
        void setcantidad(int cantidad);

        // M�todos Getters y Setters para potenciaConsumida
        int getpotenciaConsumida();
        void setpotenciaConsumida(int potenciaConsumida);

        // M�todos Adicionales
        void activar();
        void desactivar();
        void tiempoDuracion();
    };

}