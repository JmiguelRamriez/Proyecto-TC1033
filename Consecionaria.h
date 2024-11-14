#include <iostream>
#include <string>
#include "Vehiculo.h"
#include "Moto.h"
#include "Coche.h"
using namespace std;

class Consecionaria{
    private:
        string ubicacion;
        Coche coches[3];
        Moto motos[5];
        int numCoches = 0;
        int numMotos = 0;

    public:
        Consecionaria();
        Consecionaria(string u): ubicacion (u) {};

        void agregarVehiculo(Coche& coche);
        void agregarVehiculo( Moto& moto);
        string get_ubicacion();
        string informacion();
        void set_ubicacion(string);

};

Consecionaria::Consecionaria(){
    ubicacion ="";
}

string Consecionaria::get_ubicacion(){
    return ubicacion;
}

void Consecionaria::set_ubicacion(string u){
    ubicacion = u;
}

void Consecionaria::agregarVehiculo(Coche& coche ){
    if (numCoches < 3) {
        coches[numCoches++] = coche;
    }
}

void Consecionaria::agregarVehiculo( Moto& moto){
    if (numMotos < 3) {
        motos[numMotos++] = moto;
    }
}

string Consecionaria::informacion(){
    string info_consecionaria = "";

    info_consecionaria += "La consecionaria esta ubicacada  " + ubicacion + "\n";
    info_consecionaria += "Los vehiculos que tienen en esta consecionaria son: \n";

    info_consecionaria += "\nCoches:\n";
    for (int i = 0; i < numCoches; ++i) {
        info_consecionaria += coches[i].informacion() + "\n";
    }

    info_consecionaria += "\nMotos:\n";
    for (int i = 0; i < numMotos; ++i) {
        info_consecionaria += motos[i].informacion() + "\n";
    }

    return info_consecionaria;
}
