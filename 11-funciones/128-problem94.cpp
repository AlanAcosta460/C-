/*94. Realize una función recursiva para la serie de Fibonacci. NOTA: La serie
  de Fibonacci está formada por la secuencia de números: 0, 1, 1, 2, 3, 5, 8, 
  13, 21, 34 ...

    fibonacci(n) = n                                        , si n < 2
                   fibonacci(n - 1) + fibonacci (n - 2)    , si n > 2

*/

#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
    int nElementos, flag;

    cout << "***Serie de Fibonacci***" << endl;
    do
    {
        flag = 1;
        cout << "Cuantos elementos de la serie quiere ver? \n- "; cin >> nElementos;
        if (nElementos <= 0)
        {
            cout << "El numero debe ser mayor o igual a uno (1)" << endl << endl;
            flag = 0;
        } 
    } while (flag == 0);

    cout << endl;
    for (int i = 0; i < nElementos; i ++)
        cout << fibonacci(i) << " ";

    cout << endl << endl; system("pause");
    return 0;
}

int fibonacci(int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}