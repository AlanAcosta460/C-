/*Pasos para eliminar un nodo de la lista: 
1. Preguntar si la lista no esta vacia.
2. Crear un *auxBorar y *anterior = NULL. 
3. Igualar *auxBorrar al inicio de la lista.
4. Recorrer la lista.
5. Eliminar el elemento.
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
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);

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

            case 3:
                cout << "Ingrese el elemento a buscar: "; cin >> dato;
                buscarLista(lista, dato);
                cout << endl; 
                system("pause");
                break; 

            case 4:
                cout << "Ingrese el elemento a elminar: "; cin >> dato;
                eliminarNodo(lista, dato);
                cout << endl; 
                system("pause");
                break;
            
            default:
                cout << "Gracias por usar el programa!!!" << endl;
                break; 
        }
    } while(op != 5);

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
        cout << "Lista Vacia";

    while (actual != NULL)
    {
        cout << actual->dato << "\t";
        actual = actual->siguiente;
    }
}
void buscarLista(Nodo *lista, int n)
{
    Nodo *actual = new Nodo();
    actual = lista;
    bool flag = false;

    while (actual != NULL && actual->dato <= n)
    {
        if (actual->dato == n)
            flag = true;
        actual = actual->siguiente;
    }
    
    if (flag == true)
        cout << "\tSe encontro el elemento " << n << " en la lista!!!" << endl;
    else
        cout << "\tNO se encontro el elemento " << n << " en la lista :(" << endl;
}
void eliminarNodo(Nodo *&lista, int n)
{
    if (lista != NULL)
    {
        Nodo *auxBorrar = lista, *anterior = NULL;

        while (auxBorrar != NULL && auxBorrar->dato != n)   
        {
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }

        if (auxBorrar == NULL)
            cout << "\tElemento no encontrado :(" << endl;
        else if (anterior == NULL) 
        {   
            lista = lista->siguiente;
            delete auxBorrar;
            cout << "\tElemento borrado con exito!!!" << endl;
        }
        else
        {
            anterior->siguiente = auxBorrar->siguiente;
            delete auxBorrar;
            cout << "\tElemento borrado con exito!!!" << endl;
        }
    }
    else
        cout << "\nLista Vacia" << endl;
}

int menu()
{
    int op;

    system("cls");
    cout << "\t.::Menu::." << endl;
    cout << "1. Insertar un numero a la lista" << endl;
    cout << "2. Mostrar los elementos de la lista" << endl;
    cout << "3. Buscar elemento en la lista" << endl;
    cout << "4. Eleminar elemento de la lista" << endl;
    cout << "5. Salir" << endl << endl;
    
    do
    {
        cout << "Ingrese una opcion: "; cin >> op;
        cout << endl;
    } while(op < 1 || op > 5);

    return op;
}