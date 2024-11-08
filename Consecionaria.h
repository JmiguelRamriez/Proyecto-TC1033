#include <iostream>
#include <string>
#include "Autos.h"
using namespace std;

class Consecionaria{
    private:
        string ubicacion;
        Autos inventario[3]; 
        int pos = 0;

    public:
        Consecionaria();
        Consecionaria(string u): ubicacion (u) {};

        void agregarAutos(Autos auto1);
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

void Consecionaria::agregarAutos(Autos auto1){
    inventario[pos] = auto1;
    pos++;
}

string Consecionaria::informacion(){
    string info_consecionaria = "";

    info_consecionaria += "La consecionaria esta ubicacada  " + ubicacion + "\n";
    info_consecionaria += "Los autos que tienen en esta consecionaria son: \n";
    for(int i=0; i < pos; i++){
        info_consecionaria += inventario[i].informacion() + "\n";
    }
    return info_consecionaria;
}