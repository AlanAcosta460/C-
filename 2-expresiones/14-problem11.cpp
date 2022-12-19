//11. Escrba un programa que lea de la entrada estándar los dos catetos de un triangulo y escriba en la salida estándar su hipotenusa
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float cateto1, cateto2, hipotenusa;

    cout << "Ingrese el primer cateto del triangulo: "; cin >> cateto1;
    cout << "Ingrese el segundo cateto del triangulo: "; cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout.precision(3);
    cout << "\nLa hipotenusa mide: " << hipotenusa << endl;

    return 0;
}
