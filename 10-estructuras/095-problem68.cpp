/*68. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
  campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, 
  comprobar cuál de los 3 tiene mejor promedio y posteriormente imprimir los
  datos del alumnos.
*/

#include <iostream>
#include <string.h>
using namespace std;

struct alumno
{
    char nombre[30];
    int edad;
    float promedio;
}alumnos[3];

int main()
{
    int posicion;
    float mayor = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "***Alumno " << i + 1 << "***" << endl;
        cout << "Nombre: "; cin.getline(alumnos[i].nombre, 30, '\n');
        cout << "Edad: "; cin >> alumnos[i].edad;
        cout << "Promedio: "; cin >> alumnos[i].promedio; fflush(stdin);
        cout << endl;

        if (alumnos[i].promedio > mayor)
        {
            mayor = alumnos[i].promedio;
            posicion = i;
        }
    }

    cout << "Alumno con mejor promedio:" << endl;
    cout << "Nombre: " << alumnos[posicion].nombre << endl;
    cout << "Edad: " << alumnos[posicion].edad << endl;
    cout << "Promedio: " << alumnos[posicion].promedio << endl;

    cout << endl; system("pause");
    return 0;
}
