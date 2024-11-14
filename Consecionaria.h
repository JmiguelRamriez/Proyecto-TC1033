#include <iostream>
#include <string>
#include "Vehiculo.h"
#include "Moto.h"
#include "Coche.h"
using namespace std;

class Consecionaria{
    private:
        string ubicacion;
        Vehiculo inventario[6]; 
        int pos = 0;

    public:
        Consecionaria();
        Consecionaria(string u): ubicacion (u) {};

        void agregarVehiculo(Vehiculo coche1);
        void agregarMoto(Vehiculo moto1);
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

void Consecionaria::agregarVehiculo(Vehiculo coche1 ){
    inventario[pos] = coche1;
    pos++;
}

void Consecionaria::agregarMoto(Vehiculo moto1 ){
    inventario[pos] = moto1;
    pos++;
}

string Consecionaria::informacion(){
    string info_consecionaria = "";

    info_consecionaria += "La consecionaria esta ubicacada  " + ubicacion + "\n";
    info_consecionaria += "Los vehiculos que tienen en esta consecionaria son: \n";
    for(int i=0; i < pos; i++){
        info_consecionaria += inventario[i].informacion() + "\n";
    }
    return info_consecionaria;
}
