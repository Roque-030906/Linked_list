#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;
class Persona{
    private: 
        string nombre;
        int edad;
    public:
        Persona(string nombre, int edad);
        Persona();
        string getNombre();
        int getEdad();
        void setNombre(string nombre);
        void setEdad(int edad);
        friend ostream& operator<<(ostream& os, const Persona& p){
            os<<"{Nombre: "<<p.nombre<<", Edad: "<<p.edad<<"}";
            return os;
        }
    int operator >(Persona p){
        if (this->nombre > p.nombre){
            return 1;
        } else if (this->nombre == p.nombre){
            return this->edad > p.edad;
        } else {
            return 0;
        }
    }

    int operator <(Persona p){
        if (this->nombre < p.nombre){
            return 1;
        } else if (this->nombre == p.nombre){
            return this->edad < p.edad;
        } else {
            return 0;
        }
    }
        bool operator ==(Persona p){
            return this->nombre==p.nombre;
        }



};



#endif