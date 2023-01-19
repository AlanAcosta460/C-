//Archivos Binarios

#include <iostream>
#include <fstream>
using namespace std;

struct Registro
{
    char nombre[20]; 
    char apellidos[20];
};

int main()
{
    ofstream archivoB;

    archivoB.open("180-prueba.dat", ios::out | ios::binary);

    if (archivoB.fail())
        cout << "No se puede crear el archivo :(" << endl;
    else
    {
        Registro persona; 

        cout << ".:Ingrese datos:." << endl;
        cout << "Nombre(s): "; gets(persona.nombre);
        cout << "Apellidos: "; gets(persona.apellidos);

        archivoB.write((char *)&persona, sizeof(Registro));
        archivoB.close();
        cout << "\nArchivo creado con exito!!!" << endl;
    }

    cout << endl; system("pause");
    return 0;
}