// Include necessary headers
#include <iostream>
#include "pasajero.h"
#include "aeronave.h"
#include "avion.h"
#include "helicoptero.h"
#include "JetPrivado.h"
#include "aeropuerto.h"
#include "vuelo.h"
#include <string>
#include "tripulacion.h"
#include "torreDeControl.h"
#include "AeronaveFactory.h"
#include "puertaEmbarque.h"

void menu() {
    Aeronave* aeronave1 = AeronaveFactory::crearAvion("Boeing", "737", 150, 900, 2500, 2010, 1, 2, 35000, 2, "Comercial");
    Aeronave* aeronave2 = AeronaveFactory::crearAvion("Airbus", "A320", 180, 850, 2800, 2015, 2, 2, 36000, 2, "Comercial");

    torreDeControl* torre = new torreDeControl();
    torre->registrarAeronave(aeronave1);
    torre->registrarAeronave(aeronave2);

    // Crear instancias de vuelos
    vuelo vuelo1(101, "Nueva York", "2023-10-15", "Los Ángeles", aeronave1);
    vuelo vuelo2(102, "Los Ángeles", "2023-10-18", "Miami", aeronave2);
    torre->registrarVuelos(&vuelo1);
    torre->registrarVuelos(&vuelo2);
    puertaEmbarque puerta1(101, "Puerta A",  "08:00");
    puertaEmbarque puerta2(102, "Puerta B", "09:00");
    torre->registrarPuertas(&puerta1);
    torre->registrarPuertas(&puerta2);
    aeropuerto miAeropuerto("Aeropuerto Internacional");
    pasajero* miPasajero = nullptr;
    miAeropuerto.agregarVuelo(vuelo1);
    miAeropuerto.agregarVuelo(vuelo2);
    miAeropuerto.agregarAeronave(aeronave1);
    miAeropuerto.agregarAeronave(aeronave2);
    
     int opcionPrincipal = 0;

    while (opcionPrincipal != 3) {
        std::cout << "Menu Principal" << std::endl;
        std::cout << "1. Usuario" << std::endl;
        std::cout << "2. Empleado" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Elija una opcion: ";
        std::cin >> opcionPrincipal;

        if (opcionPrincipal == 1) {
            int optionUsuario = 0;
            bool continuarUsuario = true;

            while (continuarUsuario) {
                std::cout << "\nMenu de Usuario" << std::endl;
                std::cout << "1. Crear usuario" << std::endl;
                std::cout << "2. Mostrar vuelos" << std::endl;
                std::cout << "3. Comprar vuelo" << std::endl;
                std::cout << "4. Mostrar mi vuelo" << std::endl;
                std::cout << "5. Volver al menu principal" << std::endl;
                std::cout << "Elija una opcion: ";
                std::cin >> optionUsuario;

                switch (optionUsuario) {
                    case 1:
                        miPasajero = new pasajero();
                        break;
                    case 2:
                        miAeropuerto.mostrarVuelos();
                        break;
                    case 3:
                        printf("\ndigite el codigo de vuelo:\n");
                        int l;
                        scanf("%d", &l);
                        miAeropuerto.agregarPasajeroaVuelo(l, miPasajero); // Agregar pasajero al vuelo
                        break;
                    case 4:
                        cout << "Informacion del vuelo y puerta de embarque: " << endl;
                        torre->verUltima();
                        break;
                    case 5:
                        continuarUsuario = false; 
                        break;
                    default:
                        std::cout << "\nOpcion no valida" << std::endl;
                        break;
                }
            }
        } else if (opcionPrincipal == 2) {
            int optionEmpleado = 0;
            bool continuarEmpleado = true;

            while (continuarEmpleado) {
                std::cout << "\nMenu de Empleado" << std::endl;
                std::cout << "1. Gestionar vuelos" << std::endl;
                std::cout << "2. Gestionar aeronaves" << std::endl;
                std::cout << "3. Gestionar torre de control" << std::endl;
                std::cout << "4. Volver al menu principal" << std::endl;
                std::cout << "Elija una opcion: ";
                std::cin >> optionEmpleado;

                int optionGestionarVuelos = 0;
                bool continuarGestionarVuelos = true;

                switch (optionEmpleado) {
                    case 1:
                        

                        while (continuarGestionarVuelos) {
                            std::cout << "\nGestionar Vuelos" << std::endl;
                            std::cout << "1. Mostrar vuelos" << std::endl;
                            std::cout << "2. Mostrar pasajeros" << std::endl;
                            std::cout << "3. Mostrar tripulación" << std::endl;
                            std::cout << "4. Salir del menu de gestionar vuelos" << std::endl;
                            std::cout << "Elija una opcion: ";
                            std::cin >> optionGestionarVuelos;

                            switch (optionGestionarVuelos) {
                                case 1:
                                    miAeropuerto.mostrarVuelos();
                                    break;
                                case 2:
                                    miAeropuerto.mostrarPasajeros();
                                    break;
                                case 3:
                                    miAeropuerto.mostrarTripulantes();
                                    break;
                                case 4:
                                    continuarGestionarVuelos = false;
                                    break;
                                default:
                                    std::cout << "\nOpcion no valida" << std::endl;
                                    break;
                            }
                        }
                        break;
                    case 2:

                        while (continuarGestionarVuelos) {
                            std::cout << "\nGestionar Aeronaves" << std::endl;
                            std::cout << "1. mostrar aeronaves" << std::endl;
                            std::cout << "2. Mostrar ubicaciones" << std::endl;
                            std::cout << "3. Despegar o aterrizar" << std::endl;
                            std::cout << "4. Salir del menú de gestionar aeronaves" << std::endl;
                            std::cout << "Elija una opcion: ";
                            std::cin >> optionGestionarVuelos;

                            switch (optionGestionarVuelos) {
                                case 1:
                                    miAeropuerto.mostrarAeronave();
                                    break;
                                case 2:
                                    cout << "Digite el indice de la Aeronave: " << endl;
                                    int y;
                                    cin >> y;
                                    miAeropuerto.getAeronave()[y-1]->verUbicaciones();
                                    break;
                                case 3:
                                    cout << "Digite el indice de la Aeronave al cual desea despegar o aterrizar: " << endl;
                                    int q;
                                    cin >> q;
                                    cout << "Digite 0 (aterrizar) o 1 (despegar) respectivamente: " << endl;
                                    int p;
                                    cin >> p;
                                    if(p == 1){    
                                        miAeropuerto.getAeronave()[q-1]->setVolar(true);
                                    }
                                    else{
                                        miAeropuerto.getAeronave()[q-1]->setVolar(false);
                                    }
                                    break;
                                case 4:
                                    continuarGestionarVuelos = false;
                                    break;
                                default:
                                    std::cout << "\nOpción no valida" << std::endl;
                                    break;
                            }
                        }
                        break;
                    case 3:
                        while (continuarGestionarVuelos) {
                            std::cout << "\nGestionar Torre de control" << std::endl;
                            std::cout << "1. Enviar ubicaciones" << std::endl;
                            std::cout << "2. Asignar puerta a vuelo" << std::endl;
                            std::cout << "3. Salir del menú de gestionar Torre de control" << std::endl;
                            std::cout << "Elija una opcion: ";
                            std::cin >> optionGestionarVuelos;

                            switch (optionGestionarVuelos) {
                                case 1:
                                    torre->enviarUbicaciones();
                                    break;
                                case 2:
                                    torre->asignarPuertaVuelo();
                                    break;
                                case 3:
                                    continuarGestionarVuelos = false;
                                    break;
                                default:
                                    std::cout << "\nOpcion no valida" << std::endl;
                                    break;
                            }
                        }
                        break;
                    case 4:
                        continuarEmpleado = false;
                        break;
                    default:
                        std::cout << "\nOpcion no valida" << std::endl;
                        break;
                }
            }
        } else if (opcionPrincipal == 3) {
            std::cout << "Saliendo del programa" << std::endl;
        } else {
            std::cout << "Opcion no valida" << std::endl;
        }
    }
}


int main(){
    menu(); // Llama a la función del menú
    return 0;
}
