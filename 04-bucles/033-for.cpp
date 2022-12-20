/*La sentencia for
    
    for (expr1; expresion logica; expr2)
    {
        conjunto de instrucciones;
    }
*/

#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
        cout << i << "\t";
    
    cout << endl;
    for (i = 10; i >= 1; i--)
        cout << i << "\t";

    cout << "\n" << endl;
    system("pause");

    return 0;
}

