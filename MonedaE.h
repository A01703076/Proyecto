#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Cambio.h"

class monedaE : public Cambio{
    private:

    public:
        monedaE();
        void setprecioE(float);
        float getprecioE();
};

monedaE::monedaE() : Cambio(){
}

void monedaE::setprecioE(float _precioD){
    precio = _precioD;
}

float monedaE::getprecioE(){
    return precio;
}