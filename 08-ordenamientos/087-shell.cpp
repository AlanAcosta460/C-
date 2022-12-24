/*Algortimo de Ordenación Shell:
Pasos:
1. Se divide la lista original en n/2 grupos de dos, considerando un incremento
   o salto entre los elementos de n/2
2. Se clasifica cada grupo por separado, comparando las parejas de elementos
   y si no están ordenados se intercambian.
3. Se divide ahora la lista en la midad de grupos (n/4), con un salto entre
   los elementos tambien mitad (n/4), y nuevamente se clasifica cada grupo
   por separado.
4. Así sucesivamentem, se sigue dividiendo la lista en la mitad de grupos
   que en el recorrido anterior con un salto decreciente en la mitad que
   el salto anterior, y luego clasificando cada grupo por separado. 
5. El algoritmo termina cuando el tamaño del salto es 1.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//función para intercambiar elementos de posicion
void intercambio(float &x, float &y)
{
    int aux;
    aux = x;
    x = y;
    y = aux;
}

//El algoritmo es una función:
void ordenacionShell (float a[], int n)
{
    int salto = n / 2, i, j, k;

    while (salto > 0)
    {
        for (i = salto; i < n; i ++)
        {
            j = i - salto;
            //ciclo para avanzar posiciones en el arreglo
            while (j >= 0)
            {
                k = j + salto;
                //condicional de cambio
                if (a[j] <= a[k]) //elementos ordenados
                    j = -1;
                else //elementos desordenados
                {
                    intercambio(a[j], a[k]); //se llama a una función para intercambiar elementos
                    j -= salto;
                }   
                    
            }
        }
        salto /= 2;
    }
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

    ordenacionShell(arreglo, numeroElementos);

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
    int aux;
    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell (float a[], int n)
{
    int salto = n / 2, i, j, k;

    while (salto > 0)
    {
        for (i = salto; i < n; i ++)
        {
            j = i - salto;
            while (j >= 0)
            {
                k = j + salto;
                if (a[j] <= a[k]) 
                    j = -1;
                else
                {
                    intercambio(a[j], a[k]);
                    j -= salto;
                }   
                    
            }
        }
        salto /= 2;
    }
}
*/