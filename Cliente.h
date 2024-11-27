/*
 * Clase Cliente
 * Contiene los métodos y atributos básicos para manejar la información de un cliente
 * que puede estar interesado en vehículos de distintas concesionarias.
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

// Clase Cliente
class Cliente {
    private:
        // Atributos privados del cliente
        string nombre;        // Nombre del cliente
        string correo;        // Correo electrónico del cliente
        string numero;           // Número telefónico del cliente
        string consecionaria; // Nombre de la concesionaria elegida

    public:
        // Métodos públicos de la clase Cliente
        Cliente();  // Constructor por defecto
        Cliente(string n, string c, string num, string con); // Constructor parametrizado

        // Métodos getter
        string get_nombre();
        string get_correo();
        string get_numero();
        string get_concesionaria();

        // Métodos setter
        void set_nombre(string);
        void set_correo(string);
        void set_numero(string);
        void set_consecionaria(string);
};

// Constructor por defecto
Cliente::Cliente() {
    nombre = "";
    correo = "";
    numero = "";
    consecionaria = "";
}

// Constructor parametrizado
Cliente::Cliente(string n, string c, string num, string con)
    : nombre(n), correo(c), numero(num), consecionaria(con) {}

// Métodos getter
string Cliente::get_nombre() { return nombre; }
string Cliente::get_correo() { return correo; }
string Cliente::get_numero() { return numero; }
string Cliente::get_concesionaria() { return consecionaria; }

// Métodos setter
void Cliente::set_nombre(string n) { nombre = n; }
void Cliente::set_correo(string c) { correo = c; }
void Cliente::set_numero(string num) { numero = num; }
void Cliente::set_consecionaria(string con) { consecionaria = con; }

#endif
