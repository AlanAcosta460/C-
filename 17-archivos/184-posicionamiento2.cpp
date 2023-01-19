//Funciones de posicionamiento - lectura

#include <iostream>
#include <fstream>

using namespace std;

void escribir();
void leer();

int main()
{
    escribir();
    leer();

    cout << endl; system("pause");
    return 0;
}

void escribir()
{
    ofstream archivo;

    archivo.open("184-posicion.txt", ios::out);

    if (archivo.fail())
    {
        cout << "No se crear el archivo :(" << endl;
        return;
    }

    cout << "Archivo creado con exito!!!" << endl;
    cout << "\nPosicion actual del archivo: " << archivo.tellp() << endl; 
    archivo << "Prueba Probando";
    cout << "Posicion final del archivo: " << archivo.tellp() << endl;

    archivo.close();
}

void leer()
{
    ifstream archivo;
    
    archivo.open("184-posicion.txt", ios::in);

    if (archivo.fail())
    {
        cout << "No se crear el archivo :(" << endl;
        return;
    }

    string texto;

    archivo.seekg(7); //Posiciona el cursor en N para leer a partir de ahi
    cout << "\nPosicion actual del archivo: " << archivo.tellg() << endl;
    getline(archivo, texto);
    cout << endl << texto << endl;

    archivo.close();
}
