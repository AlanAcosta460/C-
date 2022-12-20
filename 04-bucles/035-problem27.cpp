/*27. Realice un programa que lea de la entrada estándar números hasta 
que se introduzca un cero. En este momento el programa debe terminar y 
mostrar en la salida estandar el numero de valores mayores que cero leídos*/

#include <iostream>
using namespace std;

int main()
{
    float numero, contador;

    do
    {
        cout << "Ingrese un numero: "; cin >> numero;
        if (numero > 0)
            contador++; 
    } while (numero != 0);

    cout << "\nLa cantidad de numeros positivos es: " << contador << endl << endl;

    system("pause");

    return 0;
}