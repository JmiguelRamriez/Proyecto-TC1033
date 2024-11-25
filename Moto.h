/*
 * Clase Moto
 * Deriva de Vehiculo y contiene atributos y métodos específicos para motos
 */

#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"
#include <string>


// Clase Moto que hereda de Vehiculo
class Moto: public Vehiculo {
    private:
        // Atributo específico de Moto
        string tipo; // Tipo de moto 

    public:
        // Métodos públicos de la clase Moto
        Moto();  // Constructor por defecto
        Moto(string m, string mod, int y, string t, float p, string tipoMoto); // Constructor parametrizado

        // Getter para el tipo de moto
        string get_tipo();  

        // Método para obtener la información detallada de la moto
        string informacion();  

        // Setter para el tipo de moto
        void set_tipo(string);
};

// Constructor por defecto
Moto::Moto() {
    tipo = "";
}

// Constructor parametrizado
Moto::Moto(string m, string mod, int y, string t, float p, string tipoMoto)
    : Vehiculo(m, mod, y, t, p), tipo(tipoMoto) {}

// Getter para el tipo de moto
string Moto::get_tipo() { return tipo; }

// Método para obtener la información detallada de la moto
string Moto::informacion() {
    string info = Vehiculo::informacion();
    info += "Tipo de moto: " + tipo + "\n";
    return info;
}

// Setter para el tipo de moto
void Moto::set_tipo(string t) { tipo = t; }

#endif
