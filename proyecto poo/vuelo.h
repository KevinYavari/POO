#ifndef __vuelo_H
#define __vuelo_H

#include "pasajero.h"
#include "tripulacion.h"
#include <vector>
#include "aeronave.h"
using namespace std;

class vuelo{
private:
	vector<pasajero> pasaje;
	vector<tripulacion> tripulantes;
	string origen;
	string fecha;
	string destino;
	int codigoDeVuelo;
	Aeronave* aero;
	int asientos;
	bool disponible = true;

public:
	vuelo();
	vuelo(int codigoDeVuelo, const string& origen, const string& fecha, const string& destino, Aeronave* aero);
	void agregarPasajero(pasajero &pasa);
	void agregarTripulacion(tripulacion &tripu);
	string getOrigen();
    string getFecha();
    string getDestino();
    int getCodigoDeVuelo();
    void mostrarInformacion();
    void quitarAsiento();
    void mostrarPasajeros();
    void mostrarTripulantes();
    bool getDisponibilidadVuelo();
};

#endif