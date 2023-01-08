//Punteros a Estruturas

#include <iostream>
using namespace std;

struct Persona
{
    char nombre[30];
    int edad;  
} per, *punteroPer = &per;

void pedirDatos();
void mostrarDatos(Persona *);

int main()
{
    pedirDatos();
    mostrarDatos(punteroPer);

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese su nombre: "; cin.getline(punteroPer->nombre, 30, '\n');
    cout << "Ingrese su nombre: "; cin >> punteroPer->edad; 
}

void mostrarDatos(Persona *punteroP)
{
    cout << "\n.:Nombre:." << endl; 
    cout << punteroP->nombre << endl; 
    cout << ".:Edad:." << endl;
    cout << punteroP->edad << endl;
}