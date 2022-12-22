/*80. Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la
letra A, convertir su nombre a minusculas, caso contrario no convertirlo*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char nombre[50]; 

    cout << "Ingrese su nombre en MAYUSCULAS: "; cin.getline(nombre, 50, '\n');

    //strncmp() tambien sirve para comparar pero necesita saber cuantos caracteres se compararan
    if (strncmp(nombre, "A", 1) == 0)
    {
        strlwr(nombre);
        cout << endl << nombre << endl;
    }
    else
        cout << "\nEl nombre o comienza por la letra A" << endl;

    cout << endl; system("pause");
    return 0;
}