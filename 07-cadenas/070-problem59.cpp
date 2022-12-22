/*59. Pedit al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char cadena[50], copia[50];

    cout << "Ingrese una cadena: "; cin.getline(cadena, 50, '\n');
    strcpy(copia, cadena);

    cout << "\nLa copia de su cadena es: " << copia << endl;

    cout << endl; system("pause");
}