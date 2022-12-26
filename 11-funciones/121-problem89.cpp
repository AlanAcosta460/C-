//89. Desarollar una función que determine si una matriz es simétrica no

#include <iostream>
using namespace std;

void pedirDatosM();
void mostrarM(int [][10], int, int);
void comprobarSimetria(int [][10], int, int);

int matriz[10][10], filas, columnas;

int main()
{
    pedirDatosM();
    cout << "Matriz introducida" << endl;
    mostrarM(matriz, filas, columnas);
    comprobarSimetria(matriz, filas, columnas);

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
            cout << "Fila " << i + 1 << " Columna " << j + 1 << " : "; cin >> matriz[i][j];
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

void comprobarSimetria(int m[][10], int f, int c)
{
    int flag = 0;
   
    if (filas == columnas)
    {
        for (int i = 0; i < filas; i ++)
        {   
            for (int j = 0; j < columnas; j ++)
            {
                if (matriz[i][j] == matriz[j][i])
                    flag ++;
            }
        }
    }

    if (flag == (filas * columnas))
        cout << "La matriz es simetrica" << endl;
    else    
        cout << "La matriz NO es simetrica" << endl;
}