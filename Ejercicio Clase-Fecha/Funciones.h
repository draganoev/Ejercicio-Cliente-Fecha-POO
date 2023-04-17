#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Cliente.h"
void cargarCadena(char *pal, int tam);
void menu();
void cargarVector(Cliente vecClientes[3]);
void mostrarClientes(Cliente vecClientes[3]);
void clientesDniMayor(Cliente vecClientes[3]);
int rastearPosicionDni(Cliente vecClientes[3]);
Cliente devolverObjeto(Cliente vecClientes[3]);
int devolverFecha(Cliente vecClientes[3],Fecha F);
#endif // FUNCIONES_H_INCLUDED
