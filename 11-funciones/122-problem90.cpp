/*90. Realize una función que dada una matriz y un número de fila de la matriz
  devuelva el menor de los elementos almacenados en dicha fila
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void pedirDatosM();
void mostrarM(int [][10], int, int);
int menorM(int [][10], int, int);

int matriz[10][10], filas, columnas;

int main()
{
    int fila;

    pedirDatosM();
    cout << "Matriz introducida" << endl;
    mostrarM(matriz, filas, columnas);
    do
    {
        cout << "De cual fila desea ver el numero menor?: "; cin >> fila;
    } while (fila <= 0 && fila > filas);
    cout << "\nEl elemento menor en la fila " << fila <<  " es: " << menorM(matriz, fila, columnas) << endl;

    cout << endl; system("pause");
    return 0;
}

void pedirDatosM()
{
    do
    {
        cout << "Ingrese la cantidad de filas: "; cin >> filas;
        cout << "Ingrese la cantidad de columnas: "; cin >> columnas;
    } while (filas <= 0 && columnas <= 0);

    cout << "\nIngrese los valores" << endl;
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
        {
            cout << "Fila " << i + 1 << " Columna " << j + 1 << ": "; cin >> matriz[i][j];
        }
        cout << endl;
    }
}   

void mostrarM(int m[][10], int f, int c)
{
    
    for (int i = 0; i < f; i ++)
    {
        for (int j = 0; j < c; j ++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int menorM(int m[][10], int f, int c)
{
    int menor = 999999;

    for (int i = 0; i < c; i++)
    {
        if (m[f - 1][i] < menor)
            menor = m[f - 1][i];
    }

    return menor;
}