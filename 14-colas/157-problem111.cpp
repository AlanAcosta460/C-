/*111. Hacer un programa en C++, utilizando Colas que contenga el siguiente menu:
    1. Insertar un caracter a la cola
    2. Mostrar todos los elementos de la cola 
    3. Salir 
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, char);
void quitarCola(Nodo *&, Nodo *&, char &);
bool colaVacia(Nodo *);

int menu();

int main()
{
    Nodo *frente = NULL, *fin = NULL;
    char dato;
    int op;
    
    do
    {
        op = menu();

        switch(op)
        {
            case 1:
                cout << "Ingrese el caracter: ";
                cin >> dato;
                insertarCola(frente, fin, dato);
                cout << endl;
                break;
            
            case 2:
                if(frente != NULL)
                    cout << ".:Quitando los nodos de la cola:." << endl;
                else
                    cout << "Cola Vacia" << endl << endl;

                while(frente != NULL)
                {
                    quitarCola(frente, fin, dato);
                    if(frente != NULL)
                        cout << dato << ", ";
                    else 
                        cout << dato << endl << endl;
                }
                system("pause");
                break;
            
            default:
                cout << "Gracias por usar el programa!!!" << endl;
                break; 
        }
    } while(op < 3);

    cout << endl; system("pause");
    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, char n)
{
    Nodo *nuevoNodo = new Nodo();

    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    
    if(colaVacia(frente))
        frente = nuevoNodo;
    else
        fin->siguiente = nuevoNodo;
    
    fin = nuevoNodo;
    cout << "\tElemento " << n << " insertado a la cola!!!" << endl;
}
void quitarCola(Nodo *&frente, Nodo *&fin, char &n)
{
    n = frente->dato;
    Nodo *aux = frente;

    if(frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
        frente = frente->siguiente;
    
    delete aux;
}
bool colaVacia(Nodo *frente)
{
    return (frente == NULL)? true : false;
}

int menu()
{
    int op;

    system("cls");
    cout << "\t.::Menu::." << endl;
    cout << "1. Insertar un carcter a la cola" << endl;
    cout << "2. Mostrar los elementos de la cola" << endl;
    cout << "3. Salir" << endl << endl;
    
    do
    {
        cout << "Ingrese una opcion: "; cin >> op;
        cout << endl;
    } while(op < 1 || op > 3);

    return op;
}