/*Punteros - Declaración

&n = direccion de n
*n = variable cuya direccion esta almacenada en n
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, *puntero;

    numero = 20;
    puntero = &numero;

    cout << "Numero: " << numero << endl;
    cout << "Direccion de memoria: " << puntero << endl;

    cout << endl; system("pause");
    return 0;
}
