/*98. Determinar si un numero es primo o no; con punteros y además indicar
  en que posición de memoria se guardo el número
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, *puntero ,flag = 0;
    
    cout << "***Numeros primos***" << endl;
    cout << "Ingrese un numero: "; cin >> numero;

    puntero = &numero;
    for (int i = 1; i <= *puntero; i ++)
    {
        if (*puntero % i == 0)
            flag ++;
    }

    if (flag == 2)
        cout << "\nEl numero ES primo" << endl;
    else
        cout << "\nEl numero No ES primo" << endl;

    cout << "Direccion de memoria: " << puntero << endl;

    cout << endl; system("pause");
    return 0;
}