//36. Escriba un programa que calcule el valor de 2^1 + 2^2 + 2^3 + ... 2^n

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
        suma += pow(2, i);

    cout << "\nEl resultado de la suma es: " << suma << endl << endl;

    system("pause");

    return 0;
}