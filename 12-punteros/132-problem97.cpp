/*97. Comprobar si un número es par o impar, y señalar la posición de memoria 
  donde se está guardando el número. Con punteros. 
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, *puntero;
    
    cout << "***Par o Impar***" << endl;
    cout << "Ingrese un numero: "; cin >> numero;
    
    puntero = &numero;
    if (*puntero % 2 == 0)
        cout << "\nEl numero es PAR" << endl;
    else 
        cout << "\nEl numero es IMPAR" << endl;

    cout << "Direccion de memoria: " << puntero << endl; 

    cout << endl; system("pause");
    return 0;
}