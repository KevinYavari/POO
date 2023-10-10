#include "aeronave.h"

#ifndef __avion_H
#define __avion_H

class Avion : public Aeronave {
private:
    int altitudMaxima;
    int cantidadMotores;
    std::string categoria;

public:



    Avion(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
          int anioFabricacion, int ubicacion, int estado, int altitudMaxima, int cantidadMotores, const std::string& categoria);


    void mostrarInfo() override;
    // Getter para obtener la altitud máxima del avión
    int getAltitudMaxima();
    // Getter para obtener la cantidad de motores del avión
    int getCantidadMotores();
    // Getter para obtener la categoría del avión
    string getCategoria();


};

#endif