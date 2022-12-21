/*43. Escriba un programa que define un vector de números 
y calcule la multiplicación acumulada de sus elementos*/

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

    int numeros[tamano], total = 1;

    for (int i = 0; i < tamano; i ++ )
    {
        cout << "Numero en espacio " << i + 1 << " : "; cin >> numeros[i];
        total *= numeros[i];
    }

    cout << "\nLa multiplicacion de los elementos del vector es: " << total << endl<< endl;

    system("pause");

    return 0;
}