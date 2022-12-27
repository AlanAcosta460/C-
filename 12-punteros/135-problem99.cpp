/*99. Rellenar un array de 10 números, posteriormente utilizando punteros
  indicar cuales son numeros pares y su posicion en memoria
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[10], *puntero;

    cout << "***Ingrese datos al arreglo***" << endl;
    for (int i = 0; i < 10; i ++)
    {
        cout << i + 1 << ".\t"; cin >> arreglo[i];
    }

    puntero = arreglo;
    
    cout << "\n***Elementos pares del arreglo***" << endl;
    for (int i = 0; i < 10; i ++)
    {
        if (*puntero % 2 == 0)
            cout << i + 1 << ".\t" << *puntero << "\t" << puntero << endl;
        puntero ++;
    }

    cout << endl; system("pause");
    return 0;
}