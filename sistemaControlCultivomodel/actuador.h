#pragma once
namespace sistemaControlCultivomodel{
	using namespace System;
	ref class actuador {
	protected:
		String^ tipoActuador;
		String^ estado;
		
	public:
		actuador();
		actuador(String^ tipoActuador, String^ estado);

		String^ getipoActuador();
		void setipoActuador(String^ tipoActuador);

		String^ getestado();
		void setestado(String^ estado);

		/*
		metodos propios
			activar()
			desactivar()
		*/
	};
}
