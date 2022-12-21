/*47. Escribe un programa que defina un vector de números
y calcule si existe algún número en el vector cuyo valor
equivale a la suma del resto de numeros del vector*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int tamano;

    do
    {
        cout << "Ingrese el tamano del vector: "; cin >> tamano;
    } while (tamano <= 0);
    cout << endl;

    int numeros[tamano], igualSuma[tamano], suma = 0, mayor = - 999999;

    for (int i = 0; i < tamano; i ++)
    {
        cout << "Numero " << i + 1 << " : "; cin >> numeros[i];
        suma += numeros[i];
        if (numeros[i] > mayor)
            mayor = numeros[i];
    }
 
    if (mayor == (suma - mayor))
       cout << "\nEl numero " << mayor << " es igual a la suma de los otros numeros" << endl; 
    else
        cout << "\nNo hay ningun numero que sea igual a la suma de los otros numeros" << endl;
    
    cout << endl;
    system("pause");

    return 0;
}