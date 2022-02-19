#include <iostream>
#include <string>
#include <time.h>
#include "motor.h"
#include "motorauto.h"
#include "motoravion.h"

using namespace std;

int main()
{
    cout << "Pruebas con Templates" << endl;

    MotorAuto motorAuto1;
    MotorAvion motorAvion1;

    //motorAuto1.fabricante = "Toyota";
    //cout << motorAuto1.fabricante;
    motorAuto1.setFabricante("Toyota");
    cout << motorAuto1.getFabricante();
    cout << motorAuto1.getModelo();
    cout << endl;

    int x;
    float y;
    float z;

    cin >> x;
    y = 25;
    z = 45.4;
    cout << endl;
    cout << x;
    cout << endl;
    cout << &x << endl;
    cout << "valor de y: " << y << endl;
    cout << &y << endl;
    cout << &motorAuto1 << endl;
    cout << sizeof(motorAuto1) << endl;

    int* direccionX;
    float*  direccionY;
    MotorAuto*  direccionMotorAuto1;

    direccionX = &x;
    cout << direccionX << endl;
    cout << "Creando apuntador" << endl;
    int* pointerf;
    cout << pointerf << endl;





    if(x < 60)
    {
        pointerf = new int;
        *pointerf = 45;

    }
    cout << pointerf << endl;
    cout << *pointerf << endl;
    delete pointerf;

    cout << *pointerf << endl;
    cout << "-------------------------------------" << endl;
    direccionMotorAuto1 = new MotorAuto;
    cout << direccionMotorAuto1 << endl;
    cout << direccionMotorAuto1->getFabricante() << endl;

    int resp;
    cin >> resp;
    cout << "Liberando memoria" << endl;
    delete direccionMotorAuto1;

    cin >> resp;
    int* p = new int;
    motorAvion1.funcion(p);

    float* pf = &y;
    cout << pf;
    cout << *pf;
    cin >> *pf;
    cout << *pf << endl;
    cout << y;




    return 0;
}
