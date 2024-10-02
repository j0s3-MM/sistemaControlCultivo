#include "sensor.h"
using namespace sistemaControlCultivomodel;

sensor::sensor() {

}
sensor::sensor(planta^ planta, String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito) {
	this->planta = planta;
	this->categoria = categoria;
	this->voltajeOperacion = voltajeOperacion;
	this->valorActual = valorActual;
	this->proposito = proposito;
	this->fechaInstalacion = fechaInstalacion;
	this->frecuencia = frecuencia;
}
String^ sensor::getplanta() {
	return this->planta;
}
void sensor::setcategoria(planta^ planta) {
	this->planta = planta;
}


String^ sensor::getcategoria() {
	return this->categoria;
}
void sensor::setcategoria(String^ categoria) {
	this->categoria = categoria;
}

double sensor::getvalorActual() {
	return this->valorActual;

}
void sensor::setvalorActual(double valorActual) {
	this->valorActual = valorActual;

}

int sensor::getfrecuencia() {
	return this->frecuencia;
}
void sensor::setfrecuencia(int frecuencia) {
	this->frecuencia = frecuencia;

}
String^ sensor::getproposito() {
	return this->proposito;
}
void sensor::setproposito(String^ frecuencia) {
	this->proposito = proposito;
}

int sensor::getvoltajeOperacion(){
	return this->voltajeOperacion;
}
void sensor::setvoltajeOperacion(int voltajeOperacion) {
	this->voltajeOperacion = voltajeOperacion;
}
String^ sensor::getfechaInstalacion() {
	return this->fechaInstalacion;
}
void sensor::setfechaInstalacion(String^ fechaInstalacion) {
	this->fechaInstalacion = fechaInstalacion;
}

