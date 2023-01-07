/*102. Hacer una función para almacenar N números en un arreglo dinámico, posteriormente
  en otra función buscar un número en particular
  NOTA: Puedes utilizar cualquier método de búsqueda (Secuencial o Binaria)
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrar(int *, int);
void buscar(int *, int);

int nElementos, *vector;

int main()
{
    pedirDatos();
    cout << "**Elementos del arreglo***" << endl;
    mostrar(vector, nElementos);
    buscar(vector, nElementos);

    delete[] vector;

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    do
    {
        cout << "Ingrese el tamano del arreglo: "; cin >> nElementos;
        if (nElementos <= 0)
            cout << "El numero debe ser mayor o igual a uno (1)" << endl << endl;
    } while (nElementos <= 0);

    vector = new int[nElementos];

    cout << "\n***Ingrese los valores***" << endl;
    for (int i = 0; i < nElementos; i ++)
    {
        cout << "Numero " << i + 1 << ": "; cin >> *(vector + i);
    }
    cout << endl;
}

void mostrar(int *pArreglo, int n)
{
    for (int i = 0; i < n; i ++)
        cout << *(pArreglo + i) << " ";
    
    cout << endl;
}

void buscar(int *pArreglo, int n)
{
    int elemento, flag = 0, i = 0;

    cout << "\nIngrese un numero para buscar en el arreglo: "; cin >> elemento;

    while ((flag == 0) && (i < n))
    {
        if (*(pArreglo + i) == elemento)
            flag = 1;   
        i ++;
    }

    if (flag == 1)
        cout << "El numero se encontro en la posicion " << i - 1 << endl;
    else
        cout << "El numero NO se encontro en el arreglo numerico" << endl;
}