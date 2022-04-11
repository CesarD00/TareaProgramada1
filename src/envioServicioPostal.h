#ifndef ENVIOSERVICIOPOSTAL_H
#define ENVIOSERVICIOPOSTAL_H

#include "envio.h"

class EnvioServicioPostal : public Envio{
    int numClase;
    
    public:
    EnvioServicioPostal(double pesoEnvio, double distanciaEnvio, int numClaseEnvio);

    virtual double calculoEnvio();

};

#endif