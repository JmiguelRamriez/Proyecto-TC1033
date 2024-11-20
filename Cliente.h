#include <string>
using namespace std;

class Cliente{
    private:
        string nombre;
        string correo;
        int numero;
        string consecionaria;

    public:
        Cliente();
        Cliente(string n, string c, int num, string con ): nombre (n), correo (c), numero (num), consecionaria(con){};
        
        string get_nombre();
        string get_correo();
        int get_numero();
        string get_concesionaria();

        void set_nombre(string);
        void set_correo(string);
        void set_numero(int);
        void set_consecionaria(string);
};

Cliente::Cliente(){
    nombre = "";
    correo = "";
    numero = 0;
    consecionaria = "";
}

string Cliente::get_nombre(){
    return nombre;
}

string Cliente::get_correo(){
    return correo;
}

int Cliente::get_numero(){
    return numero;
}

string Cliente::get_concesionaria(){
    return consecionaria;
}

void Cliente::set_nombre(string n){
    nombre = n;
}

void Cliente::set_correo(string c){
    correo = c;
}

void Cliente::set_numero(int num){
    numero = num;
}

void Cliente::set_consecionaria(string con) {
    consecionaria = con;
}
