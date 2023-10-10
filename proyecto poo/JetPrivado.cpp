#include "JetPrivado.h"
#include <iostream>

JetPrivado::JetPrivado(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
                       int anioFabricacion, int ubicacion, int estado, const std::string& propietario,
                       const std::vector<std::string>& serviciosABordo, const std::vector<std::string>& destinosFrecuentes)
    : Aeronave(marca, modelo, capacidadPasajeros, velocidadMaxima, autonomia, anioFabricacion, ubicacion, estado),
      propietario(propietario), serviciosABordo(serviciosABordo), destinosFrecuentes(destinosFrecuentes) {
}

void JetPrivado::mostrarInfo() {
    std::cout << "Jet Privado: " << marca << " " << modelo << std::endl;
    std::cout << "Capacidad de Pasajeros: " << capacidadPasajeros << std::endl;
    // ... resto de la implementación de mostrarInfo()
}  