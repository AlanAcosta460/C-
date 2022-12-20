/*26. Realice un programa que solicite de la entrada estándar un entero 
del 1 al 10 y que muestre en la salida estandar su tabla de multiplicar*/

#include <iostream>
using namespace std;

int main()
{
    int numero;

    do
    {    
        cout << "Ingrese un numero: "; cin >> numero;
    } while (numero < 1 || numero > 10);

    cout <<"\nLa tabla del " << numero << " es:" << endl;
    for (int i = 1; i <= 10; i++)
        cout << numero << "\tx\t" << i << "\t=\t" << numero * i << endl;

    cout << endl;
    system("pause");
    return 0;
}