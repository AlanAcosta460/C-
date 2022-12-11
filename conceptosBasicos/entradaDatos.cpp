//Lectura o entrada de datos
#include <iostream>

using namespace std;

int main()
{
    int n1; //variable que almacenara el numero que introduzca el usuario
    float n2;

    cout<<"Ingrese un numero entero: ";
    cin>>n1; //con cint>> se asigna el valor ingresado en la variable
    cout<<"El numero que ingreso es el: "<<n1<<endl; /*para imprimir el numero se usan los dos signos de menor << y luego el nombre 
                                                     de la variable*/
    
    cout<<"\nIngrese un numero con punto decimal: ";
    cin>>n2;
    cout<<"El numero que ingreso es el: "<<n2<<endl;

    return 0;
}