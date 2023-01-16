/*Pasos para recorrer en Post Orden un Árbol:
1. Atravezar el sub-árbol izquierdo.
2. Atravezar el sub-árbol derecho.
3. Visitar la raiz
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *der, *izq, *padre;
};

Nodo *crearNodo(Nodo *, int);
void insertarArbol(Nodo *&, Nodo *, int);
void mostrarArbol(Nodo *, int);
bool buscarArbol(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);
int menu();

Nodo *arbol = NULL;

int main()
{ 
    int dato, op, contador = 0;;
    
    do
    {
        op = menu();

        switch(op)
        {
            case 1:
                cout << "Ingrese un numero: "; cin >> dato;
                insertarArbol(arbol, NULL, dato);
                cout << "\tElemento " << dato << " insertado al arbol!!!" << endl << endl;
                system("pause");
                break;

            case 2:
                if (arbol == NULL)
                    cout << "\tArbol Vacio" << endl;
                else
                {
                    cout << ".:Elementos del arbol:." << endl << endl;
                    mostrarArbol(arbol, contador);
                } 
                cout << endl;      
                system("pause");
                break;

            case 3:
                if (arbol == NULL)
                    cout << "\tArbol Vacio" << endl;
                else
                {
                    cout << "Ingrese el elemento a buscar: "; cin >> dato;
                    if (buscarArbol(arbol, dato) == true)
                        cout << "\tElemento " << dato << " encontrado!!!" << endl;
                    else 
                        cout << "\tElemento " << dato <<" NO encontrado :(" << endl;
                }
                cout << endl;
                system("pause");
                break;

            case 4:
                if (arbol == NULL)
                    cout << "\tArbol Vacio" << endl;
                else
                {
                    cout << ".:Recorrido en Pre Orden:." << endl;
                    preOrden(arbol);
                }
                cout << endl << endl;
                system("pause");
                break;

            case 5:
                if (arbol == NULL)
                    cout << "\tArbol Vacio" << endl;
                else
                {
                    cout << ".:Recorrido en In Orden:." << endl;
                    inOrden(arbol);
                }
                cout << endl << endl;
                system("pause");
                break;
            
            case 6:
                if (arbol == NULL)
                    cout << "\tArbol Vacio" << endl;
                else
                {
                    cout << ".:Recorrido en Post Orden:." << endl;
                    postOrden(arbol);
                }
                cout << endl << endl;
                system("pause");
                break;

            case 7:
                if (arbol == NULL)
                    cout << "\tArbol Vacio" << endl;
                else
                {
                    cout << "Ingrese el elemento a eliminar: "; cin >> dato;
                    eliminar(arbol, dato);
                    cout << "\tElemento eliminado con exito!!!" << endl;
                }
                cout << endl;
                system("pause");
                break;

            default:
                cout << "Gracias por usar el programa!!!" << endl;
                break; 
        }
    } while(op != 8);

    cout << endl; system("pause");
    return 0;
}

Nodo *crearNodo(Nodo *padre, int n)
{
    Nodo *nuevoNodo = new Nodo(); 

    nuevoNodo->dato = n;
    nuevoNodo->der = NULL;
    nuevoNodo->izq = NULL;
    nuevoNodo->padre = padre;

    return nuevoNodo;
}
void insertarArbol(Nodo *&arbol, Nodo *padre, int n)
{
    if (arbol == NULL) //Árbol vacio
    {
        Nodo *nuevoNodo = crearNodo(padre, n);
        arbol = nuevoNodo;
    }
    else //Árbol con 1 o más nodos
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
            insertarArbol(arbol->izq, arbol, n);
        else
            insertarArbol(arbol->der, arbol, n);
    }
}
void mostrarArbol(Nodo *arbol, int contador)
{
    if (arbol == NULL)
        return;
    else
    {
        mostrarArbol(arbol->der, contador + 1);
        for (int i = 0; i < contador; i ++)
            cout << "   ";
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, contador + 1);
    }
}
bool buscarArbol(Nodo *arbol, int n)
{
    if (arbol == NULL)
        return false;
    else if (arbol->dato == n)
        return true;
    else if (n < arbol->dato)
        return buscarArbol(arbol->izq, n);
    else 
        return buscarArbol(arbol->der, n);
}
void preOrden(Nodo *arbol)
{
    if (arbol == NULL)
        return;
    else 
        cout << arbol->dato << " -> ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
}
void inOrden(Nodo *arbol)
{
    if (arbol == NULL)
        return;
    else
    {
        inOrden(arbol->izq);
        cout << arbol->dato << " -> ";
        inOrden(arbol->der);
    }
}
void postOrden(Nodo *arbol)
{
    if (arbol == NULL)
        return;
    else
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->dato << " -> ";
    }
}
void eliminar(Nodo *arbol, int n)
{
    if (arbol == NULL)
        return;
    else if (n < arbol->dato)
        eliminar(arbol->izq, n);
    else if (n > arbol->dato)
        eliminar(arbol->der, n);
    else
        eliminarNodo(arbol);
}
void eliminarNodo(Nodo *nodoEliminar)
{
    if (nodoEliminar->izq && nodoEliminar->der) //Si tiene hijo izq. y der.
    {
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if (nodoEliminar->izq) //Si tiene hijo izq.
    {
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if (nodoEliminar->der) //Si tiene hijo der.
    {
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else //Si no tiene hijos
    {
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}
Nodo *minimo(Nodo *arbol)
{
    if (arbol == NULL)
        return NULL;
    else if (arbol->izq)
        return minimo(arbol->izq);
    else
        return arbol;
}
void reemplazar(Nodo *arbol, Nodo *nuevoNodo)
{
    if (arbol->padre)
    {
        if (arbol->dato == arbol->padre->izq->dato)
            arbol->padre->izq = nuevoNodo; 
        else if (arbol->dato == arbol->padre->der->dato)
            arbol->padre->der = nuevoNodo;
    }
    if (nuevoNodo)
        nuevoNodo->padre = arbol->padre;
}
void destruirNodo(Nodo *nodo)
{
    nodo->izq = NULL;
    nodo->der = NULL;

    delete nodo;
}
int menu()
{
    int op;

    system("cls");
    cout << "\t.::::Menu::::." << endl;
    cout << "1. Insertar un elemento al arbol" << endl;
    cout << "2. Mostrar el arbol" << endl;
    cout << "3. Buscar elemento" << endl;
    cout << "4. Recorrer el arbol en Pre Orden" << endl;
    cout << "5. Recorrer el arbol en In Orden" << endl;
    cout << "6. Recorrer el arbol en Post Orden" << endl;
    cout << "7. Eliminar elemento" << endl;
    cout << "8. Salir" << endl << endl;
    
    do
    {
        cout << "Ingrese una opcion: "; cin >> op;
        cout << endl;
    } while(op < 1 || op > 8);

    return op;
}