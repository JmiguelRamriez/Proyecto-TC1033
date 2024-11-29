// José Miguel Ramírez Gutiérrez
// A01712628
// Proyecto Concesionarias
// Clase Concesionaria: gestiona la información de una concesionaria, incluyendo su ubicación
// y el inventario de vehículos (coches y motos).

#ifndef CONSECCIONARIA_H
#define CONSECCIONARIA_H

#include "Coche.h"
#include "Moto.h"
#include <string>

using namespace std;

// Creación de la clase 
class Consecionaria {
private:

    // Declara las variables de instancia

    string ubicacion;     
    Coche coches[10];     // Arreglo para almacenar hasta 10 coches
    Moto motos[10];       // Arreglo para almacenar hasta 10 motos
    int numCoches;        
    int numMotos;         

public:

    // Constuctor

    Consecionaria(); // Constructor por defecto
    Consecionaria(string u); // Constructor parametrizado

    // Métodos getter y setter

    string get_ubicacion();
    void set_ubicacion(string u);
    void agregarVehiculo(Coche& coche);
    void agregarVehiculo(Moto& moto);
    string informacion();
};

// Constructor por defecto

Consecionaria::Consecionaria() : ubicacion(""), numCoches(0), numMotos(0) {}

// Constructor parametrizado
// Inicializa la ubicación de la concesionaria y el resto de valores con sus valores predeterminados.
//@param string u: ubicación de la concesionaria
Consecionaria::Consecionaria(string u) : ubicacion(u), numCoches(0), numMotos(0) {}


//@return string: ubicación actual de la concesionaria
string Consecionaria::get_ubicacion() { 
    return ubicacion; 
}

//@param string u: nueva ubicación de la concesionaria
void Consecionaria::set_ubicacion(string u) { 
    ubicacion = u; 
}

// Métodos para agregar vehículos al inventario

//@param Coche& coche: coche a agregar al inventario
void Consecionaria::agregarVehiculo(Coche& coche) {
    if (numCoches < 10) { // Verifica si hay espacio en el inventario de coches
        coches[numCoches++] = coche; // Agrega el coche y aumenta el contador
    } else {
        cout << "No se pueden agregar más coches, el límite se ha alcanzado." << endl;
    }
}

//@param Moto& moto: moto a agregar al inventario
void Consecionaria::agregarVehiculo(Moto& moto) {
    if (numMotos < 10) { // Verifica si hay espacio en el inventario de motos
        motos[numMotos++] = moto; // Agrega la moto y aumenta el contador
    } else {
        cout << "No se pueden agregar más motos, el límite se ha alcanzado." << endl;
    }
}

//@return string: descripción detallada de la concesionaria y los vehículos disponibles
string Consecionaria::informacion() {
    string info_consecionaria = "La concesionaria está ubicada en " + ubicacion + "\n";
    info_consecionaria += "Los vehiculos disponibles en esta concesionaria son:\n\n";

    // Información de los coches
    info_consecionaria += "======= Coches =======\n\n";
    for (int i = 0; i < numCoches; ++i) {
        info_consecionaria += coches[i].informacion() + "\n";
    }

    // Información de las motos
    info_consecionaria += "======= Motos =======\n\n";
    for (int i = 0; i < numMotos; ++i) {
        info_consecionaria += motos[i].informacion() + "\n";
    }

    return info_consecionaria;
}

#endif
