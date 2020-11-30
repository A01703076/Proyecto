#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Cambio.h"

class monedaD : public Cambio{
    private:

    public:
        monedaD();
        void setprecioD(float);
        float getprecioD();
};

monedaD::monedaD() : Cambio(){
}

void monedaD::setprecioD(float _precioD){
    precio = _precioD;
}

float monedaD::getprecioD(){
        return precio;
}