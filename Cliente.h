// José Miguel Ramírez Gutiérrez
// A01712628
// Proyecto Concesionarias
// Clase Cliente: representa la información básica de un cliente que puede estar interesado 
// en vehículos disponibles en distintas concesionarias.

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

// Creación de la clase Cliente
// La clase Cliente gestiona datos como el nombre, correo, número telefónico y concesionaria elegida
// de un cliente interesado en adquirir un vehículo.
class Cliente {
private:

    // Declara las variables de instancia


    string nombre;      
    string correo;       
    string numero;        
    string consecionaria; 

public:

    // Constructor

    Cliente(); // Constructor por defecto
    Cliente(string n, string c, string num, string con); // Constructor parametrizado

    string get_nombre();
    string get_correo();
    string get_numero();
    string get_concesionaria();

    void set_nombre(string n);
    void set_correo(string c);
    void set_numero(string num);
    void set_consecionaria(string con);
};

// Implementación de la clase

// Constructores

// Constructor por defecto
// Inicializa los atributos del cliente con valores predeterminados (vacíos).
Cliente::Cliente() {
    nombre = "";
    correo = "";
    numero = "";
    consecionaria = "";
}

// Constructor parametrizado
// Inicializa los atributos del cliente con valores específicos.
Cliente::Cliente(string n, string c, string num, string con)
    : nombre(n), correo(c), numero(num), consecionaria(con) {}

//@return string: nombre del cliente
string Cliente::get_nombre() { 
    return nombre; 
}

//@return string: correo del cliente
string Cliente::get_correo() { 
    return correo; 
}

//@return string: número telefónico del cliente
string Cliente::get_numero() { 
    return numero; 
}

//@return string: nombre de la concesionaria elegida por el cliente
string Cliente::get_concesionaria() { 
    return consecionaria; 
}

//@param string n: establece el nombre del cliente
void Cliente::set_nombre(string n) { 
    nombre = n; 
}

//@param string c: establece el correo del cliente
void Cliente::set_correo(string c) { 
    correo = c; 
}

//@param string num: establece el número telefónico del cliente
void Cliente::set_numero(string num) { 
    numero = num; 
}

//@param string con: establece la concesionaria elegida por el cliente
void Cliente::set_consecionaria(string con) { 
    consecionaria = con; 
}

#endif
