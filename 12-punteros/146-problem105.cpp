//105. Realice un programa que calcule la suma de dos matrices dinámicas

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void sumaMatrices(int **, int **, int, int);
void mostrarMatriz(int **, int, int);

int **mat1, **mat2, fil, col;

int main()
{   
    pedirDatos();
    sumaMatrices(mat1, mat2, fil, col);
    cout << ".:Resultado:." << endl;
    mostrarMatriz(mat1, fil, col);

    for (int i = 0; i < fil; i ++)
        delete[] mat1[i];
    delete[] mat1;

    for (int i = 0; i < fil; i ++)
        delete[] mat2[i];
    delete[] mat2;

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese el numero de filas de las matrices: "; cin >> fil;
    cout << "Ingrese el numero de columnas de las matrices: "; cin >> col;
    
    mat1 = new int*[fil]; 
    for (int i = 0; i < fil; i ++)
        mat1[i] = new int[col]; 
    
    mat2 = new int*[fil];
    for (int i = 0; i < fil; i ++)
        mat2[i] = new int[col];

    cout << "\n***Matriz 1***" << endl;
    cout << ".:Ingrese datos:." << endl;
    for (int i = 0; i < fil; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(mat1 + i) + j);
        }
        cout << endl;
    }

    cout << "***Matriz 2***" << endl;
    cout << ".:Ingrese datos:." << endl;
    for (int i = 0; i < fil; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(mat2 + i) + j);
        }
        cout << endl;
    }
}

void sumaMatrices(int **matriz1, int **matriz2, int filas, int columnas)
{
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
            *(*(matriz1 + i) + j) += *(*(matriz2 + i) + j);
    }
}

void mostrarMatriz(int **matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i ++)
    {
        for (int j = 0; j < columnas; j ++)
            cout << *(*(matriz + i) + j) << "\t";
        cout << endl;
    }
}