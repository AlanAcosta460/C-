//32. Escriba un programa que calcule el valor de: 1 + 2 + 3 + ... + n

#include <iostream>
using namespace std;

int main()
{
    int n, suma;

    do
    {
        cout << "Ingrese la cantidad de elementos: "; cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i ++)
        suma += i;

    cout << endl << "El resultado de la suma de " << n << " elementos es: " << suma << endl << endl;

    system("pause");

    return 0;
}