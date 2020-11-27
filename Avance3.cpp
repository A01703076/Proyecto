#include <iostream>
#include<stdlib.h>
using namespace std;

//Clase Padre
class Cambio {
    protected:
        float dinero;
    public:
        Cambio(float);
};

Cambio::Cambio(float _dinero){
    dinero = _dinero;
}

class Dolar : Cambio{
    private:
        float presio;
    public:
        Dolar(float,float);
        void total();
};
//Primer Clase Hija
Dolar::Dolar(float _dinero, float _presio): Cambio( _dinero){
    presio = _presio;
}

void Dolar::total(){
    float _total;
    _total = dinero / presio;
    cout<< "\nSu cantidad de dinero es: "<<dinero<<" pesos mexicanos y el dolar esta a: "<<presio<<" y el total es: "<< _total <<" dolares"<<endl;
}
//Segunda Clase Hija
class Euro : Cambio{
    private:
        float presio;
    public:
        Euro(float,float);
        void total();
};

Euro::Euro(float _dinero, float _presio): Cambio( _dinero){
    presio = _presio;
}

void Euro::total(){
    float _total;
    _total = dinero / presio;
    cout<< "\nSu cantidad de dinero es: "<<dinero<<" pesos mexicanos y el euro esta a: "<<presio<<" y el total es: "<< _total <<" euros"<<endl;
}
//Tercer Clase Hija
class Libra : Cambio{
    private:
        float presio;
    public:
        Libra(float,float);
        void total();
};

Libra::Libra(float _dinero, float _presio): Cambio( _dinero){
    presio = _presio;
}

void Libra::total(){
    float _total;
    _total = dinero / presio;
    cout<< "\nSu cantidad de dinero es: "<<dinero<<" pesos mexicanos y la libra esta a: "<<presio<<" y el total es: "<< _total <<" libras"<<endl;
}

int main(){
    float dinero;
    cout<<"Ingrese la cantidad de dinero que desea convertir: "; cin>>dinero;
    Dolar p1 = Dolar(dinero, 20.66);
    p1.total();
    Euro p2 = Euro(dinero, 24.39);
    p2.total();
    Libra p3 = Libra(dinero, 27.09);
    p3.total();
}
