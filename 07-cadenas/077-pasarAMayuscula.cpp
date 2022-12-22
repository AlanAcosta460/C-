//Pasar una palabra a MAYUSCULA - Función strupr()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char palabra[30]; 

    cout << "Ingrese una palabra en minusculas: "; cin.getline(palabra, 30, '\n');
    strupr(palabra);
    cout << endl << palabra << endl; 

    cout << endl; system("pause");
    return 0;
}