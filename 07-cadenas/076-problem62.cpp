//62. Hacer un programa que determine si una palabra es políndroma

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char palabra[30], invertida[30];

    cout << "Ingrese una palabra: "; cin.getline(palabra, 20, '\n');

    strcpy(invertida, palabra);
    strrev(invertida);
    if (strcmp(invertida, palabra) == 0)
        cout << "\nLa palabra es polindroma" << endl;
    else
        cout << "\nLa palabra NO es polindroma" << endl;

    cout << endl; system("pause");
    return 0;
}