/*96. Escriba una función escribeNumeros(int ini, int fin) que devuelva en 
  la sálida estándar los números del ini al fin. Escriba una versión que
  escriba los números en orden ascendente

    escribeNumeros(ini, fin) = ini                              , si fin = ini
                               escribeNumeros(ini, fin - 1)     , si fin > ini
*/

#include <iostream>
using namespace std;

int escribeNumeros(int, int);

int main()
{
    int inicio, final, flag;

    cout << "***Mostrar serie***" << endl;
    cout << "Ingrese el inicio: "; cin >> inicio;
    do 
    {
        flag = 1;
        cout << "Ingrese el final: "; cin >> final;
        if (final < inicio)
        {
            cout << "El final debe ser mayor al inicio" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);

    cout << "\nSerie: ";
    for (int i = inicio; i <= final; i ++)
        cout << escribeNumeros(i, final) << " ";

    cout << endl << endl; system("pause");
    return 0;
}

int escribeNumeros(int ini, int fin)
{
    if (fin == ini)
        return ini;
    else
        return escribeNumeros(ini, fin - 1);
}