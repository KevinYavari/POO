#include "tripulacion.h"

tripulacion::tripulacion(){
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
    std::cout << "experiencia: ";
    std::cin >> expeAnos;
    std::cout << "Puesto: ";
    std::getline(std::cin, puesto);
    std::cout << "Phone telefono: ";
    std::cin >> numeroDeTelefono;
    std::cout << "numero de horas de trabajo: ";
    std::cin >> horasDeTrabajo;
}

tripulacion::tripulacion(int cedula, const string& nombres, const string& apellidos, const string& fechaDeNacimiento,
            const string& genero, const string& direccion, int numeroDeTelefono, const string& correoElectronico,
            const string& puesto, int expeAnos, int horasDeTrabajo)
    : persona(cedula, nombres, apellidos, fechaDeNacimiento, genero, direccion, numeroDeTelefono, correoElectronico){
      this->puesto=puesto;
      this->expeAnos=expeAnos; 
      this->horasDeTrabajo=horasDeTrabajo;
    }

string tripulacion::getPuesto(){
    return puesto;
}

int tripulacion::getExpeAnos(){
    return expeAnos;
}

int tripulacion::getHorasDeTrabajo(){
    return horasDeTrabajo;
}

void tripulacion::imprimirInformacion() {
    std::cout << "Cédula: " << getCedula() << std::endl;
    std::cout << "Nombres: " << getNombres() << std::endl;
    std::cout << "Apellidos: " << getApellidos() << std::endl;
    std::cout << "Fecha de Nacimiento: " << getFechaDeNacimiento() << std::endl;
    std::cout << "Género: " << getGenero() << std::endl;
    std::cout << "Dirección: " << getDireccion() << std::endl;
    std::cout << "Número de Teléfono: " << getNumeroDeTelefono() << std::endl;
    std::cout << "Correo Electrónico: " << getCorreoElectronico() << std::endl;
    std::cout << "puesto: " << this->puesto << std::endl;
    std::cout << "esperiencia anos: " << this->expeAnos << std::endl;
    std::cout << "horas de trabajo: " << this->horasDeTrabajo << std::endl;
}