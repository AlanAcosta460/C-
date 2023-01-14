/*Pasos para insertar un elemento en la pila
1. Crear el espacio en memoria para almacenar un nodo.
2. Cargar el valor dentro del nodo (dato).
3. Cargar el puntero pila dentro del nodo (*siguiente).
4. Asginar el nuevo nodo a pila. 
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);

int main()
{
    Nodo *pila = NULL;
    int numero1, numero2;

    cout << "Ingrese un numero: "; cin >> numero1;
    agregarPila(pila, numero1);
    cout << "\nIngrese otro numero: "; cin >> numero2;
    agregarPila(pila, numero2);

    cout << endl; system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;

    cout << "Elemento " << n << " agregado a pila!!!" << endl;
}