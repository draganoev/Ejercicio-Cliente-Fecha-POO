#include <iostream>
#include "Fecha.h"
using namespace std;

void Fecha::Cargar(){
int dia,mes,anio;
cout<<"Dia: ";
cin>>dia;
setDia(dia);
cout<<"Mes: ";
cin>>mes;
setMes(mes);
cout<<"Anio: ";
cin>>anio;
setAnio(anio);
cout<<endl;
}

void Fecha::Mostrar(){
    cout<<"Dia: ";
    getDia();
    cout<<endl;
    cout<<"Mes: ";
    getMes();
    cout<<endl;
    cout<<"Anio: ";
    getAnio();
}
//SETTERS
    void Fecha::setDia(int dia){
        _Dia=dia;
    }
    void Fecha::setMes(int mes){
        _Mes=mes;
    }
    void Fecha::setAnio(int anio){
        _Anio=anio;
    }

    //GETTERS
    int Fecha::getDia(){
        return _Dia;
    }
    int Fecha::getMes(){
        return _Mes;
    }
    int Fecha::getAnio(){
        return _Anio;
    }
