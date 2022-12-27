/*Recursivad

Factorial de un numerO  ---->  3! = 3 * 2 * 1

    factorial (n) = 1                       , si n = 0
                    n * factorial (n - 1)   , si n > 0
*/

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int numero, flag; 
    
    cout << "***Factorial de un numero***" << endl;
    do
    {
        flag = 1;
        cout << "Ingrese un numero: "; cin >> numero;
        if (numero < 0)
        {
            cout << "El numero debe ser mayor o igual a cero (0)" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);
    
    cout << endl << numero << "! = " << factorial(numero) << endl;   

    cout << endl; system("pause");
    return 0;
}

int factorial(int n)
{
    if (n == 0) //caso base
        n = 1;
    else //case general
        n = n * factorial(n - 1);

    return n;
}