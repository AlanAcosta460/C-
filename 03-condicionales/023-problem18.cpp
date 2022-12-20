/*18. Escriba un programa que lea de la entrada estándar un carácter e 
indique en la salida estándar si el carácter es una vocal minuscula o no*/

#include <iostream>

using namespace std;

int main()
{
    char letra;

    cout << "Introduzca un caracter: "; cin >> letra;

    switch (letra)
    {
        case 'a': //no hace falta poner nada pues si es alguna de las 
        case 'e': //opciones hara lo que se indique antes de un break
        case 'i': 
        case 'o': 
        case 'u': cout << "\nEs una vocal minuscula"; break; 
        default: cout << "\nNo es una vocal minuscula"; break;
    }

    return 0;
}
