//16. Realize un programa que lea un valor entero y determine si se trata de un número par o impar
#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Introduzca un numero: "; cin >> numero;

    if ((numero % 2) == 0)
        cout << "\nEl numero es par" << endl;
    else
        cout << "\nEl numero es impar" << endl;

    return 0;
}