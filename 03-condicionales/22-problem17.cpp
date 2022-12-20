//17. Comprobar si un número digitado por el usuario es positivo o negativo

#include <iostream>

using namespace std;

int main()
{
    float numero;

    cout << "introduzca un numero: ", cin >> numero;

    if (numero == 0)
        cout << "\nEl numero es igual a cero" << endl;
    else 
        if (numero > 0)
            cout << "\nEl numero es positivo" << endl;
        else
            cout << "\nEl numero es negativo" << endl;

    return 0;
}