#ifndef AUTOS_H
#define AUTOS_H

#include<string>

using namespace std;

class Autos{
    private:
        string marca;
        string modelo;
        int year;
        string transmision;
        float precio;     

    public:
        Autos();
        Autos(string m, string mod, int y, string t, float p)
        : marca(m), modelo(mod), year(y), transmision(t), precio(p){};
        string get_marca();
        string get_modelo();
        int get_year();
        string get_transmision();
        float get_precio();

        void set_marca(string);
        void set_modelo(string);
        void set_year(int);
        void set_transmision(string);
        void set_precio(float);
        string informacion();
};

Autos::Autos(){
    marca = "";
    modelo = "";
    year = 0;
    transmision = "";
    precio = 0;    
}

string Autos::get_marca(){
    return marca;
}

string Autos::get_modelo(){
    return modelo;
}

int Autos::get_year(){
    return year;
}

string Autos::get_transmision(){
    return transmision;
}

float Autos::get_precio(){
    return precio;
}

string Autos::informacion(){
    string info = "";
    info += "Marca: " + marca + "\n";
    info += "Modelo: " + modelo + "\n";
    info += "Año: " + to_string(year) + "\n";
    info += "Transmision: " + transmision + "\n";
    info += "Precio: " + to_string(precio) + "\n";

    return info;
}

void Autos::set_marca(string m){
    marca = m;
}

void Autos::set_modelo(string mod){
    modelo = mod;
}

void Autos::set_year(int y){
    year = y;
}

void Autos::set_transmision(string t){
    transmision = t;
}

void Autos::set_precio(float p ){
    precio = p;
}


#endif