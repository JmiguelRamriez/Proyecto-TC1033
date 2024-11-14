#ifndef VEHICULO_H
#define VEHICULO_H

#include<string>

using namespace std;

class Vehiculo{
    private:
        string marca;
        string modelo;
        int year;
        string transmision;
        float precio;     

    public:
        Vehiculo();
        Vehiculo(string m, string mod, int y, string t, float p)
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

Vehiculo::Vehiculo(){
    marca = "";
    modelo = "";
    year = 0;
    transmision = "";
    precio = 0;    
}

string Vehiculo::get_marca(){
    return marca;
}

string Vehiculo::get_modelo(){
    return modelo;
}

int Vehiculo::get_year(){
    return year;
}

string Vehiculo::get_transmision(){
    return transmision;
}

float Vehiculo::get_precio(){
    return precio;
}

string Vehiculo::informacion(){
    string info = "";
    info += "Marca: " + marca + "\n";
    info += "Modelo: " + modelo + "\n";
    info += "Año: " + to_string(year) + "\n";
    info += "Transmision: " + transmision + "\n";
    info += "Precio: " + to_string(precio) + "\n"; 
    return info;
}

void Vehiculo::set_marca(string m){
    marca = m;
}

void Vehiculo::set_modelo(string mod){
    modelo = mod;
}

void Vehiculo::set_year(int y){
    year = y;
}

void Vehiculo::set_transmision(string t){
    transmision = t;
}

void Vehiculo::set_precio(float p ){
    precio = p;
}


#endif
