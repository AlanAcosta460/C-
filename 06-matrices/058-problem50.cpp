/*Definir un vector:        tipo nombre[filas][columas];  

Inicialización de una matriz  
int numeros[2][3] = {{1,2,3} , {4,5,6}};
    
                columna 0   columna 1   columna 2
    fila 0          1           2           3
    fila 1          4           5           6

cout << numeros[1][2]; //6
cout << numeros[0][1]; //2
*/

/*50. Hacer un programa para rellenar una matriz pidiendo al usuario el 
numero de filas y columnas. Posteriormente mostrar la matriz en pantalla*/

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
    
    int matriz[filas][columnas];

    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz[i][j];
        }
        cout << endl;
    }

    cout << "La matriz es:\n";
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
        {
            cout << matriz[i][j] << "\t"; 
        }
        cout << endl;
    }

    cout << endl;
    system("pause");

    return 0;
}