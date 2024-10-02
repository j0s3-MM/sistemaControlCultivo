#include "sensorHumedad.h"
using namespace sistemaControlCultivomodel;

// Constructor por defecto
sensorHumedad::sensorHumedad():sensor() {
}

// Constructor parametrizado
sensorHumedad::sensorHumedad(String^ categoria, double valorActual, int frecuencia, int voltajeOperacion, String^ fechaInstalacion, String^ proposito, int idSensor, int humedadActual, bool estadoUmbral, int configResistencia, int humedadLimite, String^ tipoSalida) : sensor(categoria, valorActual, frecuencia, voltajeOperacion, fechaInstalacion, proposito) {
    this->idSensor = idSensor;
    this->humedadActual = humedadActual;
    this->estadoUmbral = estadoUmbral;
    this->configResistencia = configResistencia;
    this->humedadLimite = humedadLimite;
    this->tipoSalida = tipoSalida;
}

// Getter y Setter para idSensor
int sensorHumedad::getidSensor() {
    return this->idSensor;
}

void sensorHumedad::setidSensor(int idSensor) {
    this->idSensor = idSensor;
}

// Getter y Setter para humedadActual
int sensorHumedad::gethumedadActual() {
    return this->humedadActual;
}

void sensorHumedad::sethumedadActual(int humedadActual) {
    this->humedadActual = humedadActual;
}

// Getter y Setter para estadoUmbral
bool sensorHumedad::getestadoUmbral() {
    return this->estadoUmbral;
}

void sensorHumedad::setestadoUmbral(bool estadoUmbral) {
    this->estadoUmbral = estadoUmbral;
}

// Getter y Setter para configResistencia
int sensorHumedad::getconfigResistencia() {
    return this->configResistencia;
}

void sensorHumedad::setconfigResistencia(int configResistencia) {
    this->configResistencia = configResistencia;
}

// Getter y Setter para humedadLimite
int sensorHumedad::gethumedadLimite() {
    return this->humedadLimite;
}

void sensorHumedad::sethumedadLimite(int humedadLimite) {
    this->humedadLimite = humedadLimite;
}

// Getter y Setter para tipoSalida
String^ sensorHumedad::gettipoSalida() {
    return this->tipoSalida;
}

void sensorHumedad::settipoSalida(String^ tipoSalida) {
    this->tipoSalida = tipoSalida;
}