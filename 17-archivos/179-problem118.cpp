/*118. Hacer un programa en C++ para guardar numeros telefonicos que muestre un menu con las
  siguientes opciones:
    1. Crear (nombre, apellidos, telefono)
    2. Agregar mas contactos (nombre, apellidos telefono)
    3. Visualizar contactos existentes
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int opcion;
    string nombre;

    do
    {
        system("cls");
        cout << "****Bienvenido a su directorio*****" << endl;
        cout << "1. Crear Nuevo Directorio" << endl;
        cout << "2. Abrir Directorio Existente" << endl;
        cout << "3. Salir" << endl << endl;
        
        do
        {
            cout << "Ingrese una opcion: "; cin >> opcion;
            if (opcion < 1 || opcion > 3)
                cout << "Opcion invalida" << endl;
            fflush(stdin); cout << endl;
        } while (opcion < 1 || opcion > 3);

        switch (opcion)
        {
            case 1:
            {
                ofstream archivo;
                
                cout << "Ingrese el nombre del archivo: "; getline(cin, nombre);
                archivo.open(nombre.c_str(), ios::out);
                archivo << "..:::Directorio:::..";
                archivo.close();
                break;
            }
            
            case 2:
            {    
                ofstream archivo;

                cout << "Ingrese el nombre del archivo: "; getline(cin, nombre);
                archivo.open(nombre.c_str(), ios::in);
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
            system("cls");
            cout << "..::::MENU::::.." << endl;
            cout << "1. Agregar contactos" << endl;
            cout << "2. Visualizar contactos existentes" << endl;
            cout << "3. Abrir otro archivo" << endl;
            cout << "4. Salir" << endl << endl;

            do
            {
                cout << "Ingrese una opcion: "; cin >> opcion;
                if (opcion < 1 || opcion > 4)
                    cout << "Opcion invalida" << endl;
                fflush(stdin); cout << endl;
            } while (opcion < 1 || opcion > 4);

            switch (opcion)
            {
                case 1:
                {    
                    ofstream archivo;
                    string dato;

                    archivo.open(nombre.c_str(), ios::app);

                    fflush(stdin);
                    cout << "Ingrese nombre(s): "; getline(cin, dato);
                    archivo << endl << "Nombre(s): " << dato << endl;
                    cout << "Ingrese apellidos: "; getline(cin, dato);
                    archivo << "Apellidos: " << dato << endl;
                    cout << "Ingrese numero de telefono: "; getline(cin, dato);
                    archivo << "Numero: " << dato << endl;
                
                    archivo.close();
                    cout << endl; system("pause");
                    break;
                }

                case 2:
                {    
                    ifstream archivo;
                    string texto;
                    
                    archivo.open(nombre.c_str(), ios::in);

                    while (!archivo.eof()) //Mientras no sea el final del archivo
                    {
                        getline(archivo, texto);
                        cout << texto << endl;
                    }

                    archivo.close();
                    system("pause");
                    break;
                }

                default: break;
            }
        } while (opcion < 3);
    } while (opcion == 3);

    cout << "Gracias por usar el programa!!!" << endl << endl;
    system("pause");
    return 0;
}