#ifndef MOTORAUTO_H_INCLUDED
#define MOTORAUTO_H_INCLUDED

#include <string>
#include "motor.h"


using namespace std;

class MotorAuto: public Motor {

    public:
        int tiempos;
        string metodoEncendido; // compresion o chispa
        int numeroDeCilindros;

    public:
        MotorAuto();

        int getTiempos();
        string getMetodoEncendido();
        int getNumeroDeCilindros();

        void setTiempos(int);
        void setMetodoEncendido(string);
        void setNumeroDeCilindros(int);





};

MotorAuto::MotorAuto()
{

}

int MotorAuto::getTiempos()
{
    return tiempos;
}

string MotorAuto::getMetodoEncendido()
{
    return metodoEncendido;
}

int MotorAuto::getNumeroDeCilindros()
{
    return numeroDeCilindros;
}

void MotorAuto::setTiempos(int t)
{
    tiempos = t;
}

void MotorAuto::setMetodoEncendido(string m)
{
    metodoEncendido = m;
}

void MotorAuto::setNumeroDeCilindros(int c)
{
    numeroDeCilindros = c;
}


#endif // MOTORAUTO_H_INCLUDED
