//Transformar una cadena a números - Función atoi() y atof()

#include <iostream>
#include <stdlib.h> //atoi() y atof() solo funcionan con esta libreria
using namespace std;

int main()
{
    char cadena1[] = "123", cadena2[] = "123.456";
    int numero1;
    float numero2;

    numero1 = atoi(cadena1); //para numeros enteros
    numero2 = atof(cadena2); //para numeros flotantes

    cout << "Cadena 1 convertida a numero: " << numero1 << endl;
    cout << "Cadena 2 convertida a numero: " << numero2 << endl;

    cout << endl; system("pause");
    return 0;
}