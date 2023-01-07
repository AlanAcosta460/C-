/*103. Pedir su nombre al usuario y devolver el número de vocales que hay
  NOTA: Recuerda que debes utilizar punteros
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0, vocalTotal = 0;
    char *nombre;

    nombre = new char[30];
    cout << "Ingrese su nombre: "; cin.getline(nombre, 30, '\n');

    strlwr(nombre);
    for (int i = 0; i < strlen(nombre); i ++)
    {
        switch (*(nombre + i))
        {
            case 'a': vocalA ++; break;
            case 'e': vocalE ++; break;
            case 'i': vocalI ++; break;
            case 'o': vocalO ++; break;
            case 'u': vocalU ++; break;
            default: break;
        }
    } 
    delete[] nombre;

    vocalTotal = vocalA + vocalE + vocalI + vocalO +vocalU;

    cout << "\n.:Numero de vocales en la frase:." << endl;
    cout << "Vocal a: " << vocalA << endl;
    cout << "Vocal e: " << vocalE << endl;
    cout << "Vocal i: " << vocalI << endl;
    cout << "Vocal o: " << vocalO << endl;
    cout << "Vocal u: " << vocalU << endl;
    cout << "Vocales totales: " << vocalTotal << endl;

    cout << endl; system ("pause");  

    return 0;
}