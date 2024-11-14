#include<iostream>
#include<string>
#include "Vehiculo.h"
using namespace std;

class Moto: public Vehiculo{
    private:
        string tipo;

    public:
        Moto();
        Moto(string m, string mod, int y, string t, float p, string tipoMoto)
        : Vehiculo(m, mod, y, t, p), tipo(tipoMoto){};
        
        string get_tipo();
        string informacion();
        
        void set_tipo(string);
};

Moto::Moto(){
    tipo = "";
}

string Moto::get_tipo(){
    return tipo;
}

string Moto::informacion(){
    string info = Vehiculo::informacion();
    info += "Tipo de moto: " + tipo + "\n";
    return info;
}



void Moto::set_tipo(string t){
    tipo = t;
}