#ifndef ENVIO_H
#define ENVIO_H

class Envio {

    protected:
    double peso;
    double distancia;

    public:
    virtual double calculoEnvio() = 0;
       


};

#endif 