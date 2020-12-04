// Importa la librerias 
#include <iostream>
#include <stdlib.h>


// Incluye la clase "Cambio"
#include "Cambio.h"

using namespace std;

// Se crea la clase monedaL que da el tipo de cambio de la libra y se pone la herencia de la clase "Cambio"
class monedaL : public Cambio{
    private:

    public:
        monedaL();
        void setprecioL(float);
        float getprecioL();
};

// Se crea el contructor de la clase monedaL y se pone la herencia 
monedaL::monedaL() : Cambio(){
}

// Se crea el setter de la clase para dar el precio de la moneda de cambio de la Libra
void monedaL::setprecioL(float _precioD){
    precio = _precioD;
}

// Se crea el getter para regresa el precio puesto en el setter
float monedaL::getprecioL(){
    return precio;
}
