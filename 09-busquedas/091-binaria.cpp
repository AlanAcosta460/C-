//Busqueda Binaria:

#include <iostream>
using namespace std;

int main()
{
    //el arreglo debe estar ordenado
    int numeros[] = {1, 2, 3, 4, 5}, inferior, superior, mitad, dato;
    char flag = 'F';

    cout << "Ingrese un numero: "; cin >> dato;

    //Busqueda Binaria:
    inferior = 0;
    superior = 5;
    
    while (inferior <= superior && flag == 'F')
    {
        mitad = (inferior + superior) / 2;

        if (numeros[mitad] == dato)
        {
            flag = 'V';
            break;
        }
        if (numeros[mitad] > dato)
            superior = mitad - 1;
        if (numeros[mitad] < dato)
            inferior = mitad + 1;
    }

    if (flag == 'V')
        cout << "\nEl numero se encontro en la posicion " << mitad << endl;
    else
        cout << "\nEl numero NO se encontro en el arreglo numerico" << endl;

    cout << endl; system ("pause");
    return 0;
}