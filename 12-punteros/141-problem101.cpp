/*101. Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente 
  ordenar los números en orden ascendente y mostrarlos en pantalla. NOTA: Utilizar 
  cualquier método de ordenamiento 
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void ordenar(int *, int);
void mostrar(int *, int);

int nElementos, *arreglo;

int main()
{
    pedirDatos();
    cout << "**Elementos del arreglo***" << endl;
    mostrar(arreglo, nElementos);
    ordenar(arreglo, nElementos);
    cout << "\n***Elementos en orden ascendente***" << endl;
    mostrar(arreglo, nElementos);

    delete[] arreglo;

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    int flag;

    do
    {
        flag = 1;
        cout << "Ingrese el tamano del arreglo: "; cin >> nElementos;
        if (nElementos <= 0)
        {
            cout << "El numero debe ser mayor o igual a uno (1)" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);

    arreglo = new int[nElementos];

    cout << "\n***Ingrese los valores***" << endl;
    for (int i = 0; i < nElementos; i ++)
    {
        cout << "Numero " << i + 1 << ": "; cin >> *(arreglo + i); //esto ultimo equivale a arreglo[i]
    }
    
    cout << endl;
}

void ordenar(int *pArreglo, int n)
{
    int aux;

    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n - 1; j ++)
        {
            if (*(pArreglo + j) > *(pArreglo + j + 1)) //pArreglo[j] > pArreglo[j + 1]
            {
                aux = *(pArreglo + j);
                *(pArreglo + j) = *(pArreglo + j + 1);
                *(pArreglo + j + 1) = aux; 
            }
        }  
    }   
}

void mostrar(int *pArreglo, int n)
{
    for (int i = 0; i < n; i ++)
        cout << *(pArreglo + i) << " ";
    
    cout << endl;
}