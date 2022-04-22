#include <iostream>
#include <string>
#include <vector>
#include "envio.h"
#include "envioFedEx.h"
#include "envioServicioPostal.h"

using namespace std;

int main() {
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

    

    for(Envio* envio : arregloEnvios){
        int contador = 0;
        double costo = 0;
        costo = envio->calculoEnvio();
        cout<<"Costo envío "<<contador+1<<": "<<costo<<endl;
        totalEnvios+=costo;
    }

    cout<<"Costo total de los envíos: "<<totalEnvios<<endl;
    
    delete envio1;
    delete envio2;
    
    



   return 0;
      
}