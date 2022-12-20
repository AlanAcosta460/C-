/*25. Hacer un menu que considere la siguientes opciones: 
        Caso 1: Cubo de un numero
        Caso 2: Numero par o impar
        Caso 3: Salir
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int opcion;

    cout << "\tMenu";
    cout << "\nSeleccione una de las siguientes opciones:" << endl;
    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "\n- "; cin >> opcion;

    switch (opcion)
    {
        case 1: 
            float numero1;
            cout << "\n\tCubo de un numero:" << endl;
            cout << "Ingrese un numero: "; cin >> numero1;
            cout << "El cubo del numero es: " << pow(numero1, 3) << endl;
            cout << "\nGracias por usar el programa" << endl;
            break;
        case 2: 
            int numero2;
            cout << "\n\tNumero par o impar:" << endl;
            cout << "Ingrese un numero: "; cin >> numero2;

            if ((numero2 % 2) == 0)
                cout << "El numero es par" << endl;
            else
                cout << "El numero es impar" << endl;
            cout << "\nGracias por usar el programa" << endl;
            break; 
        case 3: 
            cout << "\nGracias por usar el programa" << endl;
            break; 
        default:
            cout << "\nNo es una opcion valida" << endl;     
    }
    
    return 0;
}