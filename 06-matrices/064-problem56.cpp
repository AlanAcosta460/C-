/*56. Desarollar un programa que determine si una matriz es simétrica 
o no. Una mátriz es simétrica si es cuadrada y si es igual a su matriz 
transpuesta*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int filas, columnas;

    do
    {
        cout << "Ingrese la cantidad de filas: "; cin >> filas;
        cout << "Ingrese la cantidad de columnas: "; cin >> columnas;
    } while (filas <= 0 && columnas <= 0);
    cout << endl;

    int matriz[filas][columnas], senal = 0;
    
    cout << "\tIngrese los numeros en la matriz" << endl;
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz[i][j];
        }
        cout << endl;
    }

    if (filas == columnas)
    {
        for (int i = 0; i < filas; i ++)
        {   
            for (int j = 0; j < columnas; j ++)
            {
                if (matriz[i][j] == matriz[j][i])
                    senal ++;
            }
        }
    }

    if (senal == (filas * columnas))
        cout << "La matriz es simetrica" << endl;
    else    
        cout << "La matriz no es simetrica" << endl;

    cout << endl;
    system("pause");
    return 0;
}