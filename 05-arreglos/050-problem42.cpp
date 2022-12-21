/*Definir un vector:                tipo nombre[tamaño];  

Inicialización de un vector  
int numero[] = {1, 4, 6, 7, 3};
numero[0] = 1;
numero[1] = 4; 
numero[2] = 6;
numero[3] = 7;
numero[4] = 3;

char letra[] = {'a', 'e', 'i', 'o', 'u'}; comillas simples*/

/*42. Escribe un programa que defina un vector de números y calcule la suma de sus elementos.*/

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

    int numeros[tamano], suma;

    for (int i = 0; i < tamano; i ++ )
    {
        cout << "Numero en espacio " << i + 1 << " : "; cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "\nLa suma de los elementos del vector es: " << suma << endl<< endl;

    system("pause");

    return 0;
}