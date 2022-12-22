//55. Realizar un programa que calcule la suma de dos matrices cuadradas de 3x3

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int matriz1[3][3], matriz2[3][3];

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

    cout << "La suma de ambas matrices es:" << endl;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
            cout << matriz1[i][j] + matriz2[i][j] << "\t";
        cout << endl;
    } 

    cout << endl;
    system("pause");
    return 0;
}