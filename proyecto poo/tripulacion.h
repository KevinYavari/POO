#include "persona.h"


#ifndef __tripulacion_H
#define __tripulacion_H

#include <iostream>
#include <string>

using namespace std;


class tripulacion : public persona{
private:
	string puesto;
	int expeAnos;
	int horasDeTrabajo;
public:
	tripulacion();
	tripulacion(int cedula, const string& nombres, const string& apellidos, const string& fechaDeNacimiento,
                const string& genero, const string& direccion, int numeroDeTelefono, const string& correoElectronico,
                const string& puesto, int expeAnos, int horasDeTrabajo);
    string getPuesto();
    int getExpeAnos();
    int getHorasDeTrabajo();
    void imprimirInformacion();
};

#endif