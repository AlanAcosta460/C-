/*65 Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el 
otro real, convertirlos a sus respectivos valores y por último sumarlos*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char cnumero1[10], cnumero2[10];
    int numero1;
    float numero2;

    cout << "Ingrese un numero entero: "; cin.getline(cnumero1, 10, '\n');
    cout << "Ingrese un numero real: "; cin.getline(cnumero2, 10, '\n');

    numero1 = atoi(cnumero1);
    numero2 = atof(cnumero2);
    
    cout << "\nLa suma de ambos numeros es: " << numero1 + numero2 << endl; 

    cout << endl; system("pause");
    return 0;
}