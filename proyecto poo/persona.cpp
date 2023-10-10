#include "persona.h"

 persona::	persona() : cedula(0), nombres(""), apellidos(""), fechaDeNacimiento(""), genero(""), direccion(""), numeroDeTelefono(0), correoElectronico("") {
        // Constructor por defecto que inicializa los atributos
    }
persona::persona(int cedula, const string& nombres, const string& apellidos, const string& fechaDeNacimiento,
        const string& genero, const string& direccion, int numeroDeTelefono, const string& correoElectronico) {
    this->cedula = cedula;
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->fechaDeNacimiento = fechaDeNacimiento;
    this->genero = genero;
    this->direccion = direccion;
    this->numeroDeTelefono = numeroDeTelefono;
    this->correoElectronico = correoElectronico;
}

// Métodos "get" para acceder a los atributos privados
int persona::getCedula(){
    return cedula;
}

string persona::getNombres(){
    return nombres;
}

string persona::getApellidos(){
    return apellidos;
}

string persona::getFechaDeNacimiento(){
    return fechaDeNacimiento;
}

string persona::getGenero(){
    return genero;
}

string persona::getDireccion(){
    return direccion;
}

int persona::getNumeroDeTelefono(){
    return numeroDeTelefono;
}

string persona::getCorreoElectronico(){
    return correoElectronico;
}