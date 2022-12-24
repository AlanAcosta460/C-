/*Ordenación Rápida (QuickSort)
El algoritmo divide los n elementos de la lista a ordenar en dos partes
o particiones separadas por un elemento: una partición izquerda, un elemento
central denominado pivote, y una partición derecha.

La partición se hace de tal forma que todos los elementos de la pimera
sublista (partición izquierda) son menores que todos los elementos de la segunda
sublista (parición derecha). Las dos sublistas se ordenan independientemente

Pasos:
1. Seleccionar el elemento central de a[] como pivote.
2. Dividir los elementos restantes en particiones izquierda y derecha, de 
   modo que ningún elemento de la izquierda tenga una clave mayor que el pivote 
   y que ningún elemento a la derecha tenga una clave mas pequeña que la 
   del pivote
3. Ordenar la partición izquierda utilizando quickSort recursivamente.
4. Ordenar la partición derecha utilizando quickSort recursivamente.
5. La solución es partición izquierda seguida por el pivote y la partición derecha

central = (primero + ultimo) / 2
pivote = a[central]*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//función para intercambiar elementos de posicion:
void intercambio(float &x, float &y)
{
    float aux;
    aux = x;
    x = y;
    y = aux;
}

//funcion de ordenamiento:
void quickSort (float a[], int primero, int ultimo)
{
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do
    {
        while (a[i] < pivote)
            i ++;
        while (a[j] > pivote)
            j --;
        if (i <= j)
        {
            intercambio (a[i], a[j]);
            i ++; 
            j --;
        }
    } while (i <= j);

    if (primero < j)
        quickSort (a, primero, j); //ordenamiento de la sublista izquierda
    if (i < ultimo)
        quickSort (a, i, ultimo); //ordenamiento de la sublista derecha
}

int main()
{
    int i, j, numeroElementos = 100;
    float arreglo[numeroElementos];
    srand(time(NULL));

    cout << "Arreglo aleatorio desordenado" << endl;
    for (i = 0; i < numeroElementos; i ++)
    {
        arreglo[i] = 1 + (rand() % 100);
        cout << arreglo[i] << "\t";
        j ++;
        if (j == 19)
        {
            cout << endl;
            j = 0;
        }
    }
    j = 0;

    quickSort (arreglo, 0, numeroElementos - 1);

    cout << "\n\nArreglo ordenado - Forma Acendente" << endl;
    for (i = 0; i < numeroElementos; i ++)
    {
        cout << arreglo[i] << "\t";
        j ++;
        if (j == 19)
        {
            cout << endl;
            j = 0;
        }
    }
    j = 0;

    cout << "\n\nArreglo ordenado - Forma Descendente" << endl;
    for (i = numeroElementos - 1; i >= 0; i --)
    {
        cout << arreglo[i] << "\t";
        j ++;
        if (j == 19)
        {
            cout << endl;
            j = 0;
        }
    }

    cout << endl << endl; system("pause");
    return 0;
}

/*Algoritmo sin comentarios:
void intercambio(float &x, float &y)
{
    float aux;
    aux = x;
    x = y;
    y = aux;
}

void quickSort (float a[], int primero, int ultimo)
{
    int i, j, central;
    float pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do
    {
        while (a[i] < pivote)
            i ++;
        while (a[j] > pivote)
            j --;
        if (i <= j)
        {
            intercambio (a[i], a[j]);
            i ++; 
            j --;
        }
    } while (i <= j);

    if (primero < j)
        quickSort (a, primero, j);
    if (i < ultimo)
        quickSort (a, i, ultimo);
}
*/