/*119. Crear un archivo binario donde almacenar un Registro que contenga las pulsasiones de
  un atleta en una determinada hora, el programa debe tener un menu con las siguientes opciones:
    1. Comenzar a digitar las pulsasiones
    2. Añadir mas pulsasiones
    3. Mostrar las pulsasiones registradas
    4. Salir 
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Registro
{
    char hora[20];
    int pulsasiones;
};

void escribir(string);
void leer(string);
int menuPrincipal();
int menuDatos();
int pedirOpcion(int);

int main()
{
    int opcion;
    string nombre;

    do
    {
        opcion = menuPrincipal();

        switch (opcion)
        {
            case 1:
            {
                ofstream archivo;
                
                cout << "Ingrese el nombre del archivo: "; getline(cin, nombre);
                archivo.open(nombre.c_str(), ios::out | ios::binary);
                
                if (archivo.fail())
                {
                    cout << "\nNo se pudo crear el archivo :(" << endl << endl;
                    system("pause");
                    return 0;
                }

                archivo.close();
                break;
            }
            
            case 2:
            {    
                ofstream archivo;

                cout << "Ingrese el nombre del archivo: "; getline(cin, nombre);
                archivo.open(nombre.c_str(), ios::in | ios::binary);
                if (archivo.fail())
                {
                    cout << "\nNo se pudo abrir el archivo :(" << endl << endl;
                    system("pause");
                    return 0;
                }
                archivo.close();
                break;
            }
            
            default:
                cout << "Gracias por usar el programa!!!" << endl << endl;
                system("pause");
                return 0;
                break;
        }

        do 
        {
            opcion = menuDatos();

            switch (opcion)
            {
                case 1: escribir(nombre); break;
                case 2: leer(nombre); break;
                default: break;
            }
        } while (opcion < 3);
    } while (opcion == 3);

    cout << "Gracias por usar el programa!!!" << endl << endl;
    system("pause");
    return 0;
}

void escribir(string nombre)
{
    ofstream archivoB;

    archivoB.open(nombre.c_str(), ios::app | ios::binary);

    if (archivoB.fail())
    {    
        cout << "No se encuentra el archivo :(" << endl;
        return;
    }

    Registro atleta;

    cout << ".:Ingrese datos:." << endl;
    cout << "Hora: "; cin.getline(atleta.hora, 20, '\n');
    cout << "Pulsasiones: "; cin >> atleta.pulsasiones;

    archivoB.write((char *)&atleta, sizeof(Registro));
    archivoB.close();
    cout << endl; system("pause");
}

void leer(string nombre)
{
    ifstream archivoB;

    archivoB.open(nombre.c_str(), ios::in | ios::binary);

    if (archivoB.fail())
    {
        cout << "No se pudo abrir el archivo :(" << endl;
        return;
    }

    Registro atleta;

    cout << ".:Mostrando los datos:." << endl << endl;
    while (!archivoB.eof())
    {
        archivoB.read((char *)&atleta, sizeof(Registro));
        
        if (!archivoB.eof())
        {
            cout << "Hora: " << atleta.hora << endl;
            cout << "Pulsasiones: " << atleta.pulsasiones << endl << endl;
        }
    }

    archivoB.close();
    system("pause"); 
}

int menuPrincipal()
{
    system("cls");
    cout << "****MENU PRINCIPAL*****" << endl;
    cout << "1. Crear Nuevo Archivo" << endl;
    cout << "2. Abrir Archivo Existente" << endl;
    cout << "3. Salir" << endl << endl;

    return pedirOpcion(3);
}

int menuDatos()
{
    system("cls");
    cout << "..::::MENU::::.." << endl;
    cout << "1. Agregar pulsasiones" << endl;
    cout << "2. Visualizar pulsasiones existentes" << endl;
    cout << "3. Abrir otro archivo" << endl;
    cout << "4. Salir" << endl << endl;

    return pedirOpcion(4);
}

int pedirOpcion(int opMax)
{
    int op;

    do
    {
        cout << "Ingrese una opcion: "; cin >> op;
        if (op < 1 || op > opMax)
            cout << "Opcion invalida" << endl;
        fflush(stdin); cout << endl;
    } while (op < 1 || op > opMax);

    return op;
}