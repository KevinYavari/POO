#ifndef __puertaEmbarque_H
#define __puertaEmbarque_H

#include <iostream>
#include <string>
#include "vuelo.h"

using namespace std;

class puertaEmbarque{
protected:

	int numIdentificacion;
	string ubicacion;
	bool disponibilidad = true;
	vector<vuelo*> historial;
	string horaEmbarque;
	vuelo* vueloAsociado = nullptr;

public:
	
	// Constructor de la clase
    puertaEmbarque(int id, const string& ubic, const string& hora); 

    void verInformacion();

    int getnumIdentificacion();

    bool getDisponibilidad();

    void agregarVueloHistorial(vuelo* vue);

    void verVueloAsociado();

    void verHistorial();

    void asignarVuelo(vuelo* vue);





};

#endif