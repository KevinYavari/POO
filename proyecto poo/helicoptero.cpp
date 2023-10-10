#include "helicoptero.h"

#include <iostream>

Helicoptero::Helicoptero(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
                         int anioFabricacion, int ubicacion,int estado, int cantidadRotores, int capacidadElevacion, const std::string& usoEspecifico)
    : Aeronave(marca, modelo, capacidadPasajeros, velocidadMaxima, autonomia, anioFabricacion,ubicacion, estado),
      cantidadRotores(cantidadRotores), capacidadElevacion(capacidadElevacion), usoEspecifico(usoEspecifico) {
}

void Helicoptero::mostrarInfo() {
    std::cout << "Helicóptero: " << marca << " " << modelo << std::endl;
    std::cout << "Capacidad de Pasajeros: " << capacidadPasajeros << std::endl;
    // ... resto de la implementación de mostrarInfo()
}
// Getter para obtener la cantidad de rotores del helicóptero
int Helicoptero::getCantidadRotores() {
    return cantidadRotores;
}

// Getter para obtener la capacidad de elevación del helicóptero
int Helicoptero::getCapacidadElevacion() {
    return capacidadElevacion;
}

// Getter para obtener el uso específico del helicóptero
std::string Helicoptero::getUsoEspecifico() {
    return usoEspecifico;
}