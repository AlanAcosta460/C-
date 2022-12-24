/*73. Defina una estructura que indique el tiempo empleado por un ciclista
  en una etapa. La estructura debe tener tres campos: horas, mitutos y segundos.
  Escriba un programa que dado n etapas calcule el tiempo total empleado en correr
  todas las etapas
*/

#include <iostream>
using namespace std;

struct tiempo
{
    int horas, minutos, segundos;
} etapa[100];

int main()
{
    int nEtapas, totalDias = 0, totalHoras = 0, totalMinutos = 0, totalSegundos = 0, flag;

    cout << "Ingrese el total de etapas: "; cin >> nEtapas;
    cout << endl;
    for (int i = 0; i < nEtapas; i ++)
    {
        cout << "***Etapa " << i + 1 << "***" << endl;
        cout << "Horas: "; cin >> etapa[i].horas;
        cout << "Minutos: "; cin >> etapa[i].minutos;
        cout << "Segundos: "; cin >> etapa[i].segundos;
        cout << endl;

        totalHoras += etapa[i].horas;
        totalMinutos += etapa[i].minutos;
        totalSegundos += etapa[i].segundos;
    }

    //Algoritmo conversor de tiempo:
    do
    {
        flag = 0;

        if (totalHoras >= 24)
        {
            while (totalHoras >= 24)
            {
                totalDias ++;
                totalHoras -= 24;
            }
        }
        else
            flag ++;
    
        if (totalMinutos >= 60)
        {
            while (totalMinutos >= 60)
            {
                totalHoras ++;
                totalMinutos -= 60;
            } 
        }
        else
            flag ++;

        if (totalSegundos >= 60)
        {
            while (totalSegundos >= 60) 
            {
                totalMinutos ++;
                totalSegundos -= 60;
            }
        }
        else
            flag ++;
    } while (flag != 3);

    cout << "En " << nEtapas << " etapa(s) el ciclista tardo: " << endl;
    if (totalDias > 0)
        cout << "Dias: " << totalDias << endl;
    cout << "Horas: " << totalHoras << endl;
    cout << "Minutos: " << totalMinutos << endl;
    cout << "Segundos: " << totalSegundos << endl;
    if (totalDias > 0)
        cout << totalDias << " dia(s) " << totalHoras << ":" << totalMinutos << ":" << totalSegundos << endl;
    else
        cout << totalHoras << ":" << totalMinutos << ":" << totalSegundos << endl;

    cout << endl; system("pause");
    return 0;
}