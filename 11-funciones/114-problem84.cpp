/*84. Escriba una función nombrada calcAños() que tenga un parámetro entero
  que represente el número total de días desde la fecha 1/1/2000 y parámetros
  de referencia nombrados año, mes, dia. La funcion es calcular el año, mes
  y día actual para el número dado de días que se le transmitan. Para este 
  problema suponga que cada año tiene 360 días y cada mes tiene 30 días
*/

#include <iostream>
using namespace std;

void calcAnios(int, int &, int &, int &);

int main()
{
    int dato, a, m, d;

    cout << "Ingrese los dias a convertir: "; cin >> dato;
    calcAnios(dato, a, m, d);

    cout << "\nA partir del 1/1/2000 han pasado:" << endl;
    cout << d << " dia(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << a << " anio(s)" << endl;

    cout << "\nFecha Actual: ";
    cout << 1 + d << "/" << 1 + m << "/" << 2000 + a << endl;

    cout << endl; system("pause");
    return 0;
}

void calcAnios(int total, int &anio, int &mes, int &dia)
{
    anio = total / 360;
    total %= 360;
    mes = total / 30;
    total %= 30;
    dia = total;
}