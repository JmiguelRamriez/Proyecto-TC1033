#include <string>
using namespace std;

class Cliente{
    private:
        string nombre;
        string correo;
        int numero;

    public:
        Cliente();
        Cliente(string n, string c, int num ): nombre (n), correo (c), numero (num){};
        
        string get_nombre();
        string get_correo();
        int get_numero();

        void set_nombre(string);
        void set_correo(string);
        void set_numero(int);
};

Cliente::Cliente(){
    nombre = "";
    correo = "";
    numero = 0;
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

void Cliente::set_nombre(string n){
    nombre = n;
}

void Cliente::set_correo(string c){
    correo = c;
}

void Cliente::set_numero(int num){
    numero = num;
}
