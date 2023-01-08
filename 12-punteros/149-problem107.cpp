/*107. Hacer una estructura llamada Alumno, en la cual se tendrán los siguientes campos:
  nombre, edad y promedio; pedir datos al usuario para 3 alumnos, comprobar cuál de 
  los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno 
  NOTA: Usar punteros a estructuras
*/

#include <iostream>
using namespace std;

struct Alumno
{
    char nombre[30];
    int edad; 
    float promedio;
} alu[3], *punteroAlu = alu; 

void pedirDatos();
void mayorProm(Alumno *);

int main()
{
    pedirDatos();
    mayorProm(punteroAlu);

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    for (int i = 0; i < 3; i ++)
    {
        fflush(stdin);
        cout << ".:Alumno " << i + 1 << ":." << endl;
        cout << "Ingrese el nombre: "; cin.getline((punteroAlu + i)->nombre, 30, '\n');
        cout << "Ingrese la edad: "; cin >> (punteroAlu + i)->edad;
        cout << "Ingrese el promedio: "; cin >> (punteroAlu + i)->promedio;
        cout << endl;
    }
}

void mayorProm(Alumno *punteroA)
{
    float mayor = 0;
    int posicion; 

    for (int i = 0; i < 3; i ++)
    {
        if ((punteroA + i)->promedio > mayor)
        {
            mayor = (punteroA + i)->promedio;
            posicion = i;
        }
    }

    cout << ".:Datos del alumno con mejor promedio:." << endl;
    cout << "Nombre: " << (punteroA + posicion)->nombre << endl;
    cout << "Edad: " << (punteroA + posicion)->edad << endl;
    cout << "Promedio: " << (punteroA + posicion)->promedio << endl;
}