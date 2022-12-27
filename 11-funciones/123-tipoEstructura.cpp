//Paso de parámetros de tipo estructura

#include <iostream>
using namespace std;

struct persona
{
    char nombre[30];
    int edad;
} p1;

void pedirDatosE();
void mostrarE(persona);

int main()
{
    pedirDatosE();
    mostrarE(p1); //se le envia una variable de tipo estructura

    cout << endl; system("pause");
    return 0;
}

void pedirDatosE()
{
    cout << "Ingrese su nombre: "; cin.getline(p1.nombre, 30, '\n');
    cout << "Ingrese su edad: "; cin >> p1.edad;
}

void mostrarE(persona p)
{
    cout << "\n***Datos***" << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
}