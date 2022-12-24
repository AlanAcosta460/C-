/*Definición de funciones:
    tipo nombre(tipo var1, tipo var2, ..., tipo varn)
    {
        conjunto de instrucciones;
    }
    
*/

//Ejemplo de función para encontrar el mayor de 2 numeros:

#include <iostream>
using namespace std;

//Firma de la función:
int encontrarMayor(int x, int y)
{
    int mayor;

    if (x > y)
        mayor = x;
    else
        mayor = y;

    return mayor;
}

int main()
{
    int n1, n2, nMayor; 

    cout << "Ingrese dos numeros: " << endl; cin >> n1 >> n2;

    nMayor = encontrarMayor(n1, n2);
    
    cout << "\nEl numero mayor es: " << nMayor << endl;
    /*Tambien se puede escribir asi sin crear una nueva variable:
    cout << "\nEl numero mayor es: " << encontrarMayor(n1, n2) << endl;*/

    cout << endl; system("pause");
    return 0;
}

//Definición de la función:
// *La funcion se puede defininir desde el inicio sin la firma