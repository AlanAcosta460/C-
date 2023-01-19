//Creacion de objetos

#include <iostream>
#include "Punto.h"
using namespace std;

int main()
{
    Punto p1(2, 1); //Creacion de objeto estatico

    cout << ".:Punto 1:." << endl;
    cout << "El valor de la coordenada x es: " << p1.getX() << endl;
    cout << "El valor de la coordenada y es: " << p1.getY() << endl;

    Punto *p2 = new Punto(); //Creacion de objeto dinamico

    p2->setX(5);
    p2->setY(8);

    cout << "\n.:Punto 2:." << endl;
    cout << "El valor de la coordenada x es: " << p2->getX() << endl;
    cout << "El valor de la coordenada y es: " << p2->getY() << endl;

    cout << endl; system("pause");
    return 0;
}