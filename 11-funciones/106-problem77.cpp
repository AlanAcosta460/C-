/*77. Escriba una función nombrada funpot() que eleve un número entero que 
  se le transmita a una potencia en número entero positivo y despliegue el 
  resultado. El número entero positivo deberá ser el segundo valor transmitido
*/

#include <iostream>
using namespace std;

void pedirDatos();
void funPot(int x, int y);

int numero, potencia; //variables globales

int main()
{
    pedirDatos();
    funPot(numero, potencia);
    
    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese un numero: "; cin >> numero;
    cout << "Ingrese la potencia: "; cin >> potencia;
}

void funPot(int x, int y)
{   
    long res = 1;

    for (int i = 0; i < y; i ++)
        res *= x; 

    cout << endl << x << " elevado a la " << y << " es: " << res << endl;
}