#ifndef __persona_H
#define __persona_H

#include <iostream>
#include <string>

using namespace std;

class persona{
protected:
	int cedula;
	string nombres;
	string apellidos;
	string fechaDeNacimiento;
	string genero;
	string direccion;
	int numeroDeTelefono;
	string correoElectronico;
public:
	// Constructor
	persona();
    persona(int cedula, const string& nombres, const string& apellidos, const string& fechaDeNacimiento,
            const string& genero, const string& direccion, int numeroDeTelefono, const string& correoElectronico);

    // Métodos "get" para acceder a los atributos privados
    int getCedula();

    string getNombres();

    string getApellidos();
    string getFechaDeNacimiento(); 

    string getGenero();

    string getDireccion();
    int getNumeroDeTelefono();
    string getCorreoElectronico();
};

#endif