/*18. Escriba un programa que lea de la entrada estándar un carácter e 
indique en la salida estándar si el carácter es una vocal minuscula, es
una vocal mayuscula o no es una vocal*/

#include <iostream>

using namespace std;

int main()
{
    char letra;

    cout << "Introduzca un caracter: "; cin >> letra;

    switch (letra)
    {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': cout << "\nEs una vocal minuscula" << endl; break; 
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': cout << "\nEs una vocal mayuscula" << endl; break; 
        default: cout << "\nNo es una vocal"; break;
    }

    return 0;
}
