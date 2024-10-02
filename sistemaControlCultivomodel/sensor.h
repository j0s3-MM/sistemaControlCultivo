#pragma once
#include "planta.h"
namespace sistemaControlCultivomodel {
	
	using namespace System;

	ref class  sensor
	{
		protected:
			
			String^ categoria;
			planta^ planta;
			double valorActual;
			int frecuencia;
			int voltajeOperacion;
			String^ fechaInstalacion;
			String^ proposito; 


		public:

			sensor();
			sensor(String^ categoria, planta^ planta, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito);
			
			String^ getplanta();
			void setplanta(planta^ planta);

			String^ getcategoria();
			void setcategoria(String^ categoria);


			double getvalorActual();
			void setvalorActual(double valorActual);

			int getfrecuencia();
			void setfrecuencia(int frecuencia);

			int getvoltajeOperacion();
			void setvoltajeOperacion(int voltajeOperacion);

			String^ getfechaInstalacion();
			void setfechaInstalacion(String^ fechaInstalacion);

			String^ getproposito();
			void setproposito(String^ proposito);
	};

}