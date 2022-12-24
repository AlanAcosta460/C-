/*67. Hacer una estructura llamada corredor, en la cual se trendrán los siguientes campos: Nombre, edad,
  sexo, club, pedir datos al usuario para un corredor, y asígnarle una categoría de competición:
  - Juvenil <= 18 años
  - Senior <= 40 años
  - Veterano > 40 años
  Posteriormente imprimir todos los datos del corredor, incluoida su categoría de competición*/

#include <iostream>
#include <string.h>
using namespace std;

struct corredor
{
    char nombre[30], sexo[20], club[20], catregoria[10];
    int edad;
}corredor1; 

int main()
{
    cout << "****Datos del corredor****" << endl;
    cout << "Nombre: "; cin.getline(corredor1.nombre, 30, '\n');
    cout << "Edad: "; cin >> corredor1.edad; fflush(stdin);
    cout << "Sexo: "; cin.getline(corredor1.sexo, 20, '\n');
    cout << "Club: "; cin.getline(corredor1.club, 20, '\n');

    if (corredor1.edad <= 18)
        strcpy(corredor1.catregoria, "Juvenil");
    else
        if (corredor1.edad <= 40)
            strcpy(corredor1.catregoria, "Senior");
        else
            strcpy(corredor1.catregoria, "Veterano");

    cout << "\nNombre: " << corredor1.nombre << endl;
    cout << "Edad: " << corredor1.edad << endl;
    cout << "Sexo: " << corredor1.sexo << endl;
    cout << "Club: " << corredor1.club << endl;
    cout << "Categoria: " << corredor1.catregoria << endl;        

    cout << endl; system("pause");
    return 0;
}