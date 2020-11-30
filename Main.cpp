//Jesús Machuca Rodríguez A01703076

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Cambio.h"
#include "MonedaD.h"
#include "MonedaE.h"
#include "MonedaL.h"

int main(){
    float dinero, precio;
    Cambio d1;
    cout<<"\nIngrese su cantidadd de dinero en pesos mexicanos: "<<endl; cin>>dinero;    
    d1.setDinero(dinero);
    cout<<"\nIngrese el tipo de cambio en dolares: "<<endl; cin>>precio;
    monedaD m1;
    m1.setprecioD(precio);
    m1.total(dinero,precio);
    cout<<"\nIngrese el tipo de cambio en euros: "<<endl; cin>>precio;
    monedaE m2;
    m2.setprecioE(precio);
    m2.total(dinero,precio);
    cout<<"\nIngrese el tipo de cambio en libras: "<<endl; cin>>precio;
    monedaL m3;
    m3.setprecioL(precio);
    m3.total(dinero,precio);

    return 0;
}