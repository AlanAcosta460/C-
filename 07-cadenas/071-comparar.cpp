//Comparar cadenas - Función strcmp()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char palabra1[] = "Hola", palabra2[] = "hola";

    if (strcmp(palabra1, palabra2) == 0)
        cout << "Ambas cadenas son iguales" << endl;
    else
        cout << "Las cadenas son diferentes" << endl;

    char palabra3[] = "bueno", palabra4[] = "avion";

    //strcmp() tambien compara cual cadena es mayor alfabeticamente
    if (strcmp(palabra3, palabra4) > 0)
        cout << endl << palabra3 << " esta despues alfabeticamente que " << palabra4 << endl;
    else
        cout << endl << palabra4 << " esta despues alfabeticamente que " << palabra3 << endl;

    cout << endl; system("pause");
    return 0;
}