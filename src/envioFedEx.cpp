#include "envioFedEx.h"

EnvioFedEx::EnvioFedEx(double pesoEnvio, double distanciaEnvio) {
    this->peso = pesoEnvio;
    this->distancia = distanciaEnvio;
    this->costoBase = 35.00;   
}

double EnvioFedEx::calculoEnvio() {
    int costoTotal = this->costoBase;

    if(this->distancia > 500) {
        costoTotal = costoTotal + 15.00;
    }

    if(this->peso > 10) {
        costoTotal = costoTotal + 10.00;
    }

    return costoTotal;
}