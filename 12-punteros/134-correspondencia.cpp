//Correspondencia entre arreglos y punteros

#include <iostream>
using namespace std;

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5}, *puntero;

    puntero = &arreglo[0]; //se iguala a la primera posicion
    //se puede recortar asi: 
    //puntero = arreglo;

    cout << "***Elementos del vector***" << endl;
    cout << "Elemento \tDireccion" << endl;
    for (int i = 0; i < 5; i ++)  
        cout << arreglo[i] << "\t\t" << puntero ++ << endl; //no se utiliza i para inidicar la posicion

    cout << endl; system("pause");
}