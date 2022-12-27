/*Asignación dinamica de arreglos

new : reserva el número de bytes solicitado por la declaración 
delate : libera un bloque de bytes reservado con anterioridad

Ejemplo: Pedir al usuario n calificiones y almacenarlos en un arreglo dinamico
*/

#include <iostream>
#include <stdlib.h> //new y delate estan en esta libreria
using namespace std;

void pedirDatos();
void mostrar();

int n, *notas;

int main()
{
    pedirDatos();
    mostrar();

    delete[] notas; //liberando bytes
    //los corchetes son porque el apuntador es un arreglo dinamico

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese el numero de calificaciones: "; cin >> n;

    notas = new int[n]; //creando arreglo de tamaño n

    //pidiendo datos
    cout << "\n***Ingrese los datos***" << endl;
    for (int i = 0; i < n; i ++)
    {
        cout << "Nota " << i + 1 << ": "; cin >> notas[i];
    }
}

void mostrar()
{
    cout << "\n***Mostrando notas***" << endl;
    for (int i = 0; i < n; i ++)
        cout << "Nota " << i + 1 << ": " << notas[i] << endl;
}