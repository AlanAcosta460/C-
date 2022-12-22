/*57. Realice un programa que calcule el producto de dos matrices
cuadradas de 3x3*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int matriz1[3][3], matriz2[3][3], resultado[3][3], suma = 0;

    cout << "\tIngrese los numeros en la matriz 1" << endl;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz1[i][j];
        }
        cout << endl;
    }

    cout << "\tIngrese los numeros en la matriz 2" << endl;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz2[i][j];
        }
        cout << endl;
    }

    //multiplicar matrices
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < 3; k ++)
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
        }
    }

    cout << "La multiplicacion de ambas matrices es:" << endl;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
            cout << resultado[i][j] << "\t";
        cout << endl;
    } 

    cout << endl;
    system("pause");
    return 0;
}