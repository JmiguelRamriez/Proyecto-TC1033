// José Miguel Ramírez Gutiérrez
// A01712628
// Proyecto Concesionarias
// Gestión de vehículos  para concesionarias

#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

using namespace std;

// Creación de la clase Vehiculo
// La clase Vehiculo representa un vehículo genérico con atributos básicos como
// marca, modelo, año, transmisión y precio. Es la clase base para futuros
// derivados como coches o motos.
class Vehiculo {
private:

    // Declara las variables de instancia

    string marca;         
    string modelo;        
    int year;             
    string transmision;   
    float precio;         

public:

    //Constructor

    Vehiculo(); // Constructor por defecto
    Vehiculo(string m, string mod, int y, string t, float p); // Constructor parametrizado

    string get_marca();                              
    string get_modelo();                             
    int get_year();                                  
    string get_transmision();                        
    float get_precio();                              

    void set_marca(string m);                        
    void set_modelo(string mod);                     
    void set_year(int y);                            
    void set_transmision(string t);                  
    void set_precio(float p);                        
    string informacion();                            
};

// Implementación de la clase

// Constructores

// Constructor por defecto
// Inicializa los atributos del vehículo con valores predeterminados
Vehiculo::Vehiculo() 
    : marca(""), modelo(""), year(0), transmision(""), precio(0.0) {}

// Constructor parametrizado
// Inicializa los atributos del vehículo con valores proporcionados por el usuario
Vehiculo::Vehiculo(string m, string mod, int y, string t, float p)
    : marca(m), modelo(mod), year(y), transmision(t), precio(p) {}

//@return string: marca del vehículo
string Vehiculo::get_marca() { return marca; }

//@return string: modelo del vehículo
string Vehiculo::get_modelo() { return modelo; }

//@return int: año de fabricación del vehículo
int Vehiculo::get_year() { return year; }

//@return string: tipo de transmisión
string Vehiculo::get_transmision() { return transmision; }

//@return float: precio del vehículo
float Vehiculo::get_precio() { return precio; }

// Métodos setter

//@param string m: nueva marca del vehículo
void Vehiculo::set_marca(string m) { marca = m; }

//@param string mod: nuevo modelo del vehículo
void Vehiculo::set_modelo(string mod) { modelo = mod; }

//@param int y: nuevo año del vehículo
void Vehiculo::set_year(int y) { year = y; }

//@param string t: nuevo tipo de transmisión
void Vehiculo::set_transmision(string t) { transmision = t; }

//@param float p: nuevo precio del vehículo
void Vehiculo::set_precio(float p) { precio = p; }

//@return string: información del vehículo en formato legible
string Vehiculo::informacion() {
    string info = "Marca: " + marca + "\n";
    info += "Modelo: " + modelo + "\n";
    info += "Año: " + to_string(year) + "\n";
    info += "Transmisión: " + transmision + "\n";
    info += "Precio: " + to_string(precio) + "\n";
    return info;
}

#endif
