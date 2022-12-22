/*63. Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y
decir si son iguales o no*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char cadena1[30], cadena2[30];

    cout << "Ingrese una cadena: "; cin.getline(cadena1, 30, '\n');
    cout << "Ingrese otra cadena: "; cin.getline(cadena2, 30, '\n');

    strupr(cadena1);
    strupr(cadena2);
    if (strcmp(cadena1, cadena2) == 0)
        cout << "\nAmbas cadenas son iguales" << endl;
    else
        cout << "\nAmbas cadenas NO son iguales" << endl;

    cout << endl; system("pause");
    return 0;
}