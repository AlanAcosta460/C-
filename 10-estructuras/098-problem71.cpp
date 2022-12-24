/*71. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otra 
  llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este 
  anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y 
  por ultimo imprimir todos sus datos incluidos el promedio*/

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
} alu[100];

int main()
{
    int n;

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
    }

    cout << endl;
    for (int i = 0; i < n; i ++)
    {
        cout << "***Datos alumno " << i + 1 << "***" << endl;
        cout << "Nombre: " << alu[i].nombre << endl; 
        cout << "Sexo: " << alu[i].sexo << endl;
        cout << "Edad: " << alu[i].edad << endl;
        cout.precision(3);
        cout << "Promedio: " << (alu[i].promedioAlu.nota1 + alu[i].promedioAlu.nota2 + alu[i].promedioAlu.nota3) / 3 << endl;
        cout << endl;
    }

    system("pause");
    return 0;
}
