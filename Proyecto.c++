#include <iostream>
#include<stdlib.h>
using namespace std;

class Dolar {
    private:
        float dinero;
        float presio;
    public: 
        Dolar(float,float);
        void total();
};

Dolar::Dolar(float _dinero, float _presio){
    dinero = _dinero;
    presio = _presio;
}

void Dolar ::total(){
    float _total;
    _total = dinero/presio;
    cout<<"\nSu cantidad de dinero es: "<<dinero<<" pesos y el dolar esta a: "<<presio<<" y el total es: "<< _total <<" dolares"<<endl;
}

class Euro{
    private:
        float dinero;
        float presio;
    public:
        Euro(float, float);
        void total();
};

Euro::Euro(float _dinero, float _presio){
    dinero = _dinero;
    presio = _presio;
}

void Euro ::total(){
    float _total;
    _total = dinero / presio;
    cout<<"\nSu cantidad de dinero es: "<<dinero<<" pesos y el euro esta a: "<<presio<<" y el total es: "<< _total <<" euros"<<endl; 
}

class Libra{
    private:   
        float dinero;
        float presio;
    public:
        Libra(float,float);
        void total();
};

Libra::Libra(float _dinero, float _presio){
    dinero = _dinero;
    presio = _presio;
}

void Libra::total(){
    float _total;
    _total = dinero / presio;
    cout<< "\nSu cantidad de dinero es: "<<dinero<<" pesos y la libra esta a: "<<presio<<" y el total es: "<< _total <<" libras"<<endl;
}

int main (){
    float dinero, presio;
    cout<<"\nIngrese su cantidad de dinero: "; cin >> dinero;
    Dolar p1 = Dolar(dinero,20.66);
    p1.total();
    Euro p2 = Euro(dinero, 24.39);
    p2.total();
    Libra p3 = Libra(dinero, 27.09);
    p3.total();
    return 0;
}