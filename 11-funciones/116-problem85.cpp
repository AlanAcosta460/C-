/*85. Realize una función que tome como parámetros un vector de numeros enteros
  y devuelva la suma de sus elementos  
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void rellenar(int [], int);
void mostrar(int [], int);
int suma(int [], int);

int tamano, vec[999];

int main()
{    
    cout << "Ingrese el tamano del vector a rellenar: "; cin >> tamano;
    
    cout << "\nElementos del vector:" << endl;
    rellenar(vec, tamano);
    mostrar(vec, tamano);

    cout << "\n\nSuma de los elementos: " << suma(vec, tamano);

    cout << endl << endl; system("pause");
}

void rellenar(int vec[], int n)
{
    srand(time(NULL));
    
    for (int i = 0; i < n; i ++)
        vec[i] = 1 + (rand() % 100);
}

void mostrar(int vec[], int n)
{
    for (int i = 1; i <= n; i ++)
    {
        cout << vec[i - 1] << "\t";
        if ((i % 19) == 0)
            cout << endl;
    }
}

int suma(int vec[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i ++)
        total += vec[i];  
    
    return total;
}