// Se importan las bibliotecas
#include <iostream>
#include <stdlib.h>

// Incluimos la clase padre para poder hacer la herencia
#include "Cambio.h"

using namespace std;

// Se crea la clase hija con la herencia de la clase padre "Cambio"
class monedaD : public Cambio{
    private:

    public:
        monedaD();
        void setprecioD(float);
        float getprecioD();
};

// Se crea el constructor que contiene la herencia 
monedaD::monedaD() : Cambio(){
}

// Se crea el setter que nos da el precio de cambio de la moneda
void monedaD::setprecioD(float _precioD){
    precio = _precioD;
}

// Se crea el getter del precio de cambio de la moneda 
float monedaD::getprecioD(){
        return precio;
}
