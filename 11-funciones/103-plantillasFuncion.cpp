/*Plantillas de Función
Ejemplo: Sacar el valor absoluto de un número:*/

#include <iostream>
using namespace std;

//Prototipo:
template <class TIPOD> 
void valorAbs(TIPOD numero);


int main()
{
    int numero1 = 4;
    float numero2 = -34.96;
    double numero3 = -123.383201;

    valorAbs(numero1);
    valorAbs(numero2);
    valorAbs(numero3);


    cout << endl; system("pause");
    return 0;
}

template <class TIPOD> 
void valorAbs(TIPOD numero)
{
    if (numero < 0)
        numero = numero * -1;
    
    cout << "El valor absoluto del numero es: " << numero << endl;
}