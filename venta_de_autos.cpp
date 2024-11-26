/*
 * Proyecto Concesionarias
 * Jose Miguel Ramirez Gutierrez
 * A01712628
 */

/**
 * Descripción:
 * Este es un programa que simula la gestión de concesionarias de vehículos.
 * El usuario puede interactuar con diferentes concesionarias, ver los vehículos
 * disponibles y elegir qué vehículos le gustaría comprar o consultar. 
 * El sistema está compuesto por varias clases que permiten manejar tanto coches como motos,
 * así como las concesionarias y los clientes.
 */

#include<iostream>    // Biblioteca estándar para operaciones de entrada y salida
#include "Vehiculo.h" // Biblioteca que incluye la clase Vehiculo, la cual sirve de base para los vehículos como Coche y Moto
#include "Consecionaria.h"  // Biblioteca que contiene la clase Consecionaria, que gestiona los vehículos disponibles en la concesionaria
#include "Cliente.h"  // Biblioteca que contiene la clase Cliente, que maneja los datos del cliente

using namespace std;  // Usamos el espacio de nombres estándar para simplificar el código

void menuVehiculo(){
    cout << "Que vehiculo desea agregar?" << endl;
    cout << "1. Coche"<< endl;
    cout << "2. Moto"<< endl;
}

void mostrarMenuC(){
    cout << "A cual consecionaria quiere agregar el nuevo vehiculo" << endl;
    cout << "1. Concesionaria 1" << endl;
    cout << "2. Concesionaria 2" << endl;
}


// Función para mostrar el menú de opciones
void mostrarMenu(){
    cout << "Que concesionaria quieres visitar?" << endl;
    cout << "1. Concesionaria 1" << endl;
    cout << "2. Concesionaria 2" << endl;
    cout << "3. Agregar vehiculo a una consecionaria" << endl;
    cout << "4. Salir" << endl; 
}

int main(){

    // Se crean varios objetos de la clase Coche, con diferentes atributos (marca, modelo, año, etc.)
    Coche coche1("Toyota", "Corolla", 2023, "Automatica", 22000.0, 4, true);
    Coche coche2("Ford", "Explorer", 2022, "Automatica", 35000.0, 5, true);
    Coche coche3("Chevrolet", "Camaro", 2021, "Manual", 40000.0, 2, true);
    Coche coche4("Tesla", "Model 3", 2023, "Automatica", 45000.0, 4, true);
    Coche coche5("Nissan", "Versa", 2020, "Manual", 16000.0, 4, false);
    Coche coche6("RAM", "1500", 2023, "Automatica", 42000.0, 4, true);

    // Se crean objetos de la clase Moto, con diferentes tipos
    Moto moto1("Yamaha", "YZF-R6", 2021, "Manual", 12000.0, "Deportiva");
    Moto moto2("Harley-Davidson", "Iron 883", 2023, "Manual", 10000.0, "Cruiser");
    Moto moto3("BMW", "R 1250 GS", 2022, "Manual", 18000.0, "Aventura");
    Moto moto4("Honda", "PCX 150", 2020, "Automatica", 3500.0, "Scooter");

    // Se crean dos concesionarias con ubicaciones específicas
    Consecionaria consecionaria1("al sur de la ciudad");
    Consecionaria consecionaria2("al norte de la ciudad"); 

    // Se agregan vehículos a las concesionarias
    consecionaria1.agregarVehiculo(coche1); 
    consecionaria1.agregarVehiculo(coche2);  
    consecionaria1.agregarVehiculo(coche3);
    consecionaria1.agregarVehiculo(moto1);
    consecionaria1.agregarVehiculo(moto2);
    consecionaria2.agregarVehiculo(coche4);
    consecionaria2.agregarVehiculo(coche5);
    consecionaria2.agregarVehiculo(coche6);
    consecionaria2.agregarVehiculo(moto3);
    consecionaria2.agregarVehiculo(moto4);
    
    // Llamadas a get_ubicacion() para mostrar la ubicación de cada concesionaria 
    consecionaria1.get_ubicacion();
    consecionaria2.get_ubicacion();

    // Variables para almacenar los datos ingresados por el cliente
    string nombre, correo, consecionaria;
    int numero;

    // Solicitar al usuario que ingrese sus datos
    cout<< "Ingrese su nombre: ", cin>> nombre;
    cout<< "Ingrese su numero de telefono: ", cin>> numero;
    cout<< "Ingrese su correo: ", cin>> correo;

    // Crear un objeto Cliente con los datos ingresados
    Cliente cliente1(nombre, correo, numero, consecionaria);

    // Variable para almacenar la opción seleccionada por el usuario
    int opcion;
    int Nconsecionaria;
    int Nvehiculo;

    do {

    mostrarMenu();

    cin>> opcion;


switch(opcion){
    case 1:
        cliente1.set_consecionaria(consecionaria1.get_ubicacion());
        cout << "Concesionaria seleccionada: " << cliente1.get_concesionaria() << endl;
        cout << consecionaria1.informacion() << endl;
        break; // Agregar break aquí

    case 2:
        cliente1.set_consecionaria(consecionaria2.get_ubicacion());
        cout << "Concesionaria seleccionada: " << cliente1.get_concesionaria() << endl;
        cout << consecionaria2.informacion() << endl;
        break; // Agregar break aquí

    case 3:
        mostrarMenuC();
        cin >> Nconsecionaria;
        if(Nconsecionaria == 1){
            menuVehiculo();
            cin >> Nvehiculo;
            if (Nvehiculo == 1){
                
                cout << "Coche agregado a Concesionaria 1" << endl; 
            }else{
                //moto
                cout << "Moto agregado a Concesionaria 1" << endl; 
            }
        }else{//consecionaria 2
            menuVehiculo();
            cin >> Nvehiculo;
            if (Nvehiculo == 1){
                
                cout << "Coche agregado a Concesionaria 2" << endl; 
            }else{
                //moto
                cout << "Moto agregado a Concesionaria 2" << endl; 
            }
        }
        break; // Agregar break aquí

    case 4:
        cout << "Saliendo del programa..." << endl;
        break;
}

}while (opcion != 4);
return 0;  // Finaliza la ejecución del programa
}
