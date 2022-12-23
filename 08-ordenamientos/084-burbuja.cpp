/*Método burbuja:
Funciona resvisando cada elelemto de la lista que va a ser ordenada con el siguiente, intercambiándolos 
de posición si están en el orden equivocado. Es necesario revisar varias veces todoa la lista hasta que 
no se necesiten más intercambios, lo cual significa que la lista está ordenada. 
    
    Si (numeroActual > numeroSiguiente)
        cambio
*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {4, 5, 2, 3, 1}, i, j, aux;

    //i < elementosDelArreglo;
    for (i = 0; i < 5; i ++)
    {
        for (j = 0; j < 5; j ++)
        {
            //if (numeroActual > numeroSiguiente)
            if (numeros[j] > numeros[j + 1])
            {
                //aux = numeroActual
                aux = numeros[j];
                //numeroActual = numeroSiguiente
                numeros[j] = numeros [j + 1];
                //numeroSiguiente = numeroActual
                numeros[j + 1] = aux;
            }
        }
    }

    /*Algortimo burbuja sin comentarios:
    for (int i = 0; i < numElementos; i ++)
    {
        for (int j = 0; j < numElementos; j ++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo [j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
    */

    cout << "Orden ascente: " << endl;
    for (i = 0; i < 5; i ++)
        cout << numeros[i] << "\t";

    cout << "\n\nOrden descendente: " << endl;
    for (i = 4; i >= 0; i --)
        cout << numeros[i] << "\t";

    cout << endl << endl; system("pause");
    return 0;
}