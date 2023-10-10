#include "torreDeControl.h"
#include "aeronave.h"
#include <iostream>

torreDeControl::torreDeControl(){
}

void torreDeControl::registrarAeronave(Aeronave* aeronave) {
    aeronaves.push_back(aeronave);
}

void torreDeControl::registrarVuelos(vuelo* vue){
    vuelos.push_back(vue);
}

void torreDeControl::registrarPuertas(puertaEmbarque* puerta){
    puertas.push_back(puerta);
}

void torreDeControl::enviarUbicaciones() {
    for (int i=0 ; i < aeronaves.size() ; i++) {
        if(aeronaves[i]->getEstado() == 2){
            mensajes.push_back(make_pair(aeronaves[i]->getMarca(),aeronaves[i]->getUbicacion()));
        }
    }
    for(int j=0 ; j < aeronaves.size() ; j++){
        if(aeronaves[j]->getEstado() == 2){
            aeronaves[j]->recibirMensaje(mensajes);
        }
    }


}

void torreDeControl::asignarPuertaVuelo(){
    cout << "Vuelos sin asignar: " << endl;
    for(int i=0; i < vuelos.size() ; i++){

        if(vuelos[i]->getDisponibilidadVuelo()){
            cout << i + 1 << ": " << endl;
            vuelos[i]->mostrarInformacion();
        }

    }
    cout << endl;
    cout << "Puertas sin asignar: " << endl;
    for(int j = 0 ; j < puertas.size() ; j++){
        
        if(puertas[j]->getDisponibilidad()){
            cout << j + 1 << ": " << endl;
            puertas[j]->verInformacion();

        }

    }

    int p;

    cout << "Selecciona el vuelo a asignar con el indice: " << endl;
    cin >> p ;

    int q;
    cout << "Seleccione la puerta para el vuelo con el indice: " << endl;
    cin >> q;



    puertas[q-1]->asignarVuelo(vuelos[p-1]);
    puertas[q-1]->agregarVueloHistorial(vuelos[p-1]);

}

void torreDeControl::verPuertasAsignadas(){

    for(int i=0 ; i < puertas.size() ; i++){
        if(!puertas[i]->getDisponibilidad()){
            puertas[i]->verInformacion();
            cout << endl;
        }
    }

}

void torreDeControl::verUltima(){

    puertas[puertas.size() - 1]->verInformacion();

}

void torreDeControl::verPuertas(){

    for(int i=0 ; i < puertas.size() ; i++){
        
            puertas[i]->verInformacion();
            cout << endl;
        
    }


}