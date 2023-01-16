//Añadir texto al final de un archivo

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo;
    string frase;
    char op;

    archivo.open("177-prueba.txt", ios::app); //Abriendo el archivo en modo añadir
    if (archivo.fail())
        cout << "No se pudo abrir el archivo :(" << endl;
    else
    {
        do
        {
            cout << "Ingrese una frase para agregar al archivo: "; getline(cin, frase);
            archivo << frase << endl; 
            cout << "Quiere ingresar otra frase? (s/n): "; cin >> op;
            fflush(stdin);
        } while (op == 'S' || op == 's');

        archivo.close();
    }

    cout << endl; system("pause");
    return 0;
}