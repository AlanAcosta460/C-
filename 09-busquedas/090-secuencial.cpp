//Busqueda Secuencial:

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {3, 5, 2, 1, 4}, i = 0, dato1;
    char flag = 'F';

    cout << "Ingrese un numero: "; cin >> dato1;

    //Busqueda secuencial:
    while (flag == 'F' && i < 5)
    {
        if (numeros[i] == dato1)
            flag = 'V';
        i ++;
    }

    if (flag == 'F')
        cout << "\nEl numero NO se encontro en el arreglo numerico" << endl;
    else
        cout << "\nEl numero se encontro en la posicion " << i - 1 << endl;

    //tambien funciona con caracteres
    char cadena[] = {'e', 'i', 'a', 'u', 'o'}, dato2;
    flag = 'F';
    i = 0;

    cout << "\nIngrese una letra: "; cin >> dato2;

    while (flag == 'F' && i < 5)
    {
        if (cadena[i] == dato2)
            flag = 'V';
        i ++;
    }

    if (flag == 'F')
        cout << "\nEl numero NO se encontro en la cadena" << endl;
    else
        cout << "\nEl caracter se encontro en la posicion " << i - 1 << endl;

    cout << endl; system("pause");
    return 0;
}