#pragma once

namespace sistemaControlCultivomodel {
	
	using namespace System;
	ref class  sensor
	{
		protected:
			int idsensor;
			String^ tipoSensor;
			float valorActual;
			String^ unidadMedida;
			String^ estado;
			int frecuencia;


		public:

			sensor();
			sensor(int idsensor, String^ tipoSensor, float valorActual, String^ unidadMedida, String^ estado, int fecuencia);
			
			int getidsensor();
			void setidsensor(int idsensor);

			String^ gettipoSensor();
			void settipoSensorl(String^ tiposensor);

			int getvalorActual();
			void setvalroActual(float valorActual);

			String^ getunidadMedida();
			void setunidadMedida(String^ unidadMedida);

			String^ getestado();
			void setestado(String^ estado);

			int getfrecuencia();
			void setfrecuencia(int valorActual);

			/*
			Metodos propios
				leervalor()
				verificarEstado();
				desactivar()
				
			*/
	};

}