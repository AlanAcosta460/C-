/*31. Escriba un programa que calcule x^y, donde tanto x
como y son enteros positivos, sin utilizar la función pow*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, resultado = 1;

    do
    {
        cout << "Ingrese un valor para x: "; cin >> x;
    } while (x <= 0);

    cout << endl;
    do
    {
        cout << "Ingrese un valor para y: "; cin >> y;
    } while (y <= 0);
    
    for (int i = 0; i < y; i++)
        resultado *= x;

    cout << endl << x << " elevado a " << y << " es: " << resultado << endl << endl;

    system("pause");

    return 0;
}