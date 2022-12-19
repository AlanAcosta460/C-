/*2 Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al
aplicarle el IVA*/

#include <iostream>

using namespace std;

int main()
{
    float precio;

    cout << "Ingrese el precio del producto: $"; cin >> precio;
    cout << "\nEl IVA aplicable es del 16%" << endl;
    cout << "El precio del prudcto mas el IVA es: $" << precio * 1.16 << endl;

    return 0;
}