//Estructuras Anidadas

#include <iostream>
using namespace std;

struct infoDireccion
{
    char direccion[50], ciudad[20], provincia[20];
};

struct empleado
{
    char nombre[30];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados[2]; //arreglo de estructuras

int main()
{
    for (int i = 0; i < 2; i ++)
    {
        fflush(stdin); //vacia el buffer
        cout << "Empleado " << i + 1 << endl;
        cout << "Ingrese el nombre: "; cin.getline(empleados[i].nombre, 30, '\n');
        cout << "Ingrese la direccion: "; cin.getline(empleados[i].dirEmpleado.direccion, 50, '\n');
        cout << "Ciudad: "; cin.getline(empleados[i].dirEmpleado.ciudad, 20, '\n');
        cout << "Provincia: "; cin.getline(empleados[i].dirEmpleado.provincia, 20, '\n');
        cout << "Ingrese el salario: "; cin >> empleados[i].salario;
        cout << endl;
    }

    //impresion de datos:
    for (int i = 0; i < 2; i ++)
    {
        cout << "Empleado " << i + 1 << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dirEmpleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].dirEmpleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].dirEmpleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << endl;
    }

    system("pause");
    return 0;
}
