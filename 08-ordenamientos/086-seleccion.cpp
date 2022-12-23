/*Funcionamiento de método por selección:
    1. Buscar el minimo elemento de la lista
    2. Intercambiar con el primer elemento
    3. Buscar el minimo del resta de la lista
    4. Intercambiar con el segundo
    5. Y asi susesivamente

|4|3|1|5|2|
 ¡
El minimo elemento de la flecha en adelante es el 1
|1|3|4|5|2|

|1|3|4|5|2|
   ¡
El minimo elemento de la flecha en adelante es el 2
|1|2|4|5|3|

|1|2|4|5|3|
     ¡
El minimo elemento de la flecha en adelante es el 3
|1|2|3|5|4|

|1|2|3|5|4|
       ¡
El minimo elemento de la flecha en adelante es el 4
|1|2|3|4|5|

Arreglo Ordenado:
|1|2|3|4|5|*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {3, 2, 1, 5, 4}, i, j, auxiliar, minimo;

    //i < elementosDelArreglo;
    for (i = 0; i < 5; i ++)
    {
        //posicion del numero minimo
        minimo = i;

        //recorre el arreglo desde la segunda posicion
        for (j = i + 1; j < 5; j ++)
        {
            //si numero actual es menor al numero menor
            if (numeros[j] < numeros[minimo])
                //hacer el cambio de la posicion del numero minimo
                minimo = j;

            //cambio del numero
            auxiliar = numeros[i];
            numeros[i] = numeros[minimo];
            numeros[minimo] = auxiliar;
        }
    }

    /*Algortimo por seleccion sin comentarios:
    for (int i = 0; i < numElementos; i ++)
    {
        minimo = i;
        for (int j = i + 1; j < numElementos; j ++)
        {
            if (arreglo[j] < arreglo[minimo])
                minimo = j;

            auxiliar = arreglo[i];
            arreglo[i] = arreglo[minimo];
            arreglo[minimo] = auxiliar;
        }
    }
    */

    cout << "Orden Ascente: " << endl;
    for (i = 0; i < 5; i ++)
        cout << numeros[i] << "\t";

    cout << "\n\nOrden Descendente: " << endl;
    for (i = 4; i >= 0; i --)
        cout << numeros[i] << "\t";

    cout << endl << endl; system("pause");
    return 0;
}