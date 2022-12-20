//13. Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2 + bx + c = 0
#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
    float a, b, c, raiz1, raiz2;

    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;

    raiz1 = (- b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    raiz2 = (- b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    cout << "\nx1 es igual a: " << raiz1 << endl;
    cout << "x2 es igual a: " << raiz2 << endl;

    return 0;
}