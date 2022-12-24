/*69. Realizar un programa que lea un arreglo de estructuras los datos de
  n empleados de la empresa y que imprima los datos de los empleados con 
  mayor y menor salario*/

#include <iostream>
using namespace std;

struct empleado
{
    char nombre[30];
    float salario;
} empleados[100];

int main()
{
    float menor = 999999, mayor = 0;
    int n, posMenor, posMayor;

    cout << "Cuantos empleados desea ingresar al sistema?: "; cin >> n;
    cout << endl; 

    for (int i = 0; i < n; i ++)
    {
        fflush(stdin);
        cout << "***Empleado " << i + 1 << "***" << endl;
        cout << "Nombre: "; cin.getline(empleados[i].nombre, 30, '\n');
        cout << "Salario: "; cin >> empleados[i].salario;
        cout << endl;

        if (empleados[i].salario < menor)
        {
            menor = empleados[i].salario;
            posMenor = i;
        }
        if (empleados[i].salario > mayor)
        {
            mayor = empleados[i].salario;
            posMayor = i;
        }
    }

    cout << "\nEmpleado con Menor salario" << endl;
    cout << "Nombre: " << empleados[posMenor].nombre << endl;
    cout << "Salario: " << empleados[posMenor].salario << endl;
    
    cout << "\nEmpleado con Mayor salario" << endl;
    cout << "Nombre: " << empleados[posMayor].nombre << endl;
    cout << "Salario: " << empleados[posMayor].salario << endl; 

    cout << endl; system("pause");
    return 0;
}