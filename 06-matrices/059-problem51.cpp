/*51. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo
para que muestre la diagonal principal de la matriz*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int matriz[3][3];

    cout << "\tIngrese los numeros en la matriz\n";
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << "La matriz es:\n";
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl;
    }

    cout << "\nLa diagonal principal es:\n";
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            if (i == j)
                cout << matriz[i][j];
            else    
                cout << "\t";  
        }
        cout << endl;
    }
    
    cout << endl;
    system("pause");

    return 0;
}