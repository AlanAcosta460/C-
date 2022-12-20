/*La sentencia if 

    if(condicion)
    {
        instrucciones 1;
    }
    else 
    {
        instrucciones 2;
    }
*/
#include <iostream>

using namespace std;

int main()
{
    int numero, dato1 = 5, dato2 = 10, dato3 = 4, dato4 = 11;

    cout << "Introduzca un numero: "; cin >> numero;

    if(numero == dato1)
        cout << "\nEl numero es 5" << endl;
    else
        cout << "\nEl numero es diferente de 5" << endl;
    
    if(numero != dato2)
        cout << "El numero es diferente de 10" << endl;
    else
        cout << "El numero es 10" << endl;
    
    if(numero > dato3)
        cout << "El numero es mayor a 4" << endl;
    else
        cout << "El numero es menor a 4" << endl;

    if(numero < dato4)
        cout << "El numero es menor a 11" << endl;
    else
        cout << "El numero es mayor a 11" << endl;
 
    return 0;
}