#include <iostream>
#include <vector>
#include <string>
#include "aeronaves.h"

class Aeronave;  // Declaración anticipada de la clase Aeronave

// Definición de la clase Mediador
class Mediador {
public:
    virtual void registrarAeronave(Aeronave* aeronave) = 0;
    virtual void informarActualizacionUbicacion(Aeronave* aeronave, const std::string& ubicacion) = 0;
};