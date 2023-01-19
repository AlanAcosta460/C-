//Lectura de Archivos Binarios

#include <iostream>
#include <fstream>
using namespace std;

struct Registro
{
    char nombre[20];
    char apellidos[20];
};

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
    ofstream archivoB;

    archivoB.open("181-prueba.dat", ios::out | ios::binary);

    if (archivoB.fail())
    {    
        cout << "No se puede crear el archivo :(" << endl;
        return;
    }

    Registro persona;

    cout << ".:Ingrese datos:." << endl;
    cout << "Nombre(s): "; gets(persona.nombre);
    cout << "Apellidos: "; gets(persona.apellidos);

    archivoB.write((char *)&persona, sizeof(Registro));
    archivoB.close();
    cout << "\nArchivo creado con exito!!!" << endl;
}

void leer()
{
    ifstream archivoB;

    archivoB.open("181-prueba.dat", ios::in | ios::binary);

    if (archivoB.fail())
    {
        cout << "No se pudo abrir el archivo :(" << endl;
        return;
    }

    Registro persona;

    archivoB.read((char *)&persona, sizeof(Registro));

    cout << "\n.:Mostrando los datos:." << endl;
    cout << "Nombre(s): " << persona.nombre << endl;
    cout << "Apellidos: " << persona.apellidos << endl;

    archivoB.close();
}