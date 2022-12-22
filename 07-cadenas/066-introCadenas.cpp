//Cadenas de caracteres

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    char palabra[] = "Palabra"; 
    //en el corchete va el numero de elementos en la cadena de caracteres

    //impresion de cadena
    cout << palabra << endl;


    char nombre1[20], nombre2[20];
    //el 20 es el limite de caracteres de la cadena nombre

    cout << "\nUsando gets" << endl;
    cout << "Ingrese su nombre: "; gets(nombre1);
    /*gets funciona mejor que el cin para guardar cadenas pero no respeta 
    el limite establecido al inicio, por lo que usa memoria que no le pertenece*/
    cout << nombre1 << endl;

    cout << "\nUsando cin.getline" << endl;
    cout << "Ingrese su nombre: "; cin.getline(nombre2,20,'\n');
    /*cin.geline funciona asi:
    cin.getline(variable para almacenar, espacio total, cuando debe terminar de guardar)
    */
    cout << nombre2 << endl;


    

    cout << endl;
    system("pause");
    return 0;
}