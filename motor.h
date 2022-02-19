#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED

#include <string>

using namespace std;

class Motor {
    protected:
        string fabricante;
        string modelo;
        string fechaFabricacion;
        string diseno; // alternativo o wankel
        string disposicionCilindros;
        string tipoCombustible;
        string arr[5000];

    public:
        Motor();

        string getFabricante();
        void setFabricante(string f);
        string getModelo();
        void setModelo(string m);
        string getFechaFabricacion();
        void setFechaFabricacion(string f);
        void funcion(int* a);



};

Motor::Motor()
{
    fabricante = "Fabricante desconocido";
    modelo = "Modelo desconocido";
    fechaFabricacion = "Fecha desconocida";
    diseno = "Disenio no definido";
    disposicionCilindros = "Disposicion no definida";
    tipoCombustible = "Tipo de Combustible no especificado";
}
string Motor::getFabricante()
    {

        return fabricante;
    }
void Motor::setFabricante(string f)
{
        fabricante = f;
}
string Motor::getModelo()
{
    return modelo;
}
void Motor::setModelo(string m)
{
    modelo = m;
}

string Motor::getFechaFabricacion()
{
    return fechaFabricacion;
}

void Motor::setFechaFabricacion(string f)
{
    fechaFabricacion = f;
}
void Motor::funcion(int* a)
{
    cout << a << endl;
    cout << *a;
}


#endif // MOTOR_H_INCLUDED
