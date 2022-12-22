/*52. Hacer una matriz de tipo entera de 2x2, llenarla de números y luego
copiar todo su contenido hacia otra matriz*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int matriz[2][2], copia[2][2];

    cout << "\tIngrese los numeros en la matriz\n";
    for (int i = 0; i < 2; i ++)
    {
        for (int j = 0; j < 2; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz[i][j];
            copia[i][j] = matriz[i][j];
        }
        cout << endl;
    }

    cout << "La copia de la matriz es:\n";
    for (int i = 0; i < 2; i ++)
    {
        for (int j = 0; j < 2; j ++)
        {
            cout << copia[i][j] << "\t"; 
        }
        cout << endl;
    }

    cout << endl;
    system("pause");

    return 0;
}