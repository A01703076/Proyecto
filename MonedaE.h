// Se importan las bibliotecas
#include <iostream>
#include <stdlib.h>


//Se incluye la clase padre "Cambio"
#include "Cambio.h"

using namespace std;

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
void monedaE::setprecioE(float _precioE){
    precio = _precioE;
}

// Se crea el getter del precio de la moneda
float monedaE::getprecioE(){
    return precio;
}
