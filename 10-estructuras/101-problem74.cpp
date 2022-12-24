/*74. Defina una estructura que sirva para representar a una persona. La
  estructura debe contener dos campos: el nombre de la persona y un valor
  de tipo lógico que indica si la persona tine algún tipo de discapacidad.
  Realice un programa que dado un vector de personas rellene dos nuevos 
  vectores: uno que contenga las personas que no tienen ninguna discapacidad
  y otro que contenga las personas con discapacidad*/

#include <iostream>
#include <string.h>
using namespace std;

struct persona
{
    char nombre[30];
    bool discapacidad;
} p[100], conDis[100], sinDis[100];

int main()
{
    int nPersonas, totalSin = 0, totalCon = 0;

    cout << "Ingrese la cantidad de personas: "; cin >> nPersonas;
    cout << endl;

    for (int i = 0; i < nPersonas; i ++)
    {
        fflush(stdin);
        cout << "***Persona " << i + 1 << "***" << endl;
        cout << "Nombre: "; cin.getline(p[i].nombre, 30, '\n');
        cout << "Discapacidad SI = 1 / NO = 0: "; cin >> p[i].discapacidad;
        cout << endl;

        if (p[i].discapacidad == 1)
        {
            strcpy(conDis[totalCon].nombre, p[i].nombre);
            totalCon ++;
        }
        else
        {
            strcpy(sinDis[totalSin].nombre, p[i].nombre);
            totalSin ++;
        }
    } 

    if (totalSin > 0)
    {
        cout << "Personas sin discapacidad" << endl;
        for (int i = 0; i < totalSin; i ++)
            cout << "- " << sinDis[i].nombre << endl;
    }
    
    if (totalCon > 0)
    {
        cout << "Personas con discapacidad" << endl;
        for (int i = 0; i < totalCon; i ++)
            cout << "- " << conDis[i].nombre << endl;
    }

    cout << endl; system("pause");
    return 0;
}