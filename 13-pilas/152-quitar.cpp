/*Pasos para quitar un elemento de una pila
1. Crear una variable *aux de tipo Nodo.
2. Igualar el n a aux->dato.
3. Pasa pila a siguiente nodo.
4. Eliminar aux.
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
    int numero;

    cout << "Ingrese un numero: "; cin >> numero;
    agregarPila(pila, numero);
    cout << "\nIngrese otro numero: "; cin >> numero;
    agregarPila(pila, numero);

    cout << "\n.:Sacando los elementos de la pila:." << endl;
    while(pila != NULL) //Mientras no sea el final de la pila
    {        
        quitarPila(pila, numero);
        if(pila != NULL)
            cout << numero << ", ";
        else
            cout << numero << endl;
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