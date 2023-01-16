#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escrbir();

int main()
{   
    escrbir();

    cout << endl; system("pause");
    return 0;
}

void escrbir()
{
    ofstream archivo;
    string nombreArchivo, frase;

    cout << "Ingrese el nombre del archivo: "; getline(cin, nombreArchivo);
 
    archivo.open(nombreArchivo.c_str(), ios::out); //Abriendo el archivo
    //archivo.open("173-prueba.txt", ios::out); crear el archivo con un nombre definido por el programador
    //archivo.open("C://prueba//173-prueba.txt", ios::out); crea el archivo en el disco C y en la carpeta prueba

    if (archivo.fail())
    { 
        cout << "No se pudo abrir el archivo :(" << endl;
        exit(1);
    }

    archivo << ".:Archivo de texto:." << endl; //Escribiendo en el archivo
    cout << "Archivo creado con exito!!!" << endl << endl;
    cout << "Ingrese una frase para agregar al archivo: "; getline(cin, frase);
    archivo << frase; 

    archivo.close(); //Cerrando el archivo
}