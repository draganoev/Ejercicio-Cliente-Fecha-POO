#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "Funciones.h"
#include "Fecha.h"
using namespace std;

    //SETTERS
void Cliente::setDni(int dni){
    _Dni=dni;
}
void Cliente::setNombre(const char* nombre){
    strcpy(_Nombre,nombre);
}
void Cliente::setApellido(const char* apellido){
    strcpy(_Apellido,apellido);
}
void Cliente::setEmail(const char* email){
    strcpy(_Email,email);
}
void Cliente::setTelefono(const char* telefono){
    strcpy(_Telefono,telefono);
}
//GETTERS
int Cliente::getDni(){
    return _Dni;
}
const char* Cliente::getNombre(){
    return _Nombre;
}
const char* Cliente::getApellido(){
    return _Apellido;
}
const char* Cliente::getEmail(){
    return _Email;
}
const char* Cliente::getTelefono(){
    return _Telefono;
}

void Cliente::Cargar(){
int dni;
char valor[30];

cout<<"Dni: ";
cin>>dni;
setDni(dni);
cout<<"Nombre: ";
cargarCadena(valor,30);
setNombre(valor);
cout<<"Apellido: ";
cargarCadena(valor,30);
setApellido(valor);
cout<<"Email: ";
cargarCadena(valor,30);
setEmail(valor);
cout<<"Telefono: ";
cargarCadena(valor,30);
setTelefono(valor);
cout<<"Fecha de nacimiento: "<<endl;
_FechaNacimiento.Cargar();

}
void Cliente::Mostrar(){
cout<<"Dni: "<<getDni();
cout<<endl;
cout<<"Nombre: "<<getNombre();
cout<<endl;
cout<<"Apellido: "<<getApellido();
cout<<endl;
cout<<"Email: "<<getEmail();
cout<<endl;
cout<<"Telefono: "<<getTelefono();
cout<<endl;
cout<<"Fecha de nacimiento: "<<getFecha().getDia()<<"/"<<getFecha().getMes()<<"/"<<getFecha().getAnio();
}

void Cliente::setFecha(Fecha F){
    _FechaNacimiento=F;
}
Fecha Cliente::getFecha(){
    return _FechaNacimiento;
}
