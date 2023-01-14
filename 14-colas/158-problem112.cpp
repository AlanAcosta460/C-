/*158. Hacer un programa que guarde datos de clientes de un banco, los almacene 
  en la cola, y por ultimo muestre los clientes en el orden correcto
*/

#include <iostream>
using namespace std;

struct Cliente
{
    char nombre[30], clave[30];
    int edad;
    float saldo;
};

struct Nodo
{
    Cliente dato;
    Nodo *siguiente;
};


void insertarCola(Nodo *&, Nodo *&, Cliente, int);
void quitarCola(Nodo *&, Nodo *&, Cliente &);
bool colaVacia(Nodo *);

void ingresarDatos(Cliente &, int);

int main()
{
    Nodo *frente = NULL, *fin = NULL;
    Cliente dato;
    int i = 1;
    char opChar;
    
    do 
    {
        ingresarDatos(dato, i);
        insertarCola(frente, fin, dato, i);
        cout << "Desea agregar otro cliente? (s/n): "; cin >> opChar;
        cout << endl; fflush(stdin);
        i ++;
    } while(opChar == 'S' || opChar == 's');
    i = 1;

    cout << ".:::Clientes Ingresados:::." << endl;
    while(frente != NULL)
    {
        quitarCola(frente, fin, dato);
        cout << ".:Cliente " << i << ":." << endl;
        cout << "Nombre: " << dato.nombre << endl; 
        cout << "Edad:   " << dato.edad << endl; 
        cout << "Clave:  " << dato.clave << endl; 
        cout << "Saldo:  " << dato.saldo << endl << endl;
        i ++;
    }

    system("pause");
    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, Cliente n, int i)
{
    Nodo *nuevoNodo = new Nodo();

    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    
    if(colaVacia(frente))
        frente = nuevoNodo;
    else
        fin->siguiente = nuevoNodo;
    
    fin = nuevoNodo;
}
void quitarCola(Nodo *&frente, Nodo *&fin, Cliente &n)
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

void ingresarDatos(Cliente &dato, int i)
{
    cout << ".:Cliente " << i << ":." << endl;
    cout << "Nombre: "; cin.getline(dato.nombre, 30, '\n');
    cout << "Edad: "; cin >> dato.edad; fflush(stdin);
    cout << "Clave: "; cin.getline(dato.clave, 30, '\n');
    cout << "Salto: "; cin >> dato.saldo;
    cout << endl;
}