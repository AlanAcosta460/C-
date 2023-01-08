/*108. Defina una estructura que indique el tiempo empleado por un ciclista en 
  recorrer una etapa. La estructura debe tener tres campos: hora, minutos y segundos. 
  Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr 
  todas las etapas
*/

#include <iostream>
using namespace std;

struct Tiempo
{
    int horas, minutos, segundos;
}etapas[3], *punteroEtapas = etapas;

void pedirDatos();
void totalTiempo(Tiempo *);

int main()
{
    pedirDatos();
    totalTiempo(punteroEtapas);

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    for (int i = 0; i < 3; i ++)
    {
        cout << ".:Etapa " << i + 1 << ":." << endl;
        cout << "Horas: "; cin >> (punteroEtapas + i)->horas;
        cout << "Minutos: "; cin >> (punteroEtapas + i)->minutos;
        cout << "Segundos: "; cin >> (punteroEtapas + i)->segundos;
        cout << endl;
    }
}

void totalTiempo(Tiempo *etapa)
{
    int totalD = 0, totalH = 0, totalM = 0, totalS = 0;

    for (int i = 0; i < 3; i ++)
    {
        totalH += (etapa + i)->horas;
        totalM += (etapa + i)->minutos;
        totalS += (etapa + i)->segundos;
    }

    do
    {
        while (totalH >= 24)
        {
            totalD ++;
            totalH -= 24;
        }

        while (totalM >= 60)
        {
            totalH ++;
            totalM -= 60;
        }

        while (totalS >= 60)
        {
            totalM ++;
            totalS -= 60;
        }
    } while (totalH >= 24 || totalM >= 60 || totalS >= 60);

    cout << ".:En 3 etapas el ciclista tardo::" << endl;
    if (totalD > 0)
        cout << "Dias: " << totalD << endl;
    cout << "Horas: " << totalH << endl;
    cout << "Minutos: " << totalM << endl;
    cout << "Segundos: " << totalS << endl;
}