//35. Escriba un programa que calcule el valor de: 1! + 2! + 3! + ... + n! (suma de factoriales)

#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1, suma = 0;

    do
    {
        cout << "Ingrese la cantidad de elementos: "; cin >> n;
    } while (n <= 0);
    
    for (int i = n; i >= 1; i --)
    {
        for (int j = 1; j <= i; j ++)
            factorial *= j;
        
        suma += factorial;
        factorial = 1;  
    }

    /*
    Una fomra mas corta de hacerlo es: 

    for (int i = 1; i <= n; i ++)
    {
        factorial *= i;
        suma += factorial;
    }
    */

    cout << endl << "La suma de " << n << " factoriales es: " << suma << endl << endl;

    system("pause");

    return 0;
}