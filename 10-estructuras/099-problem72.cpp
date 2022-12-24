/*72. Utilizar las 2 estructuras del problema anterior, pero ahora pedir los datos
  para n alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir
  sus datos
  */

#include <iostream>
using namespace std;

struct promedio
{
    float nota1, nota2, nota3;
};

struct alumno
{
    char nombre[30], sexo[20];
    int edad;
    struct promedio promedioAlu;
    float promedio;
} alu[100];

int main()
{
    int n, promedio, mayor = 0, posicion;

    cout << "Cuantos alumnos desea ingresar al sistema?: "; cin >> n;
    cout << endl; 

    for (int i = 0; i < n; i ++)
    {
        fflush(stdin);
        cout << "***Alumno " << i + 1 << "***" << endl;
        cout << "Nombre: "; cin.getline(alu[i].nombre, 30, '\n');
        cout << "Sexo: "; cin.getline(alu[i].sexo, 20, '\n');
        cout << "Edad: "; cin >> alu[i].edad;
        cout << "Nota 1: "; cin >> alu[i].promedioAlu.nota1;
        cout << "Nota 2: "; cin >> alu[i].promedioAlu.nota2;
        cout << "Nota 3: "; cin >> alu[i].promedioAlu.nota3;
        cout << endl;

        alu[i].promedio = (alu[i].promedioAlu.nota1 + alu[i].promedioAlu.nota2 + alu[i].promedioAlu.nota3) / 3;
        if (alu[i].promedio > mayor)
        {
            mayor = alu[i].promedio;
            posicion = i;
        }
    }

    cout << "***Datos del alumno con mejor promedio***" << endl;
    cout << "Nombre: " << alu[posicion].nombre << endl;
    cout << "Sexo: " << alu[posicion].sexo << endl;
    cout << "Edad: " << alu[posicion].edad << endl;
    cout.precision(3);
    cout << "Promedio: " << alu[posicion].promedio << endl;

    cout << endl; system("pause");
    return 0;
}
