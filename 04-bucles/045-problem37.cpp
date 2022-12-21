//37. Escriba un programa que calcule el valor de: 1 - 2 + 3 - 4 + 5 - 6 ... n

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, suma;

    do
    {
        cout << "Ingrese la cantidad de elementos a sumar: "; cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i ++)
    {
        if (i % 2 == 1)
            suma += i;
        else
            suma -= i;
    }
    
    cout << "\nEl resultado de la suma es: " << suma << endl << endl;

    system("pause");

    return 0;
}