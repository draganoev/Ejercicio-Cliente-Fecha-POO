#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
private:
    int _Dia;
    int _Mes;
    int _Anio;

public:
    //CONSTRUCTOR
    Fecha(int dia=0,int mes=0,int anio=0){
    setDia(dia);
    setMes(mes);
    setAnio(anio);
    }
    void Cargar();
    void Mostrar();
    //SETTERS
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    //GETTERS
    int getDia();
    int getMes();
    int getAnio();

};

#endif // FECHA_H_INCLUDED
