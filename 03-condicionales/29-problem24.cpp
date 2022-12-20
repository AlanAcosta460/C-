/*24. Hacer un programa que simule un cajero automatico 
con un saldo inicial de 1000 dólares*/

#include <iostream>

using namespace std;

int main()
{
    int eleccion, saldo = 1000, cantidad; 

    cout << "Bienvenido al Cajero Automatico" << endl;
    cout << "\nSeleccione una opcion para continuar:" << endl;
    cout << "1. Ingresar dinero a su cuenta" << endl;
    cout << "2. Retirar dinero de su cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "\n- ";
    cin >> eleccion;

    switch (eleccion)
    {
        case 1: 
            cout << "\nSu saldo actual es de: " << saldo << " USD" << endl;
            cout << "Ingrese la cantidad que desea agregar a su cuenta: "; cin >> cantidad;
            saldo += cantidad;
            cout << "\nSu saldo ahora es de: " << saldo << " USD" << endl;
            cout << "Gracias por usar el Cajero Automatico" << endl;
            break;
        case 2:
            cout << "\nSu saldo actual es de: " << saldo << " USD" << endl;
            cout << "Ingrese la cantidad que desea retirar de su cuenta: "; cin >> cantidad;
            if (cantidad <= 1000)
            {
                saldo -= cantidad;
                cout << "\nSu saldo ahora es de: " << saldo << " USD" << endl;
                cout << "Gracias por usar el Cajero Automatico" << endl;
            }
            else
            {
                cout << "\nNo puede retirar mas de " << saldo << " USD" << endl;
                cout << "Gracias por usar el Cajero Automatico" << endl;
            }
            break;
        case 3: 
            cout << "\nGracias por usar el Cajero Automatico" << endl;
            break;
        default:
            cout << "\nNo es una opcion valida" << endl;
            cout << "\nGracias por usar el Cajero Automatico" << endl;
            break;
    }

    return 0;
}