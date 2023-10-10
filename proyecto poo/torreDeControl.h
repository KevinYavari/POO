#ifndef __torreDeControl_H
#define __torreDeControl_H

#include "aeronave.h"
#include "vuelo.h"
#include "puertaEmbarque.h"
#include<vector>
#include<iostream>
#include<string>
#include<utility>

using namespace std;

class torreDeControl {

public:

    torreDeControl();
    //registra aeronave 
    void registrarAeronave(Aeronave* aeronave);

    void registrarVuelos(vuelo* vue);

    void registrarPuertas(puertaEmbarque* puerta);

    void enviarUbicaciones();

    void asignarPuertaVuelo();

    void verPuertasAsignadas();

    void verUltima();

    void verPuertas();


private:

    std::vector<Aeronave*> aeronaves;
    vector<pair<string,int>> mensajes;
    vector<vuelo*> vuelos;
    vector<puertaEmbarque*> puertas;

};


#endif

