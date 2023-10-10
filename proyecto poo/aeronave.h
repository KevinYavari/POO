#include <iostream>
#include <string>
#include <vector>
#include <utility>


using namespace std;


#ifndef __aeronave_H
#define __aeronave_H

class torreDeControl;

class Aeronave {
protected:

    std::string marca;
    std::string modelo;
    int capacidadPasajeros;
    int velocidadMaxima;
    int autonomia;
    int anioFabricacion;
    int ubicacion;
    int estado;
    vector<pair<string,int>> msg;
    int cantVuelos = 0;
    bool volar = false;


public:
    Aeronave(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
             int anioFabricacion, int ubicacion, int estado);

    virtual void mostrarInfo() = 0;
    // Getter para obtener la marca de la aeronave
    string getMarca();

    // Getter para obtener el modelo de la aeronave
    string getModelo();
    // Getter para obtener la capacidad de pasajeros de la aeronave
    int getCapacidadPasajeros();

    // Getter para obtener la velocidad máxima de la aeronave
    int getVelocidadMaxima();

    // Getter para obtener la autonomía de la aeronave
    int getAutonomia();

    // Getter para obtener el año de fabricación de la aeronave
    int getAnioFabricacion();

    // Getter para obtener el estado de la aeronave
    int getEstado();

    int getUbicacion();

    void recibirMensaje(vector<pair<string,int>> mensajes);

    void verUbicaciones();

    int getcantVuelo();

    bool getVolar();

    void setVolar(bool l);

};


#endif