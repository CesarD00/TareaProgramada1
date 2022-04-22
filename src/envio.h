#ifndef ENVIO_H
#define ENVIO_H

class Envio {

    protected:
    double peso;
    double distancia;

    public:
    virtual double calculoEnvio() = 0;

    void setPeso(double unPeso){
        this->peso = unPeso;
    }

    void setDistancia(double unaDistancia){
        this->distancia = unaDistancia;
    }

    double getPeso(){
        return this->peso;
    }

    double getDistancia(){
        return this->distancia;
    }
       


};

#endif 