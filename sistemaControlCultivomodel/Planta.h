#pragma once
namespace sistemaControlCultivomodel {
	using namespace System;
	ref class planta {
		protected:
			int idPlanta;
			String^ tipoPlanta;
			String^ estado;

		public:

			planta();
			planta(int idPLanta, String^ tipoplanta, String^ estado);

			int getidPlanta();
			void setidPlanta(int idPlanta);

			String^ getipoPlanta();
			void setipoPlanta(String^ tipoplanta);

			String^ getestado();
			void setestado(String^ estado);
			
			/*
			metodos propios
				evualuarEstado();
				actualizarEstado();
			
			*/
	};
	


}