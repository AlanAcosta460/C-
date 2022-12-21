/*29. Escriba un programa que tome cada 4 hrs la temperatura exterior, leyéndola 
durante un periodo de 24 hrs. Es decir, debe leer 6 temperaturas. Calcule la 
temperatura media del día, la temperatura más alta y la más baja*/

#include <iostream>
using namespace std;

int main()
{
    float temperatura, suma, alta = -1000, baja = 1000;

    for (int i = 4; i <= 24; i += 4)
    {
        cout << "Ingrese la temperatura a las " << i << " horas: "; cin >> temperatura;
        suma += temperatura;
    
        if (temperatura > alta)
            alta = temperatura;
        
        if (temperatura < baja)
            baja = temperatura;
    }

    cout.precision(3);
    cout << "\nLa temperatura promedio es: " << suma / 6 << endl;
    cout << "La temperatura mas alta es: " << alta << endl;
    cout << "La temperatura mas baja es: " << baja << endl << endl;

    system("pause");

    return 0;
}