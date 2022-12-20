#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10]; //como en c, para guardar una cadena en vez de una string se declara como un arreglo
    float altura;

    cout << "Digite su edad: "; cin >> edad;
    cout << "Digite su sexo: "; cin >> sexo;
    cout << "Digite su altura en metros: "; cin >> altura;

    cout << "\nEdad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura  en metros: " << altura << endl;

    return 0;
}