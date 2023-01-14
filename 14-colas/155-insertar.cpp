/*Pasos para insertar un elemento a la cola
1. Crear el espacio en memoria para almacenar un nodo.
2. Asignar ese nuevo nodo al dato que queremos insertar.
3. Asignar los punteros frente y fin hacia el nuevo nodo..
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
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

    system("pause");
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

bool colaVacia(Nodo *frente)
{
    return (frente == NULL)? true : false;
}