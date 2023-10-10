#include "vuelo.h"
    #include "pasajero.h"
    #include <vector> 
    vuelo::vuelo(){
    }

    vuelo::vuelo(int codigoDeVuelo, const string& origen, const string& fecha, const string& destino, Aeronave* aero){
        this->codigoDeVuelo = codigoDeVuelo;
        this->origen = origen;
        this->fecha = fecha;
        this->destino = destino;
        this->aero = aero;
        this->asientos = aero->getCapacidadPasajeros();
    }

    string vuelo::getOrigen(){
        return origen;
    }

    string vuelo::getFecha(){
        return fecha;
    }

    string vuelo::getDestino(){
        return destino;
    }

    int vuelo::getCodigoDeVuelo(){
        return codigoDeVuelo;
    }
    void vuelo::mostrarInformacion() {
        std::cout << "Codigo de Vuelo: " << this->codigoDeVuelo << std::endl;
        std::cout << "Origen: " << this->origen << std::endl;
        std::cout << "Fecha: " << this->fecha << std::endl;
        std::cout << "Destino: " << this->destino << std::endl;
        std::cout << "asientos disponibles: " << this->asientos << std::endl;
        std::cout << "Informacion de la Aeronave: " << std::endl;
        if (this->aero != nullptr) {
            std::cout << "Marca de la Aeronave: " << this->aero->getMarca() << std::endl;
            std::cout << "Modelo de la Aeronave: " << this->aero->getModelo() << std::endl;
        } else {
            std::cout << "Aeronave no asignada" << std::endl;
        }
    }

    void vuelo::agregarPasajero(pasajero &pasa) { // Ajusta el nombre de la función
        pasaje.push_back(pasa); // Ajusta el nombre del vector
    }

    void vuelo::agregarTripulacion(tripulacion &tripu){
        tripulantes.push_back(tripu);
    }

    void vuelo::quitarAsiento(){
        this->asientos -= 1;
    }

    void vuelo::mostrarPasajeros(){
        for(auto it = pasaje.begin(); it != pasaje.end(); ++it){
            (*it).imprimirInformacion();
        }
    }

    void vuelo::mostrarTripulantes(){
        for(auto it = tripulantes.begin(); it != tripulantes.end(); ++it){
            (*it).imprimirInformacion();
        }
    }

    bool vuelo::getDisponibilidadVuelo(){
        return disponible;
    }