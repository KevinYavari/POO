#include "puertaEmbarque.h"

puertaEmbarque::puertaEmbarque(int id, const string& ubic,  const string& hora) 
        : numIdentificacion(id), ubicacion(ubic), horaEmbarque(hora) {
        // Aquí puedes inicializar otros atributos si es necesario
        }

void puertaEmbarque::verInformacion(){

/*
int numIdentificacion;
	string apellidos;
	bool disponibilidad;
	vector<vuelo*> historial;
	string horaEmbarque;
	vuelo* vueloAsociado;
*/

	cout << "Numero de Identificacion: " << numIdentificacion <<endl;
	cout << "Ubicacion: " << ubicacion << endl;
	if(disponibilidad){
		cout << "Puerta Disponible" << endl;
	}
	else{
		cout << "Puerta No Disponible" << endl;
	}
	cout << "Hora de Embarque: " << horaEmbarque << endl;
	if(vueloAsociado == nullptr){
		cout << "No hay vuelo asociado" << endl;
	}
	else{
		cout << "Informacion del vuelo asociado: " << endl;
		vueloAsociado->mostrarInformacion();
	}
}

int puertaEmbarque::getnumIdentificacion(){
	return numIdentificacion;
}

bool puertaEmbarque::getDisponibilidad(){
	return disponibilidad;
}

void puertaEmbarque::agregarVueloHistorial(vuelo* vue){
	historial.push_back(vue);
}


void puertaEmbarque::verHistorial(){
	for(int i=0 ; i< historial.size() ; i++){
		cout << "Vuelo #" << i +1 << endl;
		historial[i]->mostrarInformacion();
		cout << endl;
	}
}

void puertaEmbarque::asignarVuelo(vuelo* vue){
	vueloAsociado = vue;
	disponibilidad = false;
}

