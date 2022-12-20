//15. Escriba un programa que lea 3 números y determine cual de ellos es mayor 
#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "introduzca 3 numeros:\n"; cin >> n1 >> n2 >> n3;

    if(n1 == n2 && n2 == n3)
        cout << "\nLos tres numeros son iguales";
    else
        if(n1 > n2 && n1 > n3)
            cout << "\nEl numero mayor es: " << n1 << endl;
        else
            if(n2 > n1 && n2 > n3)
                cout << "\nEl numero mayor es: " << n2 << endl;
            else
                cout << "\nEl numero mayor es: " << n3 << endl;

    return 0;
}