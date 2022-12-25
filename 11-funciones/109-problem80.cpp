/*80. Escriba una plantilla de funcion llamada maximo() que devuelva el valor
  máximo de tres argumentos que se transmitan a la función cuando sea llamada.
  Suponga que los tres argumentos serán del mismo tipo de datos
*/

#include <iostream>
using namespace std;

template <class All>
All maximo(All a, All b, All c);

int main()
{
    int dato1 = 32, dato2 = 12, dato3 = 49;
    float dato4 = 83.321, dato5 = 83.281, dato6 = 83.392;
    double dato7 = -21.837373, dato8 = -56.210372, dato9 = -1.843023;
    char dato10 = 'g', dato11 = 't', dato12 = 'o';

    cout << "Numeros enteros" << endl;
    cout << dato1 << endl << dato2 << endl << dato3 << endl;

    cout << "\nNumeros flotantes" << endl;
    cout << dato4 << endl << dato5 << endl << dato6 << endl;

    cout << "\nNumeros double" << endl;
    cout << dato7 << endl << dato8 << endl << dato9 << endl;

    cout << "\nCaracteres" << endl;
    cout << dato10 << endl << dato11 << endl << dato12 << endl;

    cout << "\nEl entero mas grande es: " << maximo(dato1,dato2,dato3) << endl;
    cout << "El flotante mas grande es: " << maximo(dato4,dato5,dato6) << endl;
    cout << "El double mas grande es: " << maximo(dato7,dato8,dato9) << endl;
    cout << "El caracter maximo es: " << maximo(dato10,dato11,dato12) << endl;

    cout << endl; system("pause");
    return 0;
}

template <class All>
All maximo(All a, All b, All c)
{
    All maximo; 

    if(a > b && a > c)
        maximo = a;
    else if(b > a && b > c)
        maximo = b;
    else
        maximo = c;
    
    return maximo;
}