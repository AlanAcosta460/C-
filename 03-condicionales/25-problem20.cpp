/*20. Escriba un programa que solicite tu edad (un entero) e indique en 
la salida estándar si la edad introducida está en el rango [18-25]*/    

#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "Introduzca su edad: "; cin >> edad;

    if (edad >= 18 && edad <= 25) //los < o > se ponen antes del =
        cout << "\nSu edad SI esta en el rango de 18 - 25" << endl;
    else 
        cout << "\nSu edad NO esta en el rango de 18 - 25" << endl;

    return 0;
}