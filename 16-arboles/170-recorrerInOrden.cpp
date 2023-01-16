/*Pasos para recorrer en Pre Orden un Árbol:
1. Atravezar el sub-árbol izquierdo
2. Visitar la raiz
3. Atravezar el sub-árbol derecho
*/

#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *der, *izq;
};

Nodo *crearNodo(int);
void insertarArbol(Nodo *&, int);
void mostrarArbol(Nodo *, int);
bool buscarArbol(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
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
                insertarArbol(arbol, dato);
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

            default:
                cout << "Gracias por usar el programa!!!" << endl;
                break; 
        }
    } while(op != 6);

    cout << endl; system("pause");
    return 0;
}

Nodo *crearNodo(int n)
{
    Nodo *nuevoNodo = new Nodo(); 

    nuevoNodo->dato = n;
    nuevoNodo->der = NULL;
    nuevoNodo->izq = NULL;

    return nuevoNodo;
}
void insertarArbol(Nodo *&arbol, int n)
{
    if (arbol == NULL) //Árbol vacio
    {
        Nodo *nuevoNodo = crearNodo(n);
        arbol = nuevoNodo;
    }
    else //Árbol con 1 o más nodos
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
            insertarArbol(arbol->izq, n);
        else
            insertarArbol(arbol->der, n);
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
    cout << "6. Salir" << endl << endl;
    
    do
    {
        cout << "Ingrese una opcion: "; cin >> op;
        cout << endl;
    } while(op < 1 || op > 6);

    return op;
}