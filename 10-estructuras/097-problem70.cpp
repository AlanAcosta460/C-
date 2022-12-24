/*70. Hacer un arreglo de estrucutura llamada atleta para n atletas que contenga
  los siguientes campos: nombre, país, numeroMedallas, y devuelva los datos
  (nombre, país) del atleta que ha ganado el mayor número de medallas
*/

#include <iostream>
using namespace std;

struct atleta
{
    char nombre[30], pais[20];
    int numeroMedallas;
} atletas[100];

int main()
{
    int n, mayor = 0, posicion;

    cout << "Cuantos atletas desea ingresar al sistema?: "; cin >> n;
    cout << endl; 

    for (int i = 0; i < n; i ++)
    {
        fflush(stdin);
        cout << "***Atleta " << i + 1 << "***" << endl;
        cout << "Nombre: "; cin.getline(atletas[i].nombre, 30, '\n');
        cout << "Pais: "; cin.getline(atletas[i].pais, 20, '\n');
        cout << "Numero de medallas: "; cin >> atletas[i].numeroMedallas;
        cout << endl;

        if (atletas[i].numeroMedallas > mayor)
        {
            mayor = atletas[i].numeroMedallas;
            posicion = i;
        }
    }

    cout << "\nAtleta con mas medallas:" << endl;
    cout << "Nombre: " << atletas[posicion].nombre << endl;
    cout << "Pais: " << atletas[posicion].pais << endl;

    cout << endl; system("pause");
    return 0;
}