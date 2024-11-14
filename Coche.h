#include<iostream>
#include<string>
#include "Vehiculo.h"
using namespace std;

class Coche: public Vehiculo{
    private:
        int numero_puerta;
        bool airbag;
    
    public:
        Coche();
        Coche(string m, string mod, int y, string t, float p, int n_m, bool a)
        : Vehiculo(m, mod, y, t, p), numero_puerta(n_m), airbag(a){};
        
        int get_numero_puerta();
        bool get_airbag();
        string informacion();

        void set_numero_puerta(int);
        void set_airbag(bool);
};

Coche::Coche(){
    numero_puerta = 0;
    airbag = false;
}

int Coche::get_numero_puerta(){
    return numero_puerta;
}

bool Coche::get_airbag(){
    return airbag;
}

string Coche::informacion() {
    string info = Vehiculo::informacion();
    info += "Numero de puertas: " + to_string(numero_puerta) + "\n";
    info += "Cuenta con airbag: " + string(airbag ? "Si" : "No") + "\n";
    return info;
}


void Coche::set_numero_puerta(int n_m){
    numero_puerta = n_m;
}

void Coche::set_airbag(bool a){
    airbag = a;
}
