/*Pasos para quitar un elemento de una cola
1. Obtener el valor del nodo.
2. Crear un nodo aux y asignarle el frente de la cola
3. Eliminar el nodo del frente de la cola
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
void quitarCola(Nodo *&, Nodo *&, int &);
bool colaVacia(Nodo *);

int main()
{
    Nodo *frente = NULL, *fin = NULL;
    int dato;

    for (int i = 0; i < 3; i ++)
    {
        cout << "Ingrese un numero: "; cin >> dato;
        insertarCola(frente, fin, dato);
    }

    cout << ".:Quitando los nodos de la cola:." << endl;
    while(frente != NULL)
    {
        quitarCola(frente, fin, dato);
        if(frente != NULL)
            cout << dato << ", ";
        else 
            cout << dato << endl;
    }

    cout << endl; system("pause");
    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevoNodo = new Nodo();

    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    
    if(colaVacia(frente))
        frente = nuevoNodo;
    else
        fin->siguiente = nuevoNodo;
    
    fin = nuevoNodo;
    cout << "\tElemento " << n << " insertado a la cola!!!" << endl << endl;
}

void quitarCola(Nodo *&frente, Nodo *&fin, int &n)
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