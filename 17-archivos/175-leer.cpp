//Lectura de un archivo de texto

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream archivo;
    string texto;

    archivo.open("175-prueba.txt", ios::in); //Abriendo el archivo en modo lectura
    //archivo.open("C://prueba//175-prueba.txt", ios::in); Abre el archivo ubicado en el disco C y en la carpeta prueba

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo :(" << endl;
        exit(1);
    }

    while (!archivo.eof()) //Mientras no sea el final del archivo
    {
        getline(archivo, texto);
        cout << texto << endl;
    }

    archivo.close(); //Cerando el archivo

    cout << endl; system("pause");
    return 0;
}