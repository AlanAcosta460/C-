/*Cambiar un número con el mismo valor pero en romanos
    M = 1000
    D = 500
    C = 100
    L = 50
    X = 10
    I = 1
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, aux = 0;

    cout << "Introduzca un numero: "; cin >> numero;

    cout << "\nEl numero convertido en romanos es: "; 
    
    if (numero >= 1000)
    {
        aux = numero / 1000;
        numero -= (aux * 1000);
        switch (aux)
        {
            case 3: cout << "M";
            case 2: cout << "M";
            case 1: cout << "M"; break;
            default: break;
        }
    }

    if (numero >= 100)
    {
        aux = numero / 100;
        numero -= (aux * 100);
        switch (aux)
        {
            case 9: cout << "CM"; break;
            case 8: cout << "DCCC"; break;
            case 7: cout << "DCC"; break;
            case 6: cout << "DC"; break;
            case 5: cout << "D"; break;
            case 4: cout << "CD"; break;
            case 3: cout << "C";
            case 2: cout << "C"; 
            case 1: cout << "C"; break;
            default: break;
        }
    }
    
    if (numero >= 10)
    {
        aux = numero / 10;
        numero -= (aux * 10);
        switch (aux)
        {
            case 9: cout << "XC"; break;
            case 8: cout << "LXXX"; break;
            case 7: cout << "LXX"; break;
            case 6: cout << "LX"; break;
            case 5: cout << "L"; break;
            case 4: cout << "XL"; break;
            case 3: cout << "X"; 
            case 2: cout << "X"; 
            case 1: cout << "X"; break;
            default: break;
        }
    }

    if (numero >= 1)
    {
        switch (numero)
        {
            case 9: cout << "IX"; break;
            case 8: cout << "VIII"; break;
            case 7: cout << "VII"; break;
            case 6: cout << "VI"; break;
            case 5: cout << "V"; break;
            case 4: cout << "IV"; break;
            case 3: cout << "I";
            case 2: cout << "I";
            case 1: cout << "I"; break;
            default: break;
        }
    }

    return 0;
}