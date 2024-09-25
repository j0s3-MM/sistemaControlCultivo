#include "actuador.h"
using namespace sistemaControlCultivomodel;


actuador :: actuador() {

}
actuador::actuador(String^ tipoActuador, String^ estado) {
	this->tipoActuador = tipoActuador;
	this->estado = estado;
}

String^ actuador::getipoActuador() {
	return this->tipoActuador;
}
void actuador::setipoActuador(String^ tipoActuador) {
	this->tipoActuador = tipoActuador;
}

String^ actuador::getestado() {
	return this->estado;

}
void actuador::setestado(String^ estado) {
	this->estado = estado;
}