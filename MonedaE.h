// Se importan las bibliotecas
#include <iostream>
#include <stdlib.h>
using namespace std;

//Se incluye la clase padre "Cambio"
#include "Cambio.h"

// Se crea la clase monedaE poniendo la herencia de la clase "Cambio"
class monedaE : public Cambio{
    private:

    public:
        monedaE();
        void setprecioE(float);
        float getprecioE();
};

// Se crea el constructor de la clase monedaE junto con la herencia 
monedaE::monedaE() : Cambio(){
}

// Se crea el setter que nos da el precio de la moneda de cambio del euro 
void monedaE::setprecioE(float _precioD){
    precio = _precioD;
}

// Se crea el getter del precio de la moneda
float monedaE::getprecioE(){
    return precio;
}
