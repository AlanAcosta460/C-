//41. Realice un programa que calcule la descomposición en factores primos de un numero entero
//  Por ejemplo: 20 = 2*2*5

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numero, x = 1, y = 1, z = 1;

    cout << "Ingrese un numero a descomponer: "; cin >> numero;

    cout << "\nLa descomposicion en primos del numero es: "; 
    for (int i = 2; numero > 1; i++)
    {
        while (numero % i == 0)
        {
            cout << i << " ";
            numero /= i;
        }   
    }

    cout << endl << endl;
    system("pause");

    return 0;
}