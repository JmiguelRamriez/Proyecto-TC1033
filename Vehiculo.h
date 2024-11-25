/*
 * Clase Vehiculo
 * Contiene los métodos y atributos básicos para representar un vehículo
 * de cualquier tipo (coche, moto, etc.), y es la clase base de la jerarquía.
 */

#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

using namespace std;

// Declaración de clase Vehiculo, base de Coche y Moto
class Vehiculo{
    private:
        // Atributos privados del vehículo
        string marca;         // Marca del vehículo
        string modelo;        // Modelo del vehículo
        int year;             // Año de fabricación
        string transmision;   // Tipo de transmisión del vehículo (manual, automática)
        float precio;         // Precio del vehículo

    public:
        // Métodos públicos de la clase Vehiculo
        Vehiculo(); // Constructor por defecto
        Vehiculo(string m, string mod, int y, string t, float p); // Constructor parametrizado

        // Métodos getter
        string get_marca();         // Obtiene la marca
        string get_modelo();        // Obtiene el modelo
        int get_year();             // Obtiene el año
        string get_transmision();   // Obtiene el tipo de transmisión
        float get_precio();         // Obtiene el precio

        // Métodos setter
        void set_marca(string);     // Establece la marca
        void set_modelo(string);    // Establece el modelo
        void set_year(int);         // Establece el año
        void set_transmision(string); // Establece el tipo de transmisión
        void set_precio(float);     // Establece el precio

        // Método para obtener información detallada sobre el vehículo
        string informacion();
};

// Constructor por defecto
Vehiculo::Vehiculo(){
    marca = "";
    modelo = "";
    year = 0;
    transmision = "";
    precio = 0;    
}

// Constructor parametrizado para inicializar el vehículo
Vehiculo::Vehiculo(string m, string mod, int y, string t, float p)
    : marca(m), modelo(mod), year(y), transmision(t), precio(p) {}

// Métodos getter
string Vehiculo::get_marca() { return marca; }
string Vehiculo::get_modelo() { return modelo; }
int Vehiculo::get_year() { return year; }
string Vehiculo::get_transmision() { return transmision; }
float Vehiculo::get_precio() { return precio; }

// Método para obtener información del vehículo
string Vehiculo::informacion(){
    string info = "";
    info += "Marca: " + marca + "\n";
    info += "Modelo: " + modelo + "\n";
    info += "Año: " + to_string(year) + "\n";
    info += "Transmision: " + transmision + "\n";
    info += "Precio: " + to_string(precio) + "\n"; 
    return info;
}

// Métodos setter
void Vehiculo::set_marca(string m) { marca = m; }
void Vehiculo::set_modelo(string mod) { modelo = mod; }
void Vehiculo::set_year(int y) { year = y; }
void Vehiculo::set_transmision(string t) { transmision = t; }
void Vehiculo::set_precio(float p) { precio = p; }

#endif
