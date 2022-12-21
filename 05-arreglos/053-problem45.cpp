/*45. Escriba un programa que defina un vector de números y muestre en 
la salida estándar del vector en orden inverso - del último al primer elemento*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{   
    int tamano;

    do
    {
        cout << "Ingrese el tamano del vector: "; cin >> tamano;
    } while (tamano <= 0);
    cout << endl;

    float numeros[tamano];

    for (int i = 0; i < tamano; i ++)
    {
        cout << "Numero " << i + 1 << " : "; cin >> numeros[i];
    }

    cout << "\nOrden inverso:" << endl;
    for (int i = (tamano - 1); i >= 0; i --)
        cout << numeros[i] << " ";

    cout << endl << endl;
    system("pause");

    return 0;
}