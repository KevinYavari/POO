#include "aeropuerto.h"
#include "vuelo.h"

aeropuerto::aeropuerto(const string& nombreAeropuerto) {
    this->nombreAeropuerto = nombreAeropuerto;
}

void aeropuerto::quitarVuelos(vuelo &a) {
    int flag = 0; // Inicializamos flag a 0
    for (auto it = vuelos.begin(); it != vuelos.end() && flag == 0; ++it) {
        if ((*it).getCodigoDeVuelo() == a.getCodigoDeVuelo()) {
            vuelos.erase(it);
            flag = 1; 
        }
    }
}

void aeropuerto::agregarVuelo(vuelo &a){
    vuelos.push_back(a);
}

void aeropuerto::agregarAeronave(Aeronave* &a){
    aeronav.push_back(a);
}

void aeropuerto::agregarPasajeroaVuelo(int codigo, pasajero* a){
    for(auto it = vuelos.begin(); it != vuelos.end(); ++it){
        if(codigo == (*it).getCodigoDeVuelo()){
            (*it).agregarPasajero(*a);
            (*it).quitarAsiento();
        }
    }
}

void aeropuerto::agregarTripu(tripulacion &a){
    tripu.push_back(a);
}


vector<Aeronave*> aeropuerto::getAeronave(){
    return aeronav;
}

vector<vuelo> aeropuerto::getVuelo(){
    return vuelos;
}

void aeropuerto::mostrarVuelos() {
    std::cout << "Lista de Vuelos en " << nombreAeropuerto << ":" << std::endl;

    for (std::vector<vuelo>::iterator it = vuelos.begin(); it != vuelos.end(); ++it) {
        vuelo v = *it; // Accede al vuelo actual utilizando *it
        v.mostrarInformacion(); // Llama a la función mostrarInformacion de cada vuelo
        std::cout << "-----------------------" << std::endl;
    }
}

void aeropuerto::mostrarPasa(int l){
    for(auto it = vuelos.begin(); it != vuelos.end(); ++it)
        if((*it).getCodigoDeVuelo() == l){
            (*it).mostrarPasajeros();
        }
    }  

void aeropuerto::mostrarTripu(int l){
    for(auto it = vuelos.begin(); it != vuelos.end(); ++it)
        if((*it).getCodigoDeVuelo() == l){
            (*it).mostrarTripulantes();
        }
    }   

void aeropuerto::mostrarAeronave(){
    int i = 1;
    for(auto it = aeronav.begin(); it != aeronav.end(); ++it){
        printf("%d\n",&i);
        (*it)->mostrarInfo();
    }
}

void aeropuerto::cambiarVolar(int l){
    if (aeronav[l-1]->getVolar() == false)
    {
         aeronav[l - 1]->setVolar(true);
         printf("La aeronave ha despegado");
    }else{
        aeronav[l - 1]->setVolar(true);
        printf("La aeronave ha aterrizado");
    }
}

void aeropuerto::mostrarPasajeros(){
    for(auto it = vuelos.begin(); it != vuelos.end(); ++it)
         (*it).mostrarPasajeros(); 
}

void aeropuerto::mostrarTripulantes(){
    for(auto it = vuelos.begin(); it != vuelos.end(); ++it)
            (*it).mostrarTripulantes();
    }