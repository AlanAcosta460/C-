//14. Escriba un programa que lea dos números y determine cual es el mayor
#include <iostream>

using namespace std;

int main()
{
    float a, b;
    
    cout << "introduzca 2 numeros:\n"; cin >> a >> b;

    if(a == b)
        cout << "\nAmbos numeros son iguales" << endl;
    else
    {
        if(a > b)
            cout << "\nEl mayor es: " << a << endl;
        else
            cout << "\nEl mayor es " << b << endl;
    }
    
    return 0;
}