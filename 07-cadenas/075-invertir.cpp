//Invertir una cadena - Función strrev()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char frase[30]; 

    cout << "Ingrese una frase: "; cin.getline(frase, 30, '\n');
    strrev(frase);
    cout << "\nLa frase invertida es: " << frase << endl; 

    cout << endl; system("pause");
    return 0;
}