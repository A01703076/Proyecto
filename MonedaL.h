#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Cambio.h"

class monedaL : public Cambio{
    private:

    public:
        monedaL();
        void setprecioL(float);
        float getprecioL();
};

monedaL::monedaL() : Cambio(){
}

void monedaL::setprecioL(float _precioD){
    precio = _precioD;
}

float monedaL::getprecioL(){
    return precio;
}