/*10. La calificacion final de un estudiante es el promedio de tres notas:
    -La nota de prácticas que cuenta el 30% del total
    -La nota teórica que cuenta un 60%
    -La nota de participacion que cuenta el 10% restante
Escriba un programa que lea las tres notas del alumno y escriba su nota final*/
#include <iostream>

using namespace std;

int main()
{
    float notaPracticas, notaTeoria, notaParticipacion, notaFinal;

    cout << "Ingrese la nota de practicas del alumno: "; cin >> notaPracticas;
    cout << "Ingrese la nota teorica del alumno:      "; cin >> notaTeoria;
    cout << "Ingrese la nota de participacion:        "; cin >> notaParticipacion;

    notaFinal = (notaPracticas * .3) + (notaTeoria * .6) + (notaParticipacion * .1);

    cout.precision(3);
    cout << "\nLa nota final es: " << notaFinal << endl;

    return 0;
}