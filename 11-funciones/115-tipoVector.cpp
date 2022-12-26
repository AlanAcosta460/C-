/*Paso de parametros de tipo vector:

Parametros de la función: 
    void nombreFuncion(tipo nombreArreglo[], int tamanoArreglo)

Llamada de la función:
    nombreFuncion(nombreArreglo, tamanoArreglo)
*/

//Cuadrados de los elementos del vector

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void cuadrado(int [], int);
void mostrar(int [], int);

int main()
{
    const int tamano = 10;
    int vector[tamano];
    srand(time(NULL));
    
    for (int i = 0; i < tamano; i ++)
        vector[i] = 1 + (rand() % 100);

    cout << "Elementos del vector:" << endl;
    mostrar(vector, tamano);
    
    cout << "\n\nElementos del vector elevados al cuadrado:" << endl;
    cuadrado(vector, tamano);
    mostrar(vector, tamano);
    
    cout << endl << endl; system("pause");
    return 0;
}

void cuadrado(int vec[], int n)
{
    for (int i = 0; i < n; i ++)
        vec[i] *= vec[i];
}

void mostrar(int vec[], int n)
{
    for (int i = 0; i < n; i ++)
        cout << vec[i] << "\t";
}