//9. Escriba un porgrama que lea las tres notas de un alumno y calcule la nota final media de dicho alumno
#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, promedio;

    cout << "Ingrese la nota 1: "; cin >> nota1;
    cout << "Ingrese la nota 2: "; cin >> nota2;
    cout << "Ingrese la nota 3: "; cin >> nota3;

    cout.precision(2);
    promedio = (nota1 + nota2 + nota3) / 3;

    cout << "\nEl promedio final del alumno es: " << promedio << endl;

    return 0;
}