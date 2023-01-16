/*115. Realice un programa que pida al usuario el nombre de un fichero de texto y,
  a continuación permita almacenar al usuario tantas frases como desee 
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo;
    string nombreArchivo, frase;
    char op;

    cout << "Ingrese el nombre del archivo: "; getline(cin, nombreArchivo);
 
    archivo.open(nombreArchivo.c_str(), ios::out);

    if (archivo.fail())
    { 
        cout << "No se pudo abrir el archivo :(" << endl;
        exit(1);
    }

    archivo << ".:Archivo de texto:." << endl; 
    cout << "Archivo creado con exito!!!" << endl;

    do
    {
        cout << "\nIngrese una frase para agregar al archivo: "; getline(cin, frase);
        archivo << frase << endl; 
        cout << "Quiere ingresar otra frase? (s/n): "; cin >> op;
        fflush(stdin);
    } while (op == 'S' || op == 's');

    archivo.close(); 

    cout << endl; system("pause");
    return 0;
}