#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Fecha.h"

class Cliente{
private:
    int _Dni;
    char _Nombre[30];
    char _Apellido[30];
    char _Email[30];
    char _Telefono[30];
    Fecha _FechaNacimiento;

public:
    //CONSTRUCTOR POR OMISION
    Cliente(int dni=0,const char* nombre="Gonzalo",const char* apellido="Ligero",const char* email="blabla@gmail.com",const char* telefono="11224455"){
    setDni(dni);
    setNombre(nombre);
    setApellido(apellido);
    setEmail(email);
    setTelefono(telefono);
    }
    Cliente(const char* nombre){setNombre(nombre);}
    //CONSTRUCTOR PARA CARGAR NOMBRE
    void Cargar();
    void Mostrar();
    //SETTERS
    void setDni(int dni);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setEmail(const char* email);
    void setTelefono(const char* telefono);
    //GETTERS
    int getDni();
    const char* getNombre();
    const char* getApellido();
    const char* getEmail();
    const char* getTelefono();
    //SETTERS Y GETTERS DE FECHA
    void setFecha(Fecha F);
    Fecha getFecha();
};




#endif // CLIENTE_H_INCLUDED
