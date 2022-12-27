/*95. Escriba una función recursiva que calcule un número elevado a una potencia
  entera mayor o igual a cero: x^y

    potencia(x, y) = x                          , si y = 1
                     x * potencia (x, y - 1)    , si y > 1
*/

#include <iostream>
using namespace std;

int potencia(int, int);

int main()
{
    int x, y, flag; 
    
    cout << "***x elevado a y***" << endl;
    do
    {
        flag = 1;
        cout << "Ingrese el valor de x: "; cin >> x;
        if (x < 1)
        {
            cout << "El numero debe ser mayor o igual a uno (1)" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);
    
    do
    {
        flag = 1;
        cout << "Ingrese el valor de y: "; cin >> y;
        if (y < 0)
        {
            cout << "La potencia debe ser mayor o igual a cero (0)" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);

    cout << endl << x << " elevado a " << y << " es: " << potencia(x, y) << endl;   

    cout << endl; system("pause");
    return 0;
}

int potencia(int x, int y)
{  
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    else 
        return x * potencia(x, y - 1);
}   