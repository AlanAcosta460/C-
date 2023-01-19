//Sobrecarga de Funciones Miembro

#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    Persona *persona1 = new Persona("Alan", 18);
    Persona *persona2 = new Persona("123456789");

    persona1->correr();
    persona2->correr(10);

    cout << endl; system("pause");
    return 0;
}