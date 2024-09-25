#include "Planta.h"
using namespace sistemaControlCultivomodel;


planta::planta() {

}
planta::planta(int idPLanta, String^ tipoplanta, String^ estado) {
	this->idPlanta = idPLanta;
	this->tipoPlanta = tipoplanta;
	this->estado = estado;
}


int planta::getidPlanta() {
	return this->idPlanta;
}
void planta::setidPlanta(int idPlanta) {
	this->idPlanta = idPlanta;

}

String^ planta::getipoPlanta() {
	return this->tipoPlanta;

}
void planta::setipoPlanta(String^ tipoplanta) {
	this->tipoPlanta = tipoPlanta;
}

String^ planta::getestado() {
	return this->estado;
}
void planta::setestado(String^ estado) {
	this->estado = estado;
}