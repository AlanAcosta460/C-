/* 3 Realice un programa que lea de la entrada estándar los siguientes datos de una persona: 

        Edad: dato de tipo entero
        Sexo: dato de tipo caracter
        Altura en metros: dato de tipo real
    
    Tras leer los datos, el programa debe mostrarlos en la salida estándar
*/

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo;
    float altura;

    cout << "Ingrese su edad: "; cin >> edad;
    cout << "Ingrese su sexualidad h/m: "; cin >> sexo;
    cout << "Ingrese su altura en metros: "; cin >> altura;

    cout << "\nSu edad es de " << edad << " años" << endl;
    cout << "Su sexualidad es " << sexo << endl;
    cout << "Su altura es de " << altura << " m" << endl;

    return 0;
}
