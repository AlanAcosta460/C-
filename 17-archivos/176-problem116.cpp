/*116. Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto
  y, a continuación de lectura a todo el fichero.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream archivo;
    string nombre, texto;

    cout << "Ingrese el nombre del archivo: "; getline(cin, nombre);
    archivo.open(nombre.c_str(), ios::in);
    cout << endl;

    if (archivo.fail())
        cout << "No existe el archivo :(" << endl;
    else
    {
        while (!archivo.eof()) 
        {
            getline(archivo, texto);
            cout << texto << endl;
        }

        archivo.close();
    }

    cout << endl; system("pause");
    return 0;
}