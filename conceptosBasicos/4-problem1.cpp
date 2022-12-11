//1 Escribe un programa que lea de la entrada estandar de numeros y muestre en la salida estandar su suma, resta, multiplicacion y division
#include <iostream>

using namespace std;

int main()
{ 
    int number1, number2;

    cout << "Ingrese un numero:" << endl;
    cin >> number1;
    cout << "\nIngrese otro numero:" << endl;
    cin >> number2;

    cout << "\nLa suma de ambos numeros es: " << number1 + number2 << endl;
    cout << "La resta de ambos numeros es: " << number1 - number2 << endl;
    cout << "La multiplicacion de ambos numeros es: " << number1 * number2 << endl;
    cout << "La division de ambos numeros es: " << number1 / number2 << endl;

    return 0;
}