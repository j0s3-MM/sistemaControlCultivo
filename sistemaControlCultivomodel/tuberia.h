#pragma once
namespace sistemaControlCultivomodel {

    using namespace System;
    ref class tuberia
    {
    protected:
        String^ material;

    public:

        // Constructores
        tuberia();
        tuberia(String^ material);

        // Métodos Getters y Setters para material
        String^ getmaterial();
        void setmaterial(String^ material);
    };

}