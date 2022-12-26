/*87. Realize una función que tome como parámetros un vector de números y su
  tamaño y cambie el signo de los elementos del vector
*/

#include <iostream>
using namespace std;

void pedirDatos();
void cambioSigno(int [], int);
void mostrar(int [], int);

int vec[100], tam;

int main()
{
    pedirDatos();
    cambioSigno(vec, tam);
    mostrar(vec, tam);

    cout << endl; system("pause");
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

void cambioSigno(int vec[], int tam)
{
    for (int i = 0; i < tam; i ++)
        vec[i] *= -1;
    cout << "\nSe cambio el signo de los valores" << endl;
}

void mostrar(int vec[], int tam)
{
    cout << "\nElementos del vector: " << endl;
    for (int i = 0; i < tam; i ++)
        cout << vec[i] << "\t";
    cout << endl;
}