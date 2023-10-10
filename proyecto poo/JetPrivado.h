#include "aeronave.h"


#ifndef __jets_H
#define __jets_H

#include <vector>

class JetPrivado : public Aeronave {
public:
    JetPrivado(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
       int anioFabricacion,int ubicacion, int estado, const std::string& propietario,
       const std::vector<std::string>& serviciosABordo, const std::vector<std::string>& destinosFrecuentes);

    void mostrarInfo() override;

private:
    std::string propietario;
    std::vector<std::string> serviciosABordo;
    std::vector<std::string> destinosFrecuentes;
};


#endif