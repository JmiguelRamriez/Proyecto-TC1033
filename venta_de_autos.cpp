#include<iostream>
#include "Vehiculo.h"
#include "Consecionaria.h"
#include "Cliente.h"
using namespace std;


int main(){
    Coche coche1("Toyota", "Corolla", 2023, "Automatica", 22000.0, 4, true);
    Coche coche2("Ford", "Explorer", 2022, "Automatica", 35000.0, 5, true);
    Coche coche3("Chevrolet", "Camaro", 2021, "Manual", 40000.0, 2, true);
    Coche coche4("Tesla", "Model 3", 2023, "Automatica", 45000.0, 4, true);
    Coche coche5("Nissan", "Versa", 2020, "Manual", 16000.0, 4, false);
    Coche coche6("RAM", "1500", 2023, "Automatica", 42000.0, 4, true);

    Moto moto1("Yamaha", "YZF-R6", 2021, "Manual", 12000.0, "Deportiva");
    Moto moto2("Harley-Davidson", "Iron 883", 2023, "Manual", 10000.0, "Cruiser");
    Moto moto3("BMW", "R 1250 GS", 2022, "Manual", 18000.0, "Aventura");
    Moto moto4("Honda", "PCX 150", 2020, "Automatica", 3500.0, "Scooter");

    Consecionaria consecionaria1("al sur de la ciudad");
    Consecionaria consecionaria2("al norte de la ciudad"); 

    consecionaria1.agregarVehiculo(coche1); 
    consecionaria1.agregarVehiculo(coche1);
    consecionaria1.agregarVehiculo(coche2);
    consecionaria1.agregarVehiculo(moto1);
    consecionaria1.agregarVehiculo(moto2);
    consecionaria2.agregarVehiculo(coche3);
    consecionaria2.agregarVehiculo(coche4);
    consecionaria2.agregarVehiculo(coche5);
    consecionaria2.agregarVehiculo(moto3);
    consecionaria2.agregarVehiculo(moto4);
    
    consecionaria1.get_ubicacion();
    consecionaria2.get_ubicacion();

    string nombre, correo;
    int numero;

    cout<< "Ingrese su nombre: ", cin>> nombre;
    cout<< "Ingrese su numero de telefono: ", cin>> numero;
    cout<< "Ingrese su correo: ", cin>> correo;

    Cliente cliente1(nombre, correo, numero);

    int opcion;

    cout<< "Que concesionaria quieres visitar?"<<endl;
    cout<< "Concesionaria 1"<<endl;
    cout<< "Concesionaria 2"<<endl;

    cin>> opcion;

    if(opcion == 1){
        cout<<consecionaria1.informacion()<<endl;
    }else if(opcion ==2){
        cout<<consecionaria2.informacion()<<endl;
    }else{
        cout<< "Opcion no valida"<<endl;
    }

    return 0;
}
