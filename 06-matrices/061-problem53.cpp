/*53. Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por 
último mostrarla en pantalla*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int filas, columnas;

    do
    {
        cout << "Ingrese la cantidad de filas: "; cin >> filas;
        cout << "Ingrese la cantidad de columnas: "; cin >> columnas;
    } while (filas <= 0 && columnas <= 0);

    int matriz[filas][columnas], copia[filas][columnas];
    srand(time(NULL));

    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
            matriz[i][j] = 1 + (rand() % 100);
    }

    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
            copia[i][j] = matriz[i][j];
    }

    cout << "\nCopia de la matriz con numeros aleatorios:" << endl;
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
            cout << copia[i][j] << "\t";
        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}