//Copiar el contenido de una cadena a otra - Funcion strcpy()

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char nombre[] = "Alan", copia[10];

    strcpy(copia, nombre);
    //parametros de la función: strcpy(destino, origen)

    cout << copia << endl;

    cout << endl; system("pause");
    return 0;
}