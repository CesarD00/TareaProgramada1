#include "envioServicioPostal.h"

EnvioServicioPostal::EnvioServicioPostal(double pesoEnvio, double distanciaEnvio, int numClaseEnvio) {
    this->peso = pesoEnvio;
    this->distancia = distanciaEnvio;
    this->numClase = numClaseEnvio;
}

EnvioServicioPostal::EnvioServicioPostal(){
    this->peso = 0;
    this->distancia = 0;
    this->numClase = 0;
}

double EnvioServicioPostal::calculoEnvio() {
    switch(numClase) {
        case 1:

            if(this->peso >= 0 && this->peso <= 3) {
                return this->distancia * 0.300;    
            }
            else if(this->peso >= 4 && this->peso <= 8) {
                return this->distancia * 0.450;      
            }
            else{
                return this->distancia * 0.600;   
            }

            break;   

        case 2:

            if(this->peso >= 0 && this->peso <= 3) {
                return this->distancia * 0.0280;    
            }
            else if(this->peso >= 4 && this->peso <= 8) {
                return this->distancia * 0.0530;      
            }
            else{
                return this->distancia * 0.0750;   
            }

            break;  

        case 3:

            return this->distancia * 0.0120;

            break;

    } 

}  

void EnvioServicioPostal::setNumClase(int unNumeroClase){
        this->numClase = unNumeroClase;
}  

int EnvioServicioPostal::getNumClase(){
    return this->numClase;
}