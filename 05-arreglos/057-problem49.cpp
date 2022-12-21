/*49. Hacer un programa que lea 5 números en un arreglo, los copie a otro
arreglo multiplicados por 2 y muestre el segundo arreglo*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arreglo1[5], arreglo2[5];

    for (int i = 0; i < 5; i ++)
    {
        cout << "Numero " << i + 1 << " : "; cin >> arreglo1[i];
        arreglo2[i] = arreglo1[i] * 2;
    } 

    cout << "\nLos numeros multiplicados por 2 son: ";
    for (int i = 0; i < 5; i ++)
        cout << arreglo2[i] << " "; 
    
    cout << endl << endl;
    system("pause");

    return 0;
}