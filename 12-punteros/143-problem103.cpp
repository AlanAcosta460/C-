/*103. Pedir su nombre al usuario y devolver el número de vocales que hay
  NOTA: Recuerda que debes utilizar punteros
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int vocalTotal = 0;
    char *nombre;

    nombre = new char[30];
    cout << "Ingrese su nombre: "; cin.getline(nombre, 30, '\n');

    strlwr(nombre);
    for (int i = 0; i < strlen(nombre); i ++)
    {
        switch (*(nombre + i))
        {
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u': vocalTotal ++; break;
            default: break;
        }
    } 
    delete[] nombre;

    cout << "\nVocales totales: " << vocalTotal << endl;

    cout << endl; system ("pause");  

    return 0;
}