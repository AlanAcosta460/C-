/*44. Escribe un programa que lea de la entrada estándar un vector 
de números y muestre en la salida estándar los números del vector 
con sus índices asociados.*/

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

    for (int i = 0; i < tamano; i ++ )
    {
        cout << "Numero " << i + 1 << " : "; cin >> numeros[i];
    }

    cout << endl;
    cout << "Indice\t\tNumero" << endl;
    for (int i = 0; i < tamano; i ++)
        cout << i << "\t\t" << numeros[i] << endl;
    
    cout << endl;
    system("pause");

    return 0;
}