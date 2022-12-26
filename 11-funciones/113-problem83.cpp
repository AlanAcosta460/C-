/*83. Escriba una función nombrada tiempo() que tenga un parámetro en número
  entero llamado totalSeg y tres parámetros de referencia enteros llamados horas,
  min y seg. La función es convertir el número de segundos transmitido en un
  número equivalente de horas, minutos y segundos.
*/

#include <iostream>
using namespace std;

void tiempo(int, int &, int &, int &);

int main()
{
    int totalSeg, h, m, s;

    cout << "Ingrese el total de segundos: "; cin >> totalSeg;
    tiempo(totalSeg, h, m, s);

    cout << "\n***Conversion***" << endl;
    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;
    cout << "Segundos: " << s << endl;

    cout << endl; system("pause");
    return 0;
}

void tiempo(int totalSeg, int &horas, int &min, int &seg)
{
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    min = totalSeg / 60;
    totalSeg %= 60;
    seg = totalSeg;
}