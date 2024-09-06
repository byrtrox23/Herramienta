#pragma once


using namespace std;

class Herramienta {
protected:
    string _nombre;
    float _peso;
    float _longitud;
public:
    Herramienta(float p,float l,string n="pepe");
    void setPeso(float p);
    void setLongitud(float l);
    float getPeso();
    float getLongitud();
    void mostrarInformacion();



};
