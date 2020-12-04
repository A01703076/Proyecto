// Bibliotecas importadas
#include <iostream>
#include <stdlib.h>
using namespace std;

// Include que hace que la clase no se defina más de una vez
#ifndef CAMBIO_H_
#define CAMBIO_H_

// Crea la clase padre "Cambio"
class Cambio{
    
// Atributos en protected para que se puedan modificar directamente 
    protected:
        float precio;
        float dinero;
    
// Metodos de la clase
    public:
        Cambio();
        void setDinero(float);
        float getDinero();
        float total(float, float);
};

// Constructor de la clase cambio
Cambio::Cambio(){
}

// Se crea la funcion del setter 
void Cambio::setDinero(float _dinero){
    dinero = _dinero;
}

// Se crea la funcion del getter
float Cambio::getDinero(){
    return dinero;
}

// Se crea la funcion que da el total de las operaciones
float Cambio ::total(float dinero, float precio){
    cout<<"\nSu cantidad convertida es: "<<endl; cout<<dinero/precio;
}
#endif
