#include "JetPrivado.h"
#include "helicoptero.h"
#include "avion.h"
#include "vuelo.h"
#include "aeronave.h"
#include "pasajero.h"
#include "tripulacion.h"
#include <vector> 

#ifndef __aeropuerto_H
#define __aeropuerto_H

class aeropuerto {
private:
    vector<Aeronave*> aeronav;
    vector<vuelo> vuelos;
    vector<tripulacion> tripu; 
    string nombreAeropuerto;

public:
    aeropuerto(const string& nombreAeropuerto);
    void agregarVuelo(vuelo &a);
    void quitarVuelos(vuelo &a);
    void agregarAeronave(Aeronave* &a);
    void agregarPasajeroaVuelo(int codigo,pasajero* a);
    void agregarTripu(tripulacion &a);
    vector<pasajero> getPasajeros();
    vector<Aeronave*> getAeronave();
    vector<vuelo> getVuelo();
    void mostrarVuelos();
    void mostrarPasa(int l);
    void mostrarTripu(int l);
    void mostrarAeronave();
    void mostrarEstado(int l);
    void cambiarVolar(int l);
    void mostrarPasajeros();
    void mostrarTripulantes();
};


#endif