// José Miguel Ramírez Gutiérrez
// A01712628
// Proyecto Concesionarias
// Clase Coche: hereda de la clase Vehiculo y representa un coche con atributos 
// específicos como el número de puertas y si tiene airbag.

#ifndef COCHE_H
#define COCHE_H

#include "Vehiculo.h"
#include <string>

// Creación de la clase Coche
// La clase Coche extiende la funcionalidad de Vehiculo para incluir características 
// específicas de un coche, como el número de puertas y la presencia de airbags.
class Coche : public Vehiculo {
private:

    //Declara las variables de instancia


    int numero_puerta; 
    bool airbag;       // Indica si el coche tiene airbag (true: tiene, false: no tiene)

public:

    // Constructor

    Coche(); // Constructor por defecto
    Coche(string m, string mod, int y, string t, float p, int n_m, bool a); // Constructor parametrizado

    int get_numero_puerta();
    bool get_airbag();
    string informacion();

    void set_numero_puerta(int n);
    void set_airbag(bool a);
};

// Implementación de la clase

// Constructores

// Constructor por defecto
// Inicializa el coche con valores predeterminados: 0 puertas y sin airbag.
Coche::Coche() : numero_puerta(0), airbag(false) {}

// Constructor parametrizado
// Inicializa los atributos heredados de Vehiculo y los específicos del coche.

Coche::Coche(string m, string mod, int y, string t, float p, int n_m, bool a)
    : Vehiculo(m, mod, y, t, p), numero_puerta(n_m), airbag(a) {}

//@return int: número de puertas del coche
int Coche::get_numero_puerta() { 
    return numero_puerta; 
}

//@return bool: indica si el coche tiene airbag
bool Coche::get_airbag() { 
    return airbag; 
}

//@return string: información detallada del coche
string Coche::informacion() {
    string info = Vehiculo::informacion(); // Llama al método información de Vehiculo
    info += "Numero de puertas: " + to_string(numero_puerta) + "\n"; // Añade el número de puertas
    info += "Cuenta con airbag: " + string(airbag ? "Si" : "No") + "\n"; // Indica si tiene airbag
    return info;
}

//@param int n: número de puertas del coche
void Coche::set_numero_puerta(int n) { 
    numero_puerta = n; 
}

//@param bool a: true si tiene airbag, false si no tiene
void Coche::set_airbag(bool a) { 
    airbag = a; 
}

#endif

