#include "aeronave.h"


Aeronave::Aeronave(const std::string& marca, const std::string& modelo, int capacidadPasajeros, int velocidadMaxima, int autonomia,
                   int anioFabricacion, int ubicacion, int estado)
    : marca(marca), modelo(modelo), capacidadPasajeros(capacidadPasajeros),
      velocidadMaxima(velocidadMaxima), autonomia(autonomia), anioFabricacion(anioFabricacion),
      ubicacion(ubicacion), estado(estado) {}

// Getter para obtener la marca de la aeronave
std::string Aeronave::getMarca() {
    return marca;
}

// Getter para obtener el modelo de la aeronaveB
std::string Aeronave::getModelo() {
    return modelo;
}

// Getter para obtener la capacidad de pasajeros de la aeronave
int Aeronave::getCapacidadPasajeros() {
    return capacidadPasajeros;
}

// Getter para obtener la velocidad máxima de la aeronave
int Aeronave::getVelocidadMaxima() {
    return velocidadMaxima;
}

// Getter para obtener la autonomía de la aeronave
int Aeronave::getAutonomia() {
    return autonomia;
}

// Getter para obtener el año de fabricación de la aeronave
int Aeronave::getAnioFabricacion() {
    return anioFabricacion;
}

// Getter para obtener el estado de la aeronave
int Aeronave::getEstado() {
    return estado;
}

int Aeronave::getUbicacion(){
    return ubicacion;
}

void Aeronave::recibirMensaje(vector<pair<string,int>> mensajes){
    bool flag = true;
    for(auto it = mensajes.begin(); it != mensajes.end() && flag; ++it){
        if(it->first == marca){
            mensajes.erase(it);
            flag = false;
        }
    }
    this->msg = mensajes;

}

void Aeronave::verUbicaciones(){
    cout << "Desde: " << marca << "se recibe ubicacion de:" << endl;
    for(int i=0; i < msg.size() ; i++){
        cout << "Aeronave: " << msg[i].first << " " << "Altitud: " << msg[i].second << endl;
    }
}

int Aeronave::getcantVuelo(){
    return cantVuelos;
}

bool Aeronave::getVolar(){
    return volar;
}

void Aeronave::setVolar(bool l){
    this->volar = l;
}