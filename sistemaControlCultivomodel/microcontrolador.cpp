#include "microcontrolador.h"

using namespace sistemaControlCultivomodel;

microcontrolador::microcontrolador(){
	this->listactuadores= gcnew List<actuador^>();
	this->listasensores = gcnew List<sensor^>();

}
microcontrolador::microcontrolador(List<sensor^>^ listasensores, List<actuador^>^ listactuadores){
	this->listasensores = listasensores;
	this->listactuadores = listactuadores;
}
List<actuador^>^ microcontrolador::getlistactuadores(){
	return this->listactuadores;
}
void microcontrolador::setlistadeactuadores(List<actuador^>^ listactuadores) {
	this->listactuadores = listactuadores;
}
List<sensor^>^ microcontrolador::getlistasensores(){
	return this->listasensores;
}
void microcontrolador::setlistasensores(List<sensor^>^ listasensores) {
	this->listasensores = listasensores;
}

