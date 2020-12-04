// Jesús Machuca Rodríguez A01703076
// Este codigo es un programa que le pones una cantidad en pesos mexicanos y luego el tipo de cambio del dolar, euro y la libra y te la convierta a cada una de esas monedas

// Bibliotecas importadas 
#include <iostream>
#include <stdlib.h>

// Las clases .h incluidas, para que el main funcione
#include "Cambio.h"
#include "MonedaD.h"
#include "MonedaE.h"
#include "MonedaL.h"

using namespace std;

// Inicializa el main
int main(){
    
// Inicializa las variables de dinero y precio  
    float dinero, precio;
    
// Se crea el objeto 1, que es el de la clase padre  
    Cambio d1;
    cout<<"\nIngrese su cantidadd de dinero en pesos mexicanos: "<<endl; cin>>dinero;    
    d1.setDinero(dinero);
    cout<<"\nIngrese el tipo de cambio en dolares: "<<endl; 
    cin>>precio;
    
// Se crea el objeto 1, que es el que da el cambio en dolares con los setters 
    monedaD m1;
    m1.setprecioD(precio);
    m1.total(dinero,precio);
    cout<<"\nIngrese el tipo de cambio en euros: "<<endl; 
    cin>>precio;
    
// Se crea el objeto 2, que es el que da el cambio en euros con los setters 
    monedaE m2;
    m2.setprecioE(precio);
    m2.total(dinero,precio);
    cout<<"\nIngrese el tipo de cambio en libras: "<<endl; 
    cin>>precio;
    
// Se crea el objeto 3, que es el que da el cambio en libras con los setters 
    monedaL m3;
    m3.setprecioL(precio);
    m3.total(dinero,precio);

    return 0;
}
