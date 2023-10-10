#include "avion.h"

#include <iostream>

Avion::Avion(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
              int anioFabricacion,int ubicacion, int estado, int altitudMaxima, int cantidadMotores, const std::string& categoria)
    : Aeronave(marca, modelo, capacidadPasajeros, velocidadMaxima, autonomia, anioFabricacion,ubicacion, estado),
      altitudMaxima(altitudMaxima), cantidadMotores(cantidadMotores), categoria(categoria) {
}

void Avion::mostrarInfo() {
    std::cout << "Avión: " << marca << " " << modelo << std::endl;
    std::cout << "Capacidad de Pasajeros: " << capacidadPasajeros << std::endl;
    std::cout << "autonomia: " << autonomia << std::endl;
     
}

// Getter para obtener la altitud máxima del avión
int Avion::getAltitudMaxima() {
    return altitudMaxima;
}

// Getter para obtener la cantidad de motores del avión
int Avion::getCantidadMotores() {
    return cantidadMotores;
}

// Getter para obtener la categoría del avión
std::string Avion::getCategoria() {
    return categoria;
}