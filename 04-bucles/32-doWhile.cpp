/*La sentencia do while:
    
    do
    {
        conjunto de instucciones;
    } while (expresion logica);
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << "\t";
        i++;
    } while (i <= 10);

    i = 10;
    cout << endl;
    do
    {
        cout << i << "\t";
        i--;
    } while (i >= 1);

    cout << endl;
    system("pause"); //funcione igual que el getch 

    return 0;
}
