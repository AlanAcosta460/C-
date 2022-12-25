//Paso de parametros por referencia

#include <iostream>
using namespace std;

void valNuevo(int &,int &); //paso por referencia

int main()
{
    int numero1, numero2;   

    cout << "Ingrese dos numeros: " << endl; cin >> numero1 >> numero2;

    valNuevo(numero1, numero2);

    cout << "\nEl nuevo valor del numero 1 es: " << numero1 << endl;
    cout << "El nuevo valor del numero 2 es: " << numero2 << endl;
    
    cout << endl; system("pause");
    return 0;
}

void valNuevo(int &x, int &y) //& -> direccion de memoria
{
    cout << "\nEl valor del numero 1 es: " << x << endl;
    cout << "El valor del numero 2 es: " << y << endl;

    //se accede a la direccion de memoria y se cambian los valores de raiz
    x = 63; 
    y = 321;
}