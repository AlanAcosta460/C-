/*60. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas 
son iguales, en caso de no serlo, indicar cual es el mayor alfabeticamente*/

#include <iostream> 
#include <string.h>
using namespace std;

int main()
{
    char cadena1[30], cadena2[30];

    cout << "Ingrese una cadena: "; cin.getline(cadena1, 30, '\n');
    cout << "Ingrese otra cadena: "; cin.getline(cadena2, 30, '\n');
    if (strcmp(cadena1, cadena2) == 0)
        cout << "\nAmbas cadenas son iguales" << endl;
    else
        if (strcmp(cadena1, cadena2) > 0)
            cout << "\nLa cadena 1 es mayor alfabeticamente" << endl;
        else
            cout << "\nLa cadena 2 es mayor alfabeticamente" << endl;
    
    cout << endl; system("pause");
    return 0;
}