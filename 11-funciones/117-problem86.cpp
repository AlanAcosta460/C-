/*86. Realize una función que tome como parámetros un vector y su tamaño y 
  diga si el vector esta ordenado. Sugerencia: compruebe que para todas las 
  posiciones del vector, salvo la 0, el elemento del vector es mayor o igual
  que el elemento que le procede en el vector
*/

#include <iostream>
using namespace std;

void pedirDatos();
void ordenado(int [], int);

int vec[100], tam;

int main()
{
    pedirDatos();
    ordenado(vec, tam);

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese el tamano del vector: "; cin >> tam;
    cout << "\nIngrese los valores: " << endl;
    for (int i = 0; i < tam; i ++)
    {
        cout << "No. " << i + 1 << ": "; cin >> vec[i];
    }
}

void ordenado(int vec[], int tam)
{
    int flag = 1, i = 0; 

    do
    {
        if (vec[i] >= vec[i + 1])
            flag = 0;
        i ++;
    } while (flag != 0 && flag > tam - 1);

    if (flag == 0)
        cout << "\nEl vector NO esta ordenado" << endl;
    else 
        cout << "\nEl vector esta ordenado de manera ascendente" << endl;
}