#include <iostream>
#include <stdlib.h>
#ifndef CAMBIO_H_
#define CAMBIO_H_
using namespace std;

class Cambio{
    protected:
        float precio;
        float dinero;
    public:
        Cambio();
        void setDinero(float);
        float getDinero();
        float total(float, float);
};

Cambio::Cambio(){
}

void Cambio::setDinero(float _dinero){
    dinero = _dinero;
}

float Cambio::getDinero(){
    return dinero;
}

float Cambio ::total(float dinero, float precio){
    cout<<"\nSu cantidad convertida es: "<<endl; cout<<dinero/precio;
}
#endif
