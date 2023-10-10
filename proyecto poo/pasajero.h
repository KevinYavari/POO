#include "persona.h"
#include <iostream>

#ifndef __pasajero_H
#define __pasajero_H

class pasajero : public persona{
protected:
	string nacionalidad;
	int maletas;
	string infoMedico;
public:
	pasajero();
	pasajero(int cedula, const string& nombres, const string& apellidos, const string& fechaDeNacimiento,
             const string& genero, const string& direccion, int numeroDeTelefono, const string& correoElectronico,
             const string& nacionalidad, int maletas, const string& infoMedico);

    // Métodos "get" para acceder a los atributos de pasajero
    string getNacionalidad();
    int getMaletas(); 
    string getInfoMedico(); 
    void imprimirInformacion();
};

#endif