#include<iostream>
#include<cstdlib>
#include "Herramientas.h"


Herramienta::Herramienta(float p, float l,string n){
setPeso(p);
setLongitud(l);
_nombre=n;

}


void Herramienta::setPeso(float p){
if(p>0){
_peso=p;
}
}

void Herramienta::setLongitud(float l){
if(l>0){
_longitud=l;
}
}

float Herramienta::getPeso(){
return _peso;
}

float Herramienta::getLongitud(){
return _longitud;
}

void Herramienta::mostrarInformacion(){
cout<<"NOMBRE DE LA HERRAMIENTA:"<<endl;
cout<<"PESO:"<<getPeso()<<endl;
cout<<"LONGITUD:"<<getLongitud()<<endl;

}
