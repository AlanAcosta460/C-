/*82. Escriba una función nombrada cambio() que tenga un parámetro en número
  entero y seis paramétros de referencia en número entero nombrados cien, cincuenta, 
  veinte, diez, cinco y uno, respectivamente. La funcion tiene que considerar 
  el valor entero transmitido como una cantidad en dólares y convertir el valor 
  en el número menor de billestes equivalentes.
*/

#include <iostream>
using namespace std;

void cambio(int, int &, int &, int &, int &, int &, int &);

int main()
{
    int dinero, b100, b50, b20, b10, b5, b1;

    cout << "Ingrese la cantidad de dinero a convertir: "; cin >> dinero;
    cambio(dinero, b100, b50, b20, b10, b5, b1);

    cout << "\n***Conversion***" << endl;
    cout << "$100: " << b100 << endl;
    cout << "$50: " << b50 << endl;
    cout << "$20: " << b20 << endl;
    cout << "$10: " << b10 << endl;
    cout << "$5: " << b5 << endl;
    cout << "$1: " << b1 << endl;

    cout << endl; system("pause");
    return 0;
}

void cambio(int total, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = total / 100;
    total %= 100;
    cincuenta = total / 50;
    total %= 50;
    veinte = total / 20;
    total %= 20;
    diez = total / 10;
    total %= 10;
    cinco = total / 5;
    total %= 5;
    uno = total;
}