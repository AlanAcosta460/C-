//Paso de parametros de tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void rellenarMatriz(int [][3], int, int); //en las columas siempre se debe establecer el numero maximo de columnas
void cuadrado(int [][3], int , int);
void mostrarMatriz(int [][3], int, int);

int main()
{
    const int filas = 3, columnas = 3;
    int matriz[filas][columnas];

    rellenarMatriz(matriz, filas, columnas);
    cout << "Matriz inicial" << endl;
    mostrarMatriz(matriz, filas, columnas);
    cuadrado(matriz, filas, columnas);
    cout << "Matriz al cuadrado" << endl;
    mostrarMatriz(matriz, filas, columnas);

    cout << endl; system("pause");
    return 0;
}

void rellenarMatriz(int m[][3], int f, int c)
{
    srand(time(NULL));
    for (int i = 0; i < f; i ++)
    {
        for (int j = 0; j < c; j ++)
            m[i][j] = 1 + (rand() % 9);
    }
}

void cuadrado(int m[][3], int f, int c)
{
    for (int i = 0; i < f; i ++)
    {
        for (int j = 0; j < c; j ++)
            m[i][j] *= m[i][j];
    }
}

void mostrarMatriz(int m[][3], int f, int c)
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