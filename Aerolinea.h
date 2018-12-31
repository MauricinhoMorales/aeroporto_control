//
// Created by Mauricio on 28-12-2018.
//

#ifndef UNTITLED1_AEROLINEA_H
#define UNTITLED1_AEROLINEA_H

#include "Vuelo.h"
#include <iostream>
#include <string.h>
using namespace std;

class Aerolinea {
public:
    Aerolinea(char* nombre){
         this->nombre=nombre;
         this->vuelos=NULL;
         this->next=NULL;
    }
private:
    char* nombre;
    Vuelo* vuelos;
    Aerolinea* next;

public:
    Aerolinea* getNext(){return this->next;}
    char * getNombre(){return this->nombre;}
    Vuelo* getVuelos(){return this->vuelos;}

    void setNext (Aerolinea* aerolinea){this->next=aerolinea;}

    void RegistrarVuelo(Vuelo* vuelo);
    int EstadoVuelos();
    int VuelosAtendidos();

    void ImprimirVuelos();
};


#endif //UNTITLED1_AEROLINEA_H
