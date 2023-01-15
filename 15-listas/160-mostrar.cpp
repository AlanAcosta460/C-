/*Pasos para mostrar un elemento de una lista: 
1. Crear un nuevo nodo (actual).
2. Igualar ese nuevo nodo (actual) a lista. 
3. Recorrer la lista de inicio a fin 
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

int menu();

int main()
{
    Nodo *lista = NULL;
    int dato, op;
    
    do
    {
        op = menu();

        switch(op)
        {
            case 1:
                cout << "Ingrese un numero: "; cin >> dato;
                insertarLista(lista, dato);
                system("pause");
                break;
            
            case 2:
                mostrarLista(lista);
                cout << endl << endl;
                system("pause");
                break;
            
            default:
                cout << "Gracias por usar el programa!!!" << endl;
                break; 
        }
    } while(op != 3);

    cout << endl; system("pause");
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
void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo();
    actual = lista;

    if(actual != NULL)
        cout << ".:Elementos de la fila:." << endl;
    else
        cout << "Fila Vacia";

    while (actual != NULL)
    {
        cout << actual->dato << "\t";
        actual = actual->siguiente;
    }
}

int menu()
{
    int op;

    system("cls");
    cout << "\t.::Menu::." << endl;
    cout << "1. Insertar un numero a la fila" << endl;
    cout << "2. Mostrar los elementos de la fila" << endl;
    cout << "3. Salir" << endl << endl;
    
    do
    {
        cout << "Ingrese una opcion: "; cin >> op;
        cout << endl;
    } while(op < 1 || op > 3);

    return op;
}