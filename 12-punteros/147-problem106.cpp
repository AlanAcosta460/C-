/*106. Realice un programa que lea una matriz de NxM y cree su matriz transpuesta
  NOTA: La matriz transpuesta es aquella en la que la columna i era la fila i de la 
  matriz original
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void transpuesta(int **, int, int);
void mostrarMatriz(int **, int , int);

int **mat, **trans, fil, col;

int main()
{
    pedirDatos();
    cout << ".:Original:." << endl;
    mostrarMatriz(mat, fil, col);

    transpuesta(mat, fil, col);
    cout << "\n.:Transpuesta:." << endl;
    mostrarMatriz(trans, col, fil);

    for (int i = 0; i < fil; i ++)
        delete[] mat[i];
    delete[] mat;

    for (int i = 0; i < fil; i ++)
        delete[] trans[i];
    delete[] trans;

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese el numero de filas de las matrices: "; cin >> fil;
    cout << "Ingrese el numero de columnas de las matrices: "; cin >> col;
    
    mat = new int*[fil]; 
    for (int i = 0; i < fil; i ++)
        mat[i] = new int[col]; 

    cout << "\n.:Ingrese datos:." << endl;
    for (int i = 0; i < fil; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(mat + i) + j);
        }
        cout << endl;
    }
}

void transpuesta(int **matriz, int filas, int columnas)
{
    trans = new int*[columnas]; 
    for (int i = 0; i < columnas; i ++)
        trans[i] = new int[filas];

    for (int i = 0; i < columnas; i ++)
    {
        for (int j = 0; j < filas; j ++)
            *(*(trans + i) + j) = *(*(matriz + j) + i);
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