/*Transmisión de Direcciones

Ejemplo: Intercambiar el valor de dos variables
*/

#include <iostream>
using namespace std;

void intercambio(float *, float *); //variables de tipo puntero *

int main()
{
    float numero1 = 32.83, numero2 = 10.72;

    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    intercambio(&numero1, &numero2);
    
    cout << "\n***Despuedes del intercambio***" << endl;
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    cout << endl; system("pause");
    return 0;
}

void intercambio(float *puntero1, float *puntero2)
{
    float aux; 

    aux = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = aux;
}