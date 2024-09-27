#pragma once
#include "actuador.h"
#include "sensor.h"

namespace sistemaControlCultivomodel {
	using namespace System;
	using namespace System::Collections::Generic;
	ref class microcontrolador {
		protected:
			List<sensor^>^ listasensores;
			List<actuador^>^ listactuadores;


		public: 
			microcontrolador();
			microcontrolador(List<sensor^>^ listasensores, List<actuador^>^ listactuadores);

			List<actuador^>^ getlistactuadores();
			void setlistadeactuadores(List<actuador^>^ listactuadores);


			List<sensor^>^ getlistasensores();
			void setlistasensores(List<sensor^>^ listactuadores);

			//procesarLecturas();
			//monitorearSensores();
			//activarActuador()
			//controlarInvernadero()
	};
}