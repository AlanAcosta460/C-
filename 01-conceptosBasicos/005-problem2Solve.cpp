#include <iostream>

using namespace std;

int main()
{
    float precio, iva, precioFinal;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    iva = precio*0.16; 
    precioFinal = precio + iva;

    cout << "\nEl precio final es: " << precioFinal << endl;

    return 0;
}