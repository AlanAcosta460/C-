/*93. Realize una función recursiva que sume los primeros n enteros positivos
  NOTA: para plantear la función recursiva tenga en cuenta que la suma puede
  expresarse mediante la siguiente recurrencia:
  
    suma(n) = 1                 , si n = 1
              n + suma(n - 1)   , si n > 1
*/

#include <iostream>
using namespace std;

int suma(int);

int main()
{
    int numero, flag; 
    
    cout << "***Suma de los primeros n enteros positivos***" << endl;
    do
    {
        flag = 1;
        cout << "Ingrese el valor de n: "; cin >> numero;
        if (numero < 1)
        {
            cout << "El numero debe ser mayor o igual a uno (1)" << endl << endl;
            flag = 0;
        }
    } while (flag == 0);
    
    cout << "\nSuma: " << suma(numero) << endl;   

    cout << endl; system("pause");
    return 0;
}

int suma(int n)
{
    if (n == 1) //caso base
        n = 1;
    else //case general
        n = n + suma(n - 1);

    return n;
}