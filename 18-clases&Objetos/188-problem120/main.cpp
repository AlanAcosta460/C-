/*120. Definir una clase DiaAnio con los tributos mes y día. Los métodos igual() y visualizar().
  El mes se registra como un valor entero (1 -> Enero, 2 -> Febrero, etc.). El dia del mes se registra
  en otra variable entera dia. Escribir un programa 
  que compruebe si una fecha es su cumpleaños
*/

#include <iostream>
#include "DiaAnio.h"
using namespace std;

int main()
{
    DiaAnio *hoy, *cumple;
    int d, m;

    cout << ".:Ingrese la fecha de hoy:." << endl;
    cout << "Dia: "; cin >> d;
    cout << "Mes (numero): "; cin >> m;

    hoy = new DiaAnio(d, m);
    
    cout << "\n.:Ingrese la fecha de su cumpleanios:." << endl;
    cout << "Dia: "; cin >> d;
    cout << "Mes (numero): "; cin >> m;

    cumple = new DiaAnio(d, m);

    cout << "\n.:Fecha de hoy:." << endl;
    hoy->visualizar();
    cout << "\n.:Fecha de su cumpleanios:." << endl;
    cumple->visualizar(); 

    if(hoy->igual(*cumple))
        cout << "\nFeliz Cumpleanios!!!" << endl;
    else
        cout << "\nQue tenga un buen dia :)" << endl;

    cout << endl; system("pause");
    return 0;
}