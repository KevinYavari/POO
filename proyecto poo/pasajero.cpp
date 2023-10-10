	#include "pasajero.h"
	#include <string>

	pasajero::pasajero(){
    std::cout << "nombre: ";
    std::cin.ignore();
    std::getline(std::cin, nombres);
    std::cout << "apellidos: ";
    std::getline(std::cin, apellidos);
    std::cout << "Dirección: ";
    std::getline(std::cin, direccion);
    std::cout << "fechaDeNacimiento: ";
    std::getline(std::cin, fechaDeNacimiento);
    std::cout << "genero: ";
    std::getline(std::cin, genero);
    std::cout << "cedula: ";
    std::cin >> cedula;
    std::cout << "correo: ";
    std::cin.ignore();
    std::getline(std::cin, correoElectronico);
    std::cout << "Information medica: ";
    std::getline(std::cin, infoMedico);
    std::cout << "Nacionalidad: ";
    std::getline(std::cin, nacionalidad);
    std::cout << "Phone telefono: ";
    std::cin >> numeroDeTelefono;
    std::cout << "numero de Maletas: ";
    std::cin >> maletas;
	}

	pasajero::pasajero(int cedula, const string& nombres, const string& apellidos, const string& fechaDeNacimiento,
	         const string& genero, const string& direccion, int numeroDeTelefono, const string& correoElectronico,
	         const string& nacionalidad, int maletas, const string& infoMedico)
	    : persona(cedula, nombres, apellidos, fechaDeNacimiento, genero, direccion, numeroDeTelefono, correoElectronico) {
	    this->nacionalidad = nacionalidad;
	    this->maletas = maletas;
	    this->infoMedico = infoMedico;
	}

	// Métodos "get" para acceder a los atributos de pasajero
	string pasajero::getNacionalidad(){
	    return nacionalidad;
	}

	int pasajero::getMaletas(){
	    return maletas;
	}

	string pasajero::getInfoMedico(){
	    return infoMedico;
	}
	void pasajero::imprimirInformacion() {
    std::cout << "Cédula: " << getCedula() << std::endl;
    std::cout << "Nombres: " << getNombres() << std::endl;
    std::cout << "Apellidos: " << getApellidos() << std::endl;
    std::cout << "Fecha de Nacimiento: " << getFechaDeNacimiento() << std::endl;
    std::cout << "Género: " << getGenero() << std::endl;
    std::cout << "Dirección: " << getDireccion() << std::endl;
    std::cout << "Número de Teléfono: " << getNumeroDeTelefono() << std::endl;
    std::cout << "Correo Electrónico: " << getCorreoElectronico() << std::endl;
    std::cout << "Nacionalidad: " << this->nacionalidad << std::endl;
    std::cout << "Número de Maletas: " << this->maletas << std::endl;
    std::cout << "Información Médica: " << this->infoMedico << std::endl;
}
