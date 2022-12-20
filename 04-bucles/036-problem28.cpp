/*28. Realice un programa que calcule y muestre en la salida estándar
la suma de los cuadrados de los 10 primeros enteros mayores a cero*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int total;

    for (int i = 1; i <= 10; i++)
        total += pow(i, 2);

    cout << "La suma de los cuadrados de los 10 primeros numeros es: " << total << endl << endl;

    system("pause"); 
    
    return 0;
}