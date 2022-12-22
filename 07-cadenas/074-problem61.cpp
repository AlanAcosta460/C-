/*61. Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear
otra cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre 
al final de la primera cadena y mostrar el mensaje completo 
"Hola que tal (nombreDelUsuario)"*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char frase[] = "Hola que tal ", nombre[30];

    cout << "Ingrese su nombre: "; cin.getline(nombre, 30, '\n');
    strcat(frase, nombre);
    cout << endl << frase << endl;

    cout << endl; system("pause");
    return 0;
}