#include "aeronaves.h"
#include "torreDeControl.h"
#include<vector>

#ifndef __torredecontrolImpl_H
#define __torredecontrolImpl_H

using namespace std;

class TorreDeControlImpl{
public:

    virtual void registrarAeronave(Aeronave* aeronave) = 0 ;
    virtual void enviarMensaje(Aeronave* remitente, const std::string& mensaje) = 0 ;

private:
    vector<Aeronave*> aeronaves;
};


#endif