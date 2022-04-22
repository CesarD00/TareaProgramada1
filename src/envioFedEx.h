#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"

class EnvioFedEx : public Envio {
    double costoBase;

    public:
    EnvioFedEx(double pesoEnvio, double distanciaEnvio);
    EnvioFedEx();

    virtual double calculoEnvio();
    double getCostoBase();
};

#endif