/*46. Desarolle un programa que lea de la entrada estándar
un vector de enteros y determine el mayor elemento del vector*/

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

    int numeros[tamano], mayor = - 999999;

    for (int i = 0; i < tamano; i ++)
    {
        cout << "Numero " << i + 1 << " : "; cin >> numeros[i];
        if (numeros[i] > mayor)
            mayor = numeros[i];
    }

    cout << "\nEl numero mayor en el vector es: " << mayor << endl;
    
    cout << endl;
    system("pause");

    return 0; 
}