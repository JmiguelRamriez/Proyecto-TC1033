#ifndef CONSECCIONARIA_H
#define CONSECCIONARIA_H

#include "Coche.h"
#include "Moto.h"
#include <string>

// Clase Consecionaria que maneja la información de una concesionaria
class Consecionaria {
    private:
        string ubicacion;   // Ubicación de la concesionaria
        Coche coches[10];    // Arreglo de coches en la concesionaria (máximo 5)
        Moto motos[10];      // Arreglo de motos en la concesionaria (máximo 5)
        int numCoches = 0;  // Número actual de coches en la concesionaria
        int numMotos = 0;   // Número actual de motos en la concesionaria

    public:
        // Constructores
        Consecionaria();
        Consecionaria(string u);

        // Métodos para agregar vehículos
        void agregarVehiculo(Coche& coche);
        void agregarVehiculo(Moto& moto);
        void agregarnuevVehiculo(Moto& nuevmoto);

        // Métodos getter y setter
        string get_ubicacion();
        void set_ubicacion(string u);

        // Método para obtener la información de la concesionaria
        string informacion();
};

// Constructor por defecto
Consecionaria::Consecionaria() : ubicacion("") {}

// Constructor parametrizado para establecer la ubicación de la concesionaria
Consecionaria::Consecionaria(string u) : ubicacion(u) {}

// Getter de ubicación
string Consecionaria::get_ubicacion() { return ubicacion; }

// Setter de ubicación
void Consecionaria::set_ubicacion(string u) { ubicacion = u; }

// Método para agregar un coche a la concesionaria
void Consecionaria::agregarVehiculo(Coche& coche) {
    if (numCoches < 5) {
        coches[numCoches++] = coche;
    } else {
        cout << "No se pueden agregar más coches, el límite se ha alcanzado." << endl;
    }
}

// Método para agregar una moto a la concesionaria
void Consecionaria::agregarVehiculo(Moto& moto) {
    if (numMotos < 5) {
        motos[numMotos++] = moto;
    } else {
        cout << "No se pueden agregar más motos, el límite se ha alcanzado." << endl;
    }
}

void Consecionaria::agregarnuevVehiculo(Moto& nuevmoto) {
    if (numMotos < 5) {
        motos[numMotos++] = nuevmoto;
    } else {
        cout << "No se pueden agregar más motos, el límite se ha alcanzado." << endl;
    }
}



// Método para obtener la información de la concesionaria
string Consecionaria::informacion() {
    string info_consecionaria = "La concesionaria está ubicada en " + ubicacion + "\n";
    info_consecionaria += "Los vehículos disponibles en esta concesionaria son:\n\n";

    info_consecionaria += "======= Coches =======\n\n";
    for (int i = 0; i < numCoches; ++i) {
        info_consecionaria += coches[i].informacion() + "\n";
    }

    info_consecionaria += "======= Motos =======\n\n";
    for (int i = 0; i < numMotos; ++i) {
        info_consecionaria += motos[i].informacion() + "\n";
    }

    return info_consecionaria;
}

#endif
