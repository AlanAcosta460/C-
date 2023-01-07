/*104. Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces
  aparece la vocal a, e, i, u; en la cadena de caracteres.
  NOTA: usar punteros
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0;
    char *frase;

    frase = new char[100];
    cout << "Ingrese una frase: "; cin.getline(frase, 30, '\n');

    strlwr(frase);
    for (int i = 0; i < strlen(frase); i ++)
    {
        switch (*(frase + i))
        {
            case 'a': vocalA ++; break;
            case 'e': vocalE ++; break;
            case 'i': vocalI ++; break;
            case 'o': vocalO ++; break;
            case 'u': vocalU ++; break;
            default: break;
        }
    } 
    delete[] frase;

    cout << "\n.:Numero de vocales en la frase:." << endl;
    cout << "Vocal a: " << vocalA << endl;
    cout << "Vocal e: " << vocalE << endl;
    cout << "Vocal i: " << vocalI << endl;
    cout << "Vocal o: " << vocalO << endl;
    cout << "Vocal u: " << vocalU << endl;

    cout << endl; system ("pause");  

    return 0;
}