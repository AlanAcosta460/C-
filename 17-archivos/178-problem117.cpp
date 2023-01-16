/*117. Realice un programa que pida al usuario el nombre o ubicación de un fichero de texto
  y, a continuación añade texto en él hasta que el usuario lo decida. 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo;
    string nombre, frase;
    char op;

    cout << "Ingrese el nombre del archivo: "; getline(cin, nombre);
    archivo.open(nombre.c_str(), ios::app);

    if (archivo.fail())
        cout << "\nNo se pudo abrir el archivo :(" << endl;
    else
    {
        do
        {
            cout << " \nIngrese una frase para agregar al archivo: "; getline(cin, frase);
            archivo << frase << endl; 
            cout << "Quiere ingresar otra frase? (s/n): "; cin >> op;
            fflush(stdin);
        } while (op == 'S' || op == 's');

        archivo.close();
    }

    cout << endl; system("pause");
    return 0;
}