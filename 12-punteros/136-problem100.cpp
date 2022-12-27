/*100. Rellenar un arreglo con n números, posteriormente utilizando punteros
  determinar el menor elemento del arreglo. 
*/

#include <iostream>
using namespace std;

int main()
{
    int tam, flag;

    do
    {
       flag = 1;
        cout << "Ingrese el tamano del arreglo: "; cin >> tam;
        if (tam <= 0)
        {
            cout << "El numero debe ser mayor o igual a uno (1)" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);

    int arreglo[tam], *puntero, menor = 999999;

    cout << "\n***Ingrese datos al arreglo***" << endl;
    for (int i = 0; i < tam; i ++)
    {
        cout << i + 1 << ".\t"; cin >> arreglo[i];
    }

    puntero = arreglo;
    for (int i = 0; i < tam; i ++)
    {
        if (*puntero < menor)
            menor = *puntero;
        puntero ++;
    }

    cout << "\nEl elemento menor es: " << menor << endl;

    cout << endl; system("pause");
    return 0;
}