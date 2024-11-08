#include<iostream>
#include "Autos.h"
#include "Consecionaria.h"
#include "Cliente.h"
using namespace std;


int main(){
    Autos auto1("Toyota", "Corolla", 2020, "Automatica", 20000);
    Autos auto2("Honda", "Civic", 2019, "Manual", 18000);
    Autos auto3("Ford", "Fiesta", 2021, "Automatica", 17000);
    Autos auto4("Chevrolet", "Spark", 2022, "Manual", 16000);
    Autos auto5("Nissan", "Sentra", 2020, "Automatica", 21000);
    Autos auto6("Mazda", "CX-5", 2021, "Automatica", 25000);

    Consecionaria consecionaria1("al sur de la ciudad");
    Consecionaria consecionaria2("al norte de la ciudad"); 

    consecionaria1.agregarAutos(auto1);
    consecionaria1.agregarAutos(auto2);
    consecionaria1.agregarAutos(auto3);
    consecionaria2.agregarAutos(auto4);
    consecionaria2.agregarAutos(auto5);
    consecionaria2.agregarAutos(auto6);
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