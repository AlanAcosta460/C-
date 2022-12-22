/*Hacer un programa que pida al usuario que digite una cadena de caracteres, 
luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres
mostrarla en pantalla, caso contrario no mostrarla*/

#include <iostream> 
#include <string.h>
using namespace std;

int main()
{
    char cadena[50];

    cout << "Ingrese una cadena: "; cin.getline(cadena,50,'\n');
    if (strlen(cadena) >= 10)
        cout << endl << cadena << endl;
    else
        cout << "\nLa cadena es menor a 10 caracteres" << endl;

    cout << endl; system("pause");
    return 0;
}