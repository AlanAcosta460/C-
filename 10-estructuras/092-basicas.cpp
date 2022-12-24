/*Declaración de estructura:

    struct <nombreEstructura>
    {
        <tipoDato> <nombreCampo>
        <tipoDato> <nombreCampo>
        ...
        <tipoDato> <nombreCampo>
    };
*/

#include <iostream> 
using namespace std;

struct persona
{
    char nombre[30];
    int edad;
} persona1 = {"Alan", 20}, persona2 = {"Omar", 18}, persona3;

int main()
{
    cout << "Persona 1:" << endl;
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    
    cout << "\nPersona 2:" << endl;
    cout << "Nombre: " << persona2.nombre << endl;
    cout << "Edad: " << persona2.edad << endl;

    cout << "\nIngrese su nombre: "; cin.getline(persona3.nombre, 30, '\n');
    cout << "Ingrese su edad: "; cin >> persona3.edad;
    cout << "\nPersona 3:" << endl;
    cout << "Nombre: " << persona3.nombre << endl;
    cout << "Edad: " << persona3.edad << endl;

    cout << endl; system ("pause");
    return 0;
}