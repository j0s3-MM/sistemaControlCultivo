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

        // Métodos Getters y Setters para estado
        String^ getestado();
        void setestado(String^ estado);

        // Métodos Getters y Setters para duracion
        int getduracion();
        void setduracion(int duracion);

        // Métodos Getters y Setters para cantidad
        int getcantidad();
        void setcantidad(int cantidad);

        // Métodos Getters y Setters para potenciaConsumida
        int getpotenciaConsumida();
        void setpotenciaConsumida(int potenciaConsumida);

        // Métodos Adicionales
        void activar();
        void desactivar();
        void tiempoDuracion();
    };

}