#include "AeronaveFactory.h"
#include "avion.h"
#include "helicoptero.h"
#include "JetPrivado.h"

Aeronave* AeronaveFactory::crearAvion(const std::string& marca, const std::string& modelo, int capacidadPasajeros,
                                      int velocidadMaxima, int autonomia, int anioFabricacion,int ubicacion, int estado,
                                     int altitudMaxima, int cantidadMotores,
                                      const std::string& categoria) {
    return new Avion(marca, modelo, capacidadPasajeros, velocidadMaxima, autonomia, anioFabricacion,ubicacion, estado,
                              altitudMaxima, cantidadMotores, categoria);
}



Aeronave* AeronaveFactory::crearHelicoptero(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
    int anioFabricacion,int ubicacion, int estado, int cantidadRotores, int capacidadElevacion, const std::string& usoEspecifico) {
    return new Helicoptero(marca, modelo, capacidadPasajeros, velocidadMaxima, autonomia, anioFabricacion, ubicacion, estado,
                           cantidadRotores, capacidadElevacion, usoEspecifico);
}


Aeronave* AeronaveFactory::crearJetPrivado(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
       int anioFabricacion,int ubicacion, int estado, const std::string& propietario,
       const std::vector<std::string>& serviciosABordo, const std::vector<std::string>& destinosFrecuentes) {
    return new JetPrivado(marca, modelo, capacidadPasajeros, velocidadMaxima, autonomia, anioFabricacion, ubicacion, estado,
                          propietario, serviciosABordo, destinosFrecuentes);
}