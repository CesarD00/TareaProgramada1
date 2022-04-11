#include "envioFedEx.h"

EnvioFedEx::EnvioFedEx(double pesoEnvio, double distanciaEnvio) {
    this->peso = pesoEnvio;
    this->distancia = distanciaEnvio;
    this->costoBase = 35.00;   
}