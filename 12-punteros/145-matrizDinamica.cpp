/*Matrices dinamicas
Ejemplo: Rellenar una matriz de NxN y mostrar su contenido

**punteroMatriz ->  *punteroFila -> [int] [int] 
                    *punteroFila -> [int] [int] 
                    *punteroFila -> [int] [int] 
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **punteroMatriz, fil, col; //los dos asteriscos indican que es un matriz 

int main()
{
    pedirDatos();
    mostrarMatriz(punteroMatriz, fil, col);

    for (int i = 0; i < fil; i ++)
    {
        delete[] punteroMatriz[i];
    }

    delete[] punteroMatriz;

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese el numero de filas: "; cin >> fil;
    cout << "Ingrese el numero de columnas: "; cin >> col;

    punteroMatriz = new int*[fil]; //resarvando memoria para las filas
    for (int i = 0; i < fil; i ++)
        punteroMatriz[i] = new int[col]; //reservando memoria para las columnas

    cout << "\n.:Ingrese datos:." << endl;
    for (int i = 0; i < fil; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(punteroMatriz + i) + j); //punteroMatriz[i][j];
        }
        cout << endl;
    }
}

void mostrarMatriz(int **punteroMatriz, int filas, int columnas)
{
    cout << "\n.:Matriz:." << endl;
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
            cout << *(*(punteroMatriz + i) + j) << "\t";
        cout << endl;
    }
}