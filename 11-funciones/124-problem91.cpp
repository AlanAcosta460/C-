//91. Suma de numeros complejos

#include <iostream>
using namespace std;

struct complejo
{
    float real, imaginaria;
}z1, z2, sum;

void pedirDatosE();
complejo suma(complejo, complejo); //funcion de tipo estructura
void mostrar(complejo);

int main()
{
    pedirDatosE();

    complejo x = suma(z1, z2);

    mostrar(sum);

    cout << endl; system("pause");
    return 0;
}

void pedirDatosE()
{
    cout << "**Numero complejo 1***" << endl;
    cout << "Parte real: "; cin >> z1.real;
    cout << "Parte imaginaria: "; cin >> z1.imaginaria;

    cout << "\n***Numero complejo 2***" << endl;
    cout << "Parte real: "; cin >> z2.real;
    cout << "Parte imaginaria: "; cin >> z2.imaginaria;
    cout << endl;
}

complejo suma(complejo z1, complejo z2)
{
    //la suma se guardar en z1
    sum.real = z1.real + z2.real;
    sum.imaginaria = z1.imaginaria + z2.imaginaria;

    return sum;
}

void mostrar(complejo z)
{
    if (z.imaginaria < 0)
        cout << "El resultado de la suma es: " << z.real << z.imaginaria << "i" << endl;
    else
        cout << "El resultado de la suma es: " << z.real << "+" << z.imaginaria << "i" << endl;
}