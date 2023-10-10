#include "aeronave.h"


#ifndef __helicoptero_H
#define __helicoptero_H

class Helicoptero : public Aeronave {
private:
    int cantidadRotores;
    int capacidadElevacion;
    std::string usoEspecifico;
    
public:

    Helicoptero(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
    int anioFabricacion,int ubicacion, int estado, int cantidadRotores, int capacidadElevacion, const std::string& usoEspecifico);

    void mostrarInfo() override;
    // Getter para obtener la cantidad de rotores del helicóptero
    int getCantidadRotores();

    // Getter para obtener la capacidad de elevación del helicóptero
    int getCapacidadElevacion();

    // Getter para obtener el uso específico del helicóptero
    string getUsoEspecifico();


};

#endif