/*
n* = numeroActual

    |5*|3|4|1|2|
     ¡
Comprobar si el elemento de su izquierda ya es menor que el

Siguiente elemento:
    |5|3*|4|1|2|
       ¡
if  numeroIzq > numeroActual
    cambio
SI
    |3*|5|4|1|2|
        ¡
if  numeroIzq > numeroActual
    cambio
NO

Siguiente elemento:
    |3|5|4*|1|2|
         ¡
if  numeroIzq > numeroActual
    cambio
SI
    |3|4*|5|1|2|
          ¡
if  numeroIzq > numeroActual
    cambio
NO

Siguiente elemento:
    |3|4|5|1*|2|
           ¡
if  numeroIzq > numeroActual
    cambio
SI
    |3|4|1*|5|2|
            ¡
if  numeroIzq > numeroActual
    cambio
SI
    |3|1*|4|5|2|
            ¡
if  numeroIzq > numeroActual
    cambio
SI
    |1*|3|4|5|2|
            ¡
if  numeroIzq > numeroActual
    cambio
NO

Siguiente elemento:
    |1|3|4|5|2*|
             ¡
if  numeroIzq > numeroActual
    cambio
SI
    |1|3|4|2*|5|
              ¡
if  numeroIzq > numeroActual
    cambio
SI
    |1|3|2*|4|5|
              ¡
if  numeroIzq > numeroActual
    cambio
SI
    |1|2*|3|4|5|
              ¡
if  numeroIzq > numeroActual
    cambio
NO

Arreglo ordenado:
    |1|2|3|4|5|
*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {4, 5, 2, 3, 1}, i, posicion, auxiliar;

    //i < elementosDelArreglo;
    for (i = 0; i < 5; i ++)
    {
        //flecha de posicion en el arreglo
        posicion = i;
        //numeroActual
        auxiliar = numeros[i];

        /*esto es: 
        if  numeroIzq > numeroActual*/  
        while (posicion > 0 && numeros[posicion - 1] > auxiliar)
        {
            //cambio:
            numeros[posicion] = numeros[posicion - 1];
            posicion --;
        }
        numeros[posicion] = auxiliar;
    }

    /*Algortimo por inserción sin comentarios:
    for (int i = 0; i < numElementos; i ++)
    {
        posicion = i;
        auxiliar = arreglo[i];
 
        while (posicion > 0 && arreglo[posicion - 1] > auxiliar)
        {
            arreglo[posicion] = arreglo[posicion - 1];
            posicion --;
        }
        arreglo[posicion] = auxiliar;
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