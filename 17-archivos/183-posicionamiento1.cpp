//Funciones de posicionamiento - escritura

#include <iostream>
#include <fstream>

using namespace std;

void escribir();

int main()
{
    escribir();

    cout << endl; system("pause");
    return 0;
}

void escribir()
{
    ofstream archivo;

    archivo.open("183-posicion.txt", ios::out);

    if (archivo.fail())
    {
        cout << "No se crear el archivo :(" << endl;
        return;
    }
    cout << "Archivo creado con exito!!!" << endl;
    cout << "Posicion actual del archivo: " << archivo.tellp() << endl; 
    archivo.seekp(5); //Posiciona el cursor en N para escribir a partir de ahi 
    archivo << "Prueba";
    cout << "Posicion final del archivo: " << archivo.tellp() << endl;



    archivo.close();
}