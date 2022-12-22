/*54. Realice un programa que lea una matriz de 3x3 y cree su matriz
transpuesta. La matriz transpuesta es aquella en la que la columna i
era la fila i de la matriz original*/

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

    cout << "Matriz original" << endl;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
            cout << matriz[i][j] << "\t";
        cout << endl;
    } 

    cout << "\nMatriz transpuesta" << endl;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
            cout << matriz[j][i] << "\t";
        cout << endl;
    }    

    cout << endl;
    system("pause");
    return 0;
}