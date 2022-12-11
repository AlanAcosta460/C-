//4 escribe la siguiente expresion en C++       a) a / b + 1
#include <iostream>

using namespace std;

int main()
{
    float a, b, resultado = 0;

    cout << "Ingrese un numero a: "; cin >> a;
    cout << "Ingrese otro numero b: "; cin >> b;

    resultado = (a / b) + 1;
    
    /*para redondear un numero decimal se usa cout.precision(n), donde n es la cantidad de cifras que toma para redondear 
    pero solo mostrando n - 1 cifras en pantalla*/
    cout.precision(3); 
    cout << "\nEl resultado es: " << resultado << endl;
    
    return 0;
}