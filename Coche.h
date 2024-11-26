/*
 * Clase Coche
 * Hereda de Vehiculo y contiene atributos y métodos específicos para coches.
 */

#ifndef COCHE_H
#define COCHE_H

#include "Vehiculo.h"
#include <string>

// Clase Coche que hereda de Vehiculo
class Coche: public Vehiculo {
    private:
        // Atributos específicos de Coche
        int numero_puerta;  // Número de puertas
        bool airbag;        // Si el coche tiene airbag

    public:
        // Métodos públicos de la clase Coche
        Coche();  // Constructor por defecto
        Coche(string m, string mod, int y, string t, float p, int n_m, bool a); // Constructor parametrizado

        // Getters para los atributos específicos del coche
        int get_numero_puerta();  
        bool get_airbag();  

        // Método para obtener la información detallada del coche
        string informacion();
        Coche CrearCoche();
        // Setters para los atributos específicos del coche
        void set_numero_puerta(int);
        void set_airbag(bool);
};

// Constructor por defecto
Coche::Coche() {
    numero_puerta = 0;
    airbag = false;
}

// Constructor parametrizado
Coche::Coche(string m, string mod, int y, string t, float p, int n_m, bool a)
    : Vehiculo(m, mod, y, t, p), numero_puerta(n_m), airbag(a) {}

// Getter para el número de puertas
int Coche::get_numero_puerta() { return numero_puerta; }

// Getter para el airbag
bool Coche::get_airbag() { return airbag; }

// Método para crear un coche solicitando los datos desde la consola
Coche Coche::CrearCoche() {
    string marca, modelo, transmision;
    int year, num_puertas;
    float precio;
    bool airbag;

    cout << "Ingrese la marca del coche: ";
    cin >> marca;
    cout << "Ingrese el modelo del coche: ";
    cin >> modelo;
    cout << "Ingrese el año del coche: ";
    cin >> year;
    cout << "Ingrese el tipo de transmision (Automatica/Manual): ";
    cin >> transmision;
    cout << "Ingrese el precio del coche: ";
    cin >> precio;
    cout << "Ingrese el número de puertas: ";
    cin >> num_puertas;
    cout << "¿Tiene airbag? (1 para sí, 0 para no): ";
    cin >> airbag;

    // Crear el objeto Coche usando el constructor parametrizado
    Coche nuevoCoche(marca, modelo, year, transmision, precio, num_puertas, airbag);
    cout << "Coche creado con éxito!\n";
    return nuevoCoche;
}


// Método para obtener la información detallada del coche
string Coche::informacion() {
    string info = Vehiculo::informacion();
    info += "Numero de puertas: " + to_string(numero_puerta) + "\n";
    info += "Cuenta con airbag: " + string(airbag ? "Si" : "No") + "\n";
    return info;
}

// Setter para el número de puertas
void Coche::set_numero_puerta(int n) { numero_puerta = n; }

// Setter para el airbag
void Coche::set_airbag(bool a) { airbag = a; }

#endif
