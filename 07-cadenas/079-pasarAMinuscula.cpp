//Pasar una palabra a minusculas - Función strlwr()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char palabra[30]; 

    cout << "Ingrese una palabra en MAYUSCULAS: "; cin.getline(palabra, 30, '\n');
    strlwr(palabra);
    cout << endl << palabra << endl; 

    cout << endl; system("pause");
    return 0;
}