//8. Escriba un fragmento de programa que intercambie los valores de dos variables
#include <iostream>

using namespace std;

int main()
{
    float a, b, temporal = 0;

    cout << "Ingrese el numero a: "; cin >> a;
    cout << "Ingrese el numero b: "; cin >> b;

    temporal = a;
    a = b; 
    b = temporal;

    cout << "\na ahora vale: " << a << endl;
    cout << "b ahora vale: " << b << endl;

    return 0;
}