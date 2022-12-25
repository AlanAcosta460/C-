/*81. Intercambiar el valor de 2 variables utilizando paso de parámetros por 
  referencia
*/

#include <iostream>
using namespace std;

template <class All>
void intercambio(All &, All &); 

int main()
{
    float dato1, dato2;
    
    cout << "Ingrese numero 1: "; cin >> dato1;
    cout << "Ingrese numero 2: "; cin >> dato2;

    intercambio(dato1, dato2);

    cout << "\nNumero 1 ahora vale: " << dato1 << endl;
    cout << "Numero 2 ahora vale: " << dato2 << endl;

    cout << endl; system("pause");
    return 0;
}

template <class All>
void intercambio(All &x, All &y)
{
    All aux;
    
    aux = x;
    x = y;
    y = aux;
}