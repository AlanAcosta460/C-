/*La sentencia while:
    
    while (expresion logica)
    {
        conjunto de instucciones;
    } 
*/

#include <iostream>
#include <conio.h> 
using namespace std;

int main()
{
    int i = 1;

    while (i <= 10)
    {
        cout << i << "\t";
        i++; //equivale a (i = i + 1) ó (i += 1)
    }

    i = 10;
    cout << endl;
    while (i >= 1)
    {
        cout << i << "\t";
        i--;
    }

    cout << "\n\nPresione cualquier tecla para salir ";
    getch(); //incluido en la libreria conio.h, para terminar la
             //ejecuacion del programa se debe presionar cualquier tecla

    return 0;
}