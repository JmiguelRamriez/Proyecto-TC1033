/*
 * Clase Consecionaria
 * Representa una concesionaria de vehículos, que contiene un arreglo de coches y motos
 * y permite agregar vehículos y mostrar información sobre ellos.
 */

#ifndef CONSECCIONARIA_H
#define CONSECCIONARIA_H

#include "Coche.h"
#include "Moto.h"
#include <string>



// Clase Consecionaria que maneja la información de una concesionaria
class Consecionaria {
    private:
        // Atributos privados de la concesionaria
        string ubicacion; // Ubicación de la concesionaria
        Coche coches[3];  // Arreglo de coches en la concesionaria (máximo 3)
        Moto motos[2];    // Arreglo de motos en la concesionaria (máximo 2)
        int numCoches = 0; // Número actual de coches en la concesionaria
        int numMotos = 0;  // Número actual de motos en la concesionaria

    public:
        // Métodos públicos de la clase Consecionaria
        Consecionaria(); // Constructor por defecto
        Consecionaria(string u); // Constructor parametrizado

        // Métodos para agregar vehículos a la concesionaria
        void agregarVehiculo(Coche& coche); 
        void agregarVehiculo(Moto& moto);

        // Métodos getter y setter
        string get_ubicacion();
        void set_ubicacion(string u);

        // Método para obtener la información de la concesionaria
        string informacion();
};

// Constructor por defecto
Consecionaria::Consecionaria() {
    ubicacion = "";
}

// Constructor parametrizado para establecer la ubicación de la concesionaria
Consecionaria::Consecionaria(string u) : ubicacion(u) {}

// Getter de ubicación
string Consecionaria::get_ubicacion() { return ubicacion; }

// Setter de ubicación
void Consecionaria::set_ubicacion(string u) { ubicacion = u; }

// Método para agregar un coche a la concesionaria
void Consecionaria::agregarVehiculo(Coche& coche) {
    if (numCoches < 3) {
        coches[numCoches++] = coche;
    }
}

// Método para agregar una moto a la concesionaria
void Consecionaria::agregarVehiculo(Moto& moto) {
    if (numMotos < 2) {
        motos[numMotos++] = moto;
    }
}

// Método para obtener la información de la concesionaria
string Consecionaria::informacion() {
    string info_consecionaria = "";

    info_consecionaria += "La concesionaria esta ubicada en " + ubicacion + "\n";
    info_consecionaria += "Los vehiculos disponibles en esta concesionaria son: \n";

    info_consecionaria += "\n=======Coches=======\n\n";
    for (int i = 0; i < numCoches; ++i) {
        info_consecionaria += coches[i].informacion() + "\n";
    }

    info_consecionaria += "\n=======Motos=======\n\n";
    for (int i = 0; i < numMotos; ++i) {
        info_consecionaria += motos[i].informacion() + "\n";
    }

    return info_consecionaria;
}

#endif
