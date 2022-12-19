#include <iostream>

using namespace std;

int main()
{
    float practica, teorica, participacion, notaFinal;

    cout << "Digite la nota de practica: "; cin >> practica; 
    cout << "Digite la nota teorica: "; cin >> teorica;
    cout << "Digite la nota de participacion: "; cin >> participacion;

    practica *= 0.3; //practica = practica * 0.3
    teorica *= 0.6;
    participacion *= 0.1;

    notaFinal = practica + teorica + participacion;

    cout.precision(3);
    cout << "\nLa nota final es: " << notaFinal << endl;

    return 0;
}