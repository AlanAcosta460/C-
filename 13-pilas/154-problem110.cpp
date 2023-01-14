/*110. Hacer un programa en C++, utilizando Pilas que contenga el siguiente menú:
    1. Insertar un caracter a la pila.
    2. Mostrar todos los elementos de la pila
    3. Salir
*/

#include <iostream>
using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, char);
void quitarPila(Nodo *&, char &);

int main()
{
    Nodo *pila = NULL;
    char dato, opcionC;
    int opcion = 0;

    while (opcion < 3)
    {
        cout << "\t.:MENU:." << endl;
        cout << "1. Insertar un caracter a la pila" << endl;
        cout << "2. Mostrar todos los elementos de la pila" << endl;
        cout << "3. Salir" << endl;
        cout << "\nIngrese una opcion: "; cin >> opcion;
        cout << endl;
        
        switch (opcion)
        {
            case 1: 
                do    
                {
                    cout << "Ingrese el caracter: "; cin >> dato;
                    agregarPila(pila, dato);
                    cout << "Quiere ingresar otro caracter? (s/n): "; cin >> opcionC;
                    cout << endl;
                }while(opcionC == 'S' || opcionC == 's');
                break;
            
            case 2:
                if(pila != NULL)
                    cout << ".:Elementos de la pila:." << endl;
                else
                    cout << "Pila vacia" << endl;
                
                while(pila != NULL)
                {        
                    quitarPila(pila, dato);
                    if(pila != NULL)
                        cout << dato << ", ";
                    else
                        cout << dato << endl;
                }
                cout << endl;
                break;
            
            default: 
                cout << "Gracias por usar el programa!!!" << endl;
                break;
        }
    }

    cout << endl; system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, char n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;

    cout << "Elemento " << n << " agregado a la pila!!!" << endl;
}

void quitarPila(Nodo *&pila, char &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}