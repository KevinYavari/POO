#ifndef AERONAVE_FACTORY_H
#define AERONAVE_FACTORY_H

#include <string>
#include <vector>
#include "aeronave.h"
#include "avion.h"
#include "helicoptero.h"
#include "JetPrivado.h"

class AeronaveFactory {
public:

    static Aeronave* crearAvion(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
          int anioFabricacion, int ubicacion, int estado, int altitudMaxima, int cantidadMotores, const std::string& categoria);

    static Aeronave* crearHelicoptero(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
    int anioFabricacion,int ubicacion, int estado, int cantidadRotores, int capacidadElevacion, const std::string& usoEspecifico);

    static Aeronave* crearJetPrivado(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
       int anioFabricacion, int ubicacion, int estado, const std::string& propietario,
       const std::vector<std::string>& serviciosABordo, const std::vector<std::string>& destinosFrecuentes);
       
};

#endif