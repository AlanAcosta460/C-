/*Transmisión de Arreglos

Ejemplo: Hallar el maximo elemento de un arreglo
*/

#include <iostream>
using namespace std;

int maximo(int *, int);

int main()
{
    const int nElementos = 5;
    int arreglo[5] = {7,1,4,10,6};
    
    cout << "El mayor elemento del arreglo es: " << maximo(arreglo, nElementos) << endl;

    cout << endl; system("pause");
    return 0;
}

int maximo(int *pArreglo, int nElementos)
{
    int max = -999999;

    for (int i = 0; i < nElementos; i ++)
    {
        if (*(pArreglo + i) > max)
            max = *(pArreglo + i);
    }

    return max;
}