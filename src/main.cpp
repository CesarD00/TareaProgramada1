#include <iostream>
#include <string>
#include <vector>
#include "envio.h"
#include "envioFedEx.h"
#include "envioServicioPostal.h"

using namespace std;

int main() {

    // Ejemplo de uso
    double totalEnvios = 0;
    vector<Envio*> arregloEnvios;

    EnvioServicioPostal* envio1 = new EnvioServicioPostal();
    envio1->setDistancia(2000);
    envio1->setNumClase(2);
    envio1->setPeso(3);

    EnvioFedEx* envio2 = new EnvioFedEx();

    envio2->setDistancia(700);
    envio2->setPeso(6);

    arregloEnvios.push_back(envio1);
    arregloEnvios.push_back(envio2);

    cout<<"Peso: "<<envio1->getPeso()<<" Distancia: "<<envio1->getDistancia()<<" Clase: "<<envio1->getNumClase()<<endl;
    cout<<"Peso: "<<envio2->getPeso()<<" Distancia: "<<envio2->getDistancia()<<" Costo base: "<<envio2->getCostoBase()<<endl;

    for(Envio* envio : arregloEnvios){
        int contador;
        double costo = 0;
        costo = envio->calculoEnvio();
        cout<<"Costo envío "<<contador+1<<": "<<costo<<endl;
        totalEnvios+=costo;
        
        contador++;
    }

    cout<<"Costo total de los envíos: "<<totalEnvios<<endl;
    
    delete envio1;
    delete envio2;

    return 0;
      
}