/*92. Escriba una función llamada mayor() que devuelva la fecha más reciente
  de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten
  las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha
*/

#include <iostream>
using namespace std;

struct fecha
{
    int dia, mes, anio;
}f1, f2;

void pedirDatos();
fecha mayor(fecha, fecha);
void mostrar(fecha);

int main()
{
    pedirDatos();
    fecha fma = mayor(f1, f2);
    mostrar(fma);

    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    int flag;

    cout << "***Fecha 1***" << endl;
    do
    {
        flag = 0;
        cout << "Dia: "; cin >> f1.dia;
        if (f1.dia < 1 || f1.dia > 31)
        {
            cout << "Ingrese un dia valido" << endl;
            flag = 1;
        }
    } while (flag == 1);

    do
    {
        flag = 0;
        cout << "Mes: "; cin >> f1.mes;
        if (f1.mes < 1 || f1.mes > 12)
        {
            cout << "Ingrese un mes valido" << endl;
            flag = 1;
        }
    } while (flag == 1);

    do
    {
        flag = 0;
        cout << "Anio: "; cin >> f1.anio;
        if (f1.anio < 1 || f1.anio > 2023)
        {
            cout << "Ingrese un anio valido" << endl;
            flag = 1;
        }
    } while (flag == 1);

    cout << "\n***Fecha 2***" << endl;
    do
    {
        flag = 0;
        cout << "Dia: "; cin >> f2.dia;
        if (f2.dia < 1 || f2.dia > 31)
        {
            cout << "Ingrese un dia valido" << endl;
            flag = 1;
        }
    } while (flag == 1);

    do
    {
        flag = 0;
        cout << "Mes: "; cin >> f2.mes;
        if (f2.mes < 1 || f2.mes > 12)
        {
            cout << "Ingrese un mes valido" << endl;
            flag = 1;
        }
    } while (flag == 1);

    do
    {
        flag = 0;
        cout << "Anio: "; cin >> f2.anio;
        if (f2.anio < 1 || f2.anio > 2023)
        {
            cout << "Ingrese un anio valido" << endl;
            flag = 1;
        }
    } while (flag == 1);

    cout << endl;
}

fecha mayor(fecha f1, fecha f2)
{
    fecha fmayor; 
    
    if (f1.anio > f2.anio)
        fmayor = f1;
    else if (f1.anio < f2.anio)
        fmayor = f2;
    else
    {
        if (f1.mes > f2.mes)
            fmayor = f1;
        else if (f1.mes < f2.mes)
            fmayor = f2;
        else
        {
            if (f1.dia > f2.dia)
                fmayor = f1;
            else if (f1.dia < f2.dia)
                fmayor = f2;
            else
                fmayor = f1;
        }
    }
    
    return fmayor;
}

void mostrar(fecha mayor)
{
    cout << "***Fecha mas reciente***" << endl;
    cout << mayor.dia << "/" << mayor.mes << "/" << mayor.anio << endl;
}