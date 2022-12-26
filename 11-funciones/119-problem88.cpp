/*88. Realize una función que tome como parámetros un vector de enteros y 
  su tamaño e imprima un vector con los elementos impares del vector recibido
*/

#include <iostream>
using namespace std;

void pedirDatos();
void impares(int [], int);
void mostrar(int [], int);

int vec[100], tam, imp[100];

int main()
{
    pedirDatos();
    impares(vec, tam);
    mostrar(imp, tam);

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    do
    {
        cout << "Ingrese el tamano del vector: "; cin >> tam;
    } while (tam <= 0);
    
    cout << "\nIngrese los valores: " << endl;
    for (int i = 0; i < tam; i ++)
    {
        cout << "No. " << i + 1 << ": "; cin >> vec[i];
    }
}

void impares(int vec[], int n)
{
    int j = 0;
    
    for (int i = 0; i < n; i ++)
    {
        if (vec[i] % 2 != 0)
        {
            imp[j] = vec[i];
            j ++;
        } 
    }
    tam = j;
}

void mostrar(int vec[], int n)
{
    cout << "\nElementos impares del vector: " << endl;
    for (int i = 0; i < n; i ++)
        cout << vec[i] << "\t";
    cout << endl;
}