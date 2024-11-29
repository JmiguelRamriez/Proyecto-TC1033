// José Miguel Ramírez Gutiérrez
// A01712628
// Proyecto Concesionarias
// Clase Moto, derivada de Vehículo, que representa una moto con características específicas.

#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"
#include <string>

// Creación de la clase Moto
// La clase Moto hereda de la clase Vehiculo y agrega el atributo tipo, que especifica
// el tipo de moto (por ejemplo: deportiva, cruiser, etc.). Proporciona métodos
// específicos para manejar esta información.
class Moto : public Vehiculo {
private:

    //Declara las variables de instancia

    string tipo; 

public:

    // Constructor

    Moto(); // Constructor por defecto
    Moto(string m, string mod, int y, string t, float p, string t_p); // Constructor parametrizado

    string get_tipo();
    void set_tipo(string t_p);
    string informacion();
};

// Implementación de la clase

// Constructores

// Constructor por defecto
// Inicializa el atributo tipo con un valor vacío.
Moto::Moto() : tipo("") {}

// Constructor parametrizado
Moto::Moto(string m, string mod, int y, string t, float p, string t_p)
    : Vehiculo(m, mod, y, t, p), tipo(t_p) {}

// Métodos getter y setter

//@return string: tipo de la moto
string Moto::get_tipo() { 
    return tipo; 
}

//@param string t_p: nuevo tipo de la moto
void Moto::set_tipo(string t_p) { 
    tipo = t_p; 
}

//@return string: información detallada, combinando atributos de Vehiculo y Moto
string Moto::informacion() {
    string info = Vehiculo::informacion();  // Obtiene información de la clase base Vehiculo
    info += "Tipo de moto: " + tipo + "\n";  // Añade la información específica de la moto
    return info;
}

#endif
