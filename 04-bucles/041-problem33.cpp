//33. Escriba un programa que calcule el valor de: 1 + 3 + 5 + ... + 2n - 1

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
        suma += ((2 * i) - 1);

    cout << endl << "El resultado de la suma de " << n << " elementos es: " << suma << endl << endl;

    system("pause");

    return 0;
}