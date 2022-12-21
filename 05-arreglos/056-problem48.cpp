/*48. Realiza un programa que defina dos vectores de caracteres y después
almacene el contenido de ambos vectores en un nuevo vector, situando en primer 
lugar los elementos del primer vector seguido por los elementos del segundo 
vector. Muestre el contenido del nuevo vector en la salida estándar*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char palabra1[] = {'a', 'b', 'c', 'd', 'e'};
    char palabra2[] = {'f', 'g', 'h', 'i', 'j'}, palabra3[10];

    for (int i = 0; i < 5; i ++)
        palabra3[i] = palabra1 [i];

    for (int i = 0; i < 5; i ++)
        palabra3[5 + i] = palabra2[i];

    cout << "La union de los dos arreglos es: ";
    for (int i = 0; i < 10; i ++)
        cout << palabra3[i];

    cout << endl << endl;    
    system("pause");

    return 0;
}