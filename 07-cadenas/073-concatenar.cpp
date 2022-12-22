//Añadir o concatenar una cadena con otra - Función strcat()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char cadena1[] = "Esto es una cadena", cadena2[] = " de ejemplo", cadena3[30];

    strcpy(cadena3, cadena1); //cadena3 = "Esto es una cadena"
    strcat(cadena3, cadena2); //cadena3 = "Esto es una cadena de ejemplo"
    
    /*la funcion strcat() añade al final de una cadena otra cadena
    parametros: strcat(destino, cadena a añadir);*/

    //impresion de la cadena completa
    cout << cadena3 << endl;

    cout << endl; system("pause");
    return 0;
}