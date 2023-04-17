#include <iostream>
#include "Funciones.h"
#include "Cliente.h"

using namespace std;
void cargarCadena(char *pal, int tam)
{
    int i,x;
    fflush(stdin);
    for ( x=0; x<tam; x++)
    {
        pal[x]=cin.get();
        if(pal[x]=='\n') break;

    }
    pal[x]='\0';
    fflush(stdin);
}

void cargarVector(Cliente vecClientes[3]){
int x;

for(x=0;x<3;x++){
    vecClientes[x].Cargar();
    system("cls");
}

}

void mostrarClientes(Cliente vecClientes[3]){
int x;

for(x=0;x<3;x++){
    cout<<"Cliente "<<x+1<<endl;
    vecClientes[x].Mostrar();
    cout<<"-----"<<endl;
}

}

void clientesDniMayor(Cliente vecClientes[3]){
int x, dni;

cout<<"Ingrese el DNI maximo: ";
cin>>dni;

for(x=0;x<3;x++){
    if(vecClientes[x].getDni()>dni){
        vecClientes[x].Mostrar();
        cout<<endl;
        }else if(x==3){
        cout<<"Ningun DNI tiene numero superior al ingresado";}
    }
}

int rastearPosicionDni(Cliente vecClientes[3]){
int x,dni;
bool dniEncontrado=false;


cout<<"Ingrese el DNI buscado: ";
cin>>dni;
for(x=0;x<3;x++){
    if(vecClientes[x].getDni()==dni){
        cout<<"Este DNI se ubica en la posicion: ";
        return x+1;
    }
}

if(dniEncontrado==false){
    cout<<"No existe registro de ese DNI";
    cout<<endl;
    return -1;
    }
}

Cliente devolverObjeto(Cliente vecClientes[3]){
int x,dni;
bool dniEncontrado=false;
Cliente aux,objetoNulo;

objetoNulo.setDni(-1);

cout<<"Ingrese el DNI buscado: ";
cin>>dni;

for(x=0;x<3;x++){
    if(vecClientes[x].getDni()==dni){
        dniEncontrado=true;
        aux=vecClientes[x];
        return aux;
    }
}

if(dniEncontrado==false){
    cout<<"No existe tal registro"<<endl;
    return objetoNulo;
}

}

int devolverFecha(Cliente vecClientes[3],Fecha F){
int x,contadorFecha=0;
Cliente aux;

for(x=0;x<3;x++){
    if(vecClientes[x].getFecha().getAnio()<F.getAnio()){
        contadorFecha++;
    }else if(vecClientes[x].getFecha().getMes()<F.getMes()){
    contadorFecha++;}else if(vecClientes[x].getFecha().getDia()<F.getDia()){
    contadorFecha++;}
}

cout<<"La cantidad de clientes que fecha anterior a esta es: "<<endl;
return contadorFecha;

}

void menu(){
Cliente vectorClientes[3];
int opcion;
Cliente aux;
Fecha F;

do{
cout<<"1) CARGAR VECTOR DE CLIENTES"<<endl;
cout<<"2) LISTAR TODOS LOS CLIENTES"<<endl;
cout<<"3) LISTAR CLIENTES CON NUMERO DNI MAYOR AL INGRESO POR TECLADO"<<endl;
cout<<"4) POSICION DE DNI EN VECTOR"<<endl;
cout<<"5) DEVOLVER OBJETO CON DNI INGRESADO"<<endl;
cout<<"6) LISTAR CLIENTES CON FECHA DE NACIMIENTO ANTERIOR AL INGRESO"<<endl;
cout<<"0) SALIR"<<endl;
cout<<"OPCION: ";
cin>>opcion;

switch(opcion){
    case 1: system("cls");
            cargarVector(vectorClientes);
            system("PAUSE");
    break;
    case 2: system("cls");
            mostrarClientes(vectorClientes);
            system("PAUSE");
            system("cls");
    break;
    case 3: system("cls");
            clientesDniMayor(vectorClientes);
            system("PAUSE");
            system("cls");
    break;
    case 4: system("cls");
            cout<<rastearPosicionDni(vectorClientes);
            system("PAUSE");
            system("cls");
    break;
    case 5: system("cls");
            aux=devolverObjeto(vectorClientes);
            aux.Mostrar();
            system("PAUSE");
            system("cls");
    break;
    case 6: system("cls");
            cout<<"Fecha a buscar: ";
            F.Cargar();
            cout<<devolverFecha(vectorClientes,F);
            system("PAUSE");
            system("cls");
    break;
}

system("cls");
}while(opcion!=0);
}


