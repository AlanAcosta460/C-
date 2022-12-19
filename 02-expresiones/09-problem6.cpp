#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado;

    cout << "Ingrese el numero a: "; cin >> a;
    cout << "Ingrese el numero b: "; cin >> b;
    cout << "Ingrese el numero c: "; cin >> c;
    cout << "Ingrese el numero d: "; cin >> d;
    cout << "Ingrese el numero e: "; cin >> e;
    cout << "Ingrese el numero f: "; cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout.precision(3);
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}