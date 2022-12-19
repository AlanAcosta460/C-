#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, resultado;

    cout << "Ingrese el valor de x: "; cin >> x;
    cout << "Ingrese el valor de y: "; cin >> y;
    
    resultado = sqrt(x) / (pow(y, 2) - 1);

    cout.precision(3);
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}