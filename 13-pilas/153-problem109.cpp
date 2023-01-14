/*109. Hacer un programa para agregar números enteros a una pila, hasta que el usuario
  lo decida, despues mostrar todos los numeros introducidos en la pila
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void quitarPila(Nodo *&, int &);

int main()
{
    Nodo *pila = NULL;
    int dato, nDatos;

    cout << "Ingrese la cantidad de datos: "; cin >> nDatos;
    cout << "\n.:Ingrese datos:." << endl;
    for(int i = 0; i < nDatos; i ++)
    {
        cout << i + 1 << ": "; cin >> dato;
        agregarPila(pila, dato);
        cout << endl;
    }

    cout << ".:Elementos de la pila:." << endl;
    while(pila != NULL) //Mientras no sea el final de la pila
    {        
        quitarPila(pila, dato);
        if(pila != NULL)
            cout << dato << ", ";
        else
            cout << dato << endl;
    }

    cout << endl; system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;

    cout << "Elemento " << n << " agregado a la pila!!!" << endl;
}

void quitarPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}