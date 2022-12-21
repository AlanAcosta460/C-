//33. Escriba un programa que calcule el valor de: 1 * 2 * 3 ... * n (factorial de un número)

#include <iostream>
using namespace std;

int main()
{
    int numero, factorial = 1;

    do
    {
        cout << "Ingrese un numero: "; cin >> numero;
    } while (numero <= 0);

    for (int i = 1; i <= numero; i ++)
        factorial *= i;

    cout << endl << "El factorial del numero " << numero << " es: " << factorial << endl << endl;

    system("pause");

    return 0;
}