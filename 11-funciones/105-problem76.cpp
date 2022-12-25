/*76. Escriba una función llamada alCuadrado() que calcule el cuadrado del
  valor que se le transmite y despliegue el resultado. La función deberá ser
  capaz de elevar al cuadrado números flotantes
*/

#include <iostream>
using namespace std;

void pedirDatos();
void alCuadrado(float n);

float numero; //variables globales

int main()
{
    pedirDatos();

    alCuadrado(numero);
    
    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese un numero para elevarlo al cuadrado: " << endl; cin >> numero;
}

void alCuadrado(float n)
{
    cout << "\nEl cuadrado es: " << n * n << endl;
}