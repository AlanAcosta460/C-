/*Pasos para insertar un elemento a una lista: 
1. Crear un nuevo nodo.
2. Asignar a nuevoNodo->dato el elemento que queremos incluir a la lista. 
3. Crear dos nodos auxiliares y asignar lista al primero de ellos.
4. Insertar el elemento a la lista.
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);

int main()
{
    Nodo *lista = NULL;
    int dato;

    for (int i = 0; i < 3; i ++)
    {    
        cout << "Ingrese un numero: "; cin >> dato;
        insertarLista(lista, dato);
    }

    system("pause");
    return 0;
}

void insertarLista(Nodo *&lista, int n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;

    Nodo *aux1 = lista, *aux2;
    
    while (aux1 != NULL && aux1->dato < n)
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    
    if (lista == aux1)
        lista = nuevoNodo;
    else
        aux2->siguiente = nuevoNodo;
    
    nuevoNodo->siguiente = aux1;

    cout << "\tElemento " << n << " insertado a la cola!!!" << endl << endl;
}