//38. Hacer un programa que realize la serie de Fibonacci
//  Fibonacci --> 0, 1, 1, 2, 3, 5, 8, 13,..., n

#include <iostream>
using namespace std;

int main()
{
    int limite, x, y = 1, z; 

    cout << "Ingrese la cantidad de elementos: "; cin >> limite;


    for (int i = 0; i < limite; i ++)
    {
        z += x;
        cout << z << " "; 
        x = y;
        y = z; 
    }

    cout << endl << endl;
    system("pause");

    return 0;
}