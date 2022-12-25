/*78. Escriba un programa que devuelva la parte fraccionaria de cualquier 
  número introducido por el usuario. Por ejemplo, si se introduce el número 
  256.879, debería desplegarse el número 0.879 
*/

#include <iostream>
using namespace std;

void pedirDatos();
float decimal(float n);

float numero;

int main()
{
    pedirDatos();
    numero = decimal(numero);
    cout << "La parte decimal es: " << numero << endl;

    cout << endl; system("pause");
}

void pedirDatos()
{
    cout << "Ingrese un numero con decimal: "; cin >> numero;
}

float decimal(float n)
{
    int aux;

    aux = n;
    n -= aux;

    return n;
}