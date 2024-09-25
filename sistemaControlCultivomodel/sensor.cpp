#include "sensor.h"
using namespace sistemaControlCultivomodel;

sensor::sensor() {

}
sensor::sensor(int idsensor, String^ tipoSensor, float valorActual, String^ unidadMedida, String^ estado, int frecuencia) {
	this->idsensor = idsensor;
	this->tipoSensor = tipoSensor;
	this->valorActual = valorActual;
	this->unidadMedida = unidadMedida;
	this->estado = estado;
	this->frecuencia = frecuencia;
}

int sensor::getidsensor() {
	return this->idsensor;
}
void sensor::setidsensor(int idsensor) {
	this->idsensor = idsensor;
}

String^ sensor::gettipoSensor() {
	return this->tipoSensor;

}
void sensor::settipoSensorl(String^ tiposensor) {
	this->tipoSensor = tipoSensor;

}

int sensor::getvalorActual() {
	return this->valorActual;

}
void sensor::setvalroActual(float valorActual) {
	this->valorActual = valorActual;

}

String^ sensor::getunidadMedida() {
	return this->unidadMedida;

}
void sensor::setunidadMedida(String^ unidadMedida) {
	this->unidadMedida = unidadMedida;

}

String^ sensor::getestado() {
	return this->estado;
}
void sensor::setestado(String^ estado) {
	this->estado = estado;
}

int sensor::getfrecuencia() {
	return this->frecuencia;
}
void sensor::setfrecuencia(int frecuencia) {
	this->frecuencia = frecuencia;

}